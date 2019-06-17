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
#include "onewire.h"

void DS_Reset_pulse(){
    direction = 0;
    sensor = 0;
    __delay_us(500);
    sensor = 1;
    __delay_us(60);
}

void DS_Presence_pulse(){
    direction = 1;
    while(sensor == 1);
    while(sensor == 0);
    __delay_us(500);
}

void DS_Set_zero(){
    direction = 0;
    sensor = 0;
    __delay_us(90);
    sensor = 1;
    __delay_us(10);
}

void DS_Set_one(){
    direction = 0;
    sensor = 0;
    __delay_us(5);
    sensor = 1;
    __delay_us(60);
}

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

char DS_Read_byte(){
    char _byte = 0;
    for(int i=0;i<8;i++){
        _byte = _byte | (DS_Read_bit()<<i);
    }
    return _byte;
}

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

int DS_Read_temperature(){
    int temperature = 0;
    DS_Reset_pulse();
    DS_Presence_pulse();
    DS_Write_command(SKIP_ROM);
    DS_Write_command(CONVERT_T);
    __delay_us(800);
    DS_Reset_pulse();
    DS_Presence_pulse();
    DS_Write_command(SKIP_ROM);
    DS_Write_command(READ_SCARTCHPAD);
    
    temperature = DS_Read_byte();
    temperature = temperature | (int)(DS_Read_byte() << 8);
    
    DS_Reset_pulse();
    DS_Presence_pulse();
    return temperature;
}
