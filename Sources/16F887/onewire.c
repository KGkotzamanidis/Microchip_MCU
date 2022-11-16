/* Microchip Technology Inc. and its subsidiaries.  You may use this software 
 * and any derivatives exclusively with Microchip products. 
 * 
 * THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS".  NO WARRANTIES, WHETHER 
 * EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED 
 * WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A 
 * PARTICULAR PURPOSE, OR ITS INTERACTION WITH MICROCHIP PRODUCTS, COMBINATION 
 * WITH ANY OTHER PRODUCTS, OR USE IN ANY APPLICATION. 
 *
 * IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
 * INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
 * WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS 
 * BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE.  TO THE 
 * FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS 
 * IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF 
 * ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
 *
 * MICROCHIP PROVIDES THIS SOFTWARE CONDITIONALLY UPON YOUR ACCEPTANCE OF THESE 
 * TERMS. 
 *
 * File: onewire.c   
 * Author: konstantinos gkotzamanidis 
 * Comments:
 * Revision history: 
 */
#include "./../../Libraries/16F887/onewire.h"

/*
 * void DS_Reset_pulse()
 * In this void MCU send reset pulse to DS18B20.
 */
void DS_Reset_pulse(){
    direction = 0;
    sensor = 0;
    __delay_us(500);
    sensor = 1;
    __delay_us(60);
}

/*
 * void DS_Presence_pulse()
 * In this void MCU wait until reset pulse read.
 */
void DS_Presence_pulse(){
    direction = 1;
    while(sensor == 1);
    while(sensor == 0);
    __delay_us(500);
}

/*
 * bool DS_check()
 * In this bool check if the sensor is conected.
 */
bool DS_check(){
    direction = 0;
    sensor = 0;
    __delay_us(500);
    direction = 1;
    __delay_us(60);
    
    if(sensor == 0){
        return true;
    }
    else{
        return false;
    }
}
/*
 * void DS_Set_zero()
 * In this void MCU write 0.
 */
void DS_Set_zero(){
    direction = 0;
    sensor = 0;
    __delay_us(90);
    sensor = 1;
    __delay_us(10);
}

/*
 * void DS_Set_one()
 * In this void MCU write 1.
 */
void DS_Set_one(){
    direction = 0;
    sensor = 0;
    __delay_us(5);
    sensor = 1;
    __delay_us(60);
}

/*
 * char DS_Read_bit()
 * In this char MCU read bit.
 */
char DS_Read_bit(){
    char _bit = 0;
    direction = 0;
    sensor = 0;
    __delay_us(3);
    direction = 1;
    __delay_us(3);
    _bit = sensor;
    __delay_us(90);
    return _bit;
}

/*
 * char DS_Read_byte
 * In this char MCU read first 8 bytes.
 */
char DS_Read_byte(){
    char _byte = 0;
    for(int i=0;i<8;i++){
        _byte = _byte | (DS_Read_bit()<<i);
    }
    return _byte;
}

/*
 * void DS_Write_Command(char command)
 * In this void MCU send an command to sensor.
 */
void DS_Write_command(char command){
    for(int i =0; i<8;i++){
        if(command & 0x01){
            DS_Set_one();
        }
        else{
            DS_Set_zero();
        }
        command = command >>1;
    }
    __delay_us(10);
}

void DS_Set_resolution(char resolution){
    char value = 0;
    switch(resolution){
        case 9:
            value = 0;
            break;
        case 10:
            value = 32;
            break;
        case 11:
            value = 64;
            break;
        case 12:
            value = 96;
            break;
        default:
            value = 96;
    }
    DS_Reset_pulse();
    DS_Presence_pulse();
    DS_Write_command(SKIP_ROM); 
    DS_Write_command(WRITE_SCARTCHPAD); 
    DS_Write_command(0x00); 
    DS_Write_command(value); 
}

float DS_Read_temperature(){
    float temperature;
    unsigned short tempL, tempH;
    DS_Reset_pulse();
    DS_Presence_pulse();
    DS_Write_command(SKIP_ROM);
    DS_Write_command(CONVERT_T);
    __delay_us(800);
    DS_Reset_pulse();
    DS_Presence_pulse();
    DS_Write_command(SKIP_ROM);
    DS_Write_command(READ_SCARTCHPAD);
    /*
    temperature = DS_Read_byte();
    temperature = temperature | (int)(DS_Read_byte() << 8);
    temperature = temperature >> 4;
    DS_Reset_pulse();
    DS_Presence_pulse();
    return temperature;
    */
    tempL = DS_Read_byte();
    tempH = DS_Read_byte();
    
    temperature = ((unsigned int)tempH <<8) + (unsigned int)tempL;
    temperature = temperature * 6.25;
    temperature = temperature / 100;
    
    DS_Reset_pulse();
    DS_Presence_pulse();
    
    return temperature;
}

void DS_Print_temperature(){
    LCD_Printf("16F887 & DS18B20\nTemperature:%fC\n",DS_Read_temperature());
}

void DS_Address(char command){
    uint8_t i;
    if(command == MATCH_ROM){
        DS_Write_command(MATCH_ROM);
        for(i=0;i<DS1820_ADDRESH_LENGH;i++){
            DS_Write_command(Sensor_Address[i]);
        }
    }
    else{
        DS_Write_command(SKIP_ROM);
    }
}

bool Ds_FindNextSensor(void){
    uint8_t state;
    uint8_t byteid;
    uint8_t mask;
    uint8_t bitpos;
    uint8_t nDiscrepancyMarker;
    
    bool bit_b;
    bool status;
    bool next = false;
    
    for(byteid = 0; byteid < 8; byteid++){
        Sensor_Address[byteid] = 0x00;
    }
    
    status = DS_check();
    
    if(status | DoneFlag){
        return false;
    }
    
    DS_Write_command(SEARCH_ROM);
    byteid = 0;
    
    do{
        state = 0;
        if(DS_Read_bit() !=0){
            state = 2;
        }
        __delay_us(120);
        if(DS_Read_bit() !=0){
            state |= 1;
        }
        __delay_us(120);
        
        if(state == 3){
            break;
        }
        else{
            if(state > 0){
                bit_b = (bool)(state >> 1);
            }
            else{
                if(bitpos < LastSensorFount){
                    bit_b = ((Sensor_Address[byteid] & mask)>0);
                }
                else{
                    bit_b = (bitpos == LastSensorFount);
                }
                
                if(bit_b == 0){
                    nDiscrepancyMarker = bitpos;
                }
            }
        }
        if(bit_b !=0){
            Sensor_Address[byteid] |= mask;
        }
        else{
            Sensor_Address[byteid] &= ~mask;
        }
        DS_Write_command(bit_b);
        bitpos++;
        mask = mask << 1;
        if(mask == 0){
            byteid++;
            mask = 1;
        }
    }
    while(byteid < DS1820_ADDRESH_LENGH);
    if(bitpos <65){
        LastSensorFount = 0;
    }
    else{
        LastSensorFount = nDiscrepancyMarker;
        DoneFlag = (LastSensorFount == 0);
        next = true;
    }
    return next;
}

bool DS_FindFirstSensor(void){
    LastSensorFount = 0;
    DoneFlag = false;
    return (Ds_FindNextSensor());
}

void DS_Write_EEPROM(uint8_t tempH, uint8_t tempL){
    DS_Reset_pulse();
    DS_Presence_pulse();
    DS_Write_command(MATCH_ROM);
    DS_Write_command(WRITE_SCARTCHPAD);
    DS_Write_command(tempH);
    DS_Write_command(tempL);
    __delay_us(10);
    DS_Reset_pulse();
    DS_Presence_pulse();
    DS_Address(MATCH_ROM);
    DS_Write_command(COPY_SCARTCHPAD);
    __delay_ms(10);
}