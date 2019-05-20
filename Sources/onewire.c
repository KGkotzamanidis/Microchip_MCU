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
#include "lcd.h"

#pragma warning push
#pragma warning disable 520

/*
 * void DS_Resolution(int resolution)
 * Input args: (9-10-11-12)
 * For more information about how to set up the resolution Configurations
 * see the Table 2 at page 9.
 */
void DS_Resolution(int resolution){
    if(resolution < 9 || resolution > 12){
        Sensor_Resolution_Time = 750;
        Sensor_Resolution_CMD = 0x7F;
    }
    else{
        switch(resolution){
            case 9:
                Sensor_Resolution_Time = 93.75;
                Sensor_Resolution_CMD = 0x1F;
                break;
            case 10:
                Sensor_Resolution_Time = 157.5;
                Sensor_Resolution_CMD = 0x3F;
                break;
            case 11:
                Sensor_Resolution_Time = 375;
                Sensor_Resolution_CMD = 0x5F;
                break;
            case 12:
                Sensor_Resolution_Time = 750;
                Sensor_Resolution_CMD = 0x7F;
                break;
        }
    }
}

/*
 * unsigned char DS_Reset(IO_PORT Sensor_Pin)
 * Input args: Sensor digital pin.
 * For more information about how the DS_Reset method work read in
 * page 15. Figure 15
 */
unsigned char DS_Reset(IO_PORT Sensor_Pin){
    pin_Derection(Sensor_Pin, OUTPUT);
    write_Digital(Sensor_Pin, LOW);
    Delay_us(480);
    pin_Derection(Sensor_Pin, INPUT);
    Delay_us(60);
    
    if(read_Digital(Sensor_Pin) == LOW){
        Delay_us(480);
        return 0;
    }
    else{
        Delay_us(480);
        return 1;
    }
}

/*
 * unsigned char DS_Read(IO_PORT Sensor_Pin)
 * Input args: Sensor digital pin.
 * For more information about how the DS_Read method work read in
 * page 16. Figure 16
 */
unsigned char DS_Read(IO_PORT Sensor_Pin){
    char i, result = 0;
    pin_Derection(Sensor_Pin, INPUT);
    
    for(i=0; i<7; i++){
        pin_Derection(Sensor_Pin, OUTPUT);
        write_Digital(Sensor_Pin, LOW);
        Delay_us(2);
        pin_Derection(Sensor_Pin, INPUT);
        
        if(read_Digital(Sensor_Pin) != LOW){
            result |= 1<<i;
        }
        Delay_us(60);
    }
    return result;
}

/*
 * unsigned char DS_Read_bit(IO_PORT Sensor_Pin)
 * Input args: Sensor digital pin.
 * For more information about how the DS_Read method work read in
 * page 16. Figure 16
 */
unsigned char DS_Read_bit(IO_PORT Sensor_Pin){
    unsigned char i;
    pin_Derection(Sensor_Pin, INPUT);
    write_Digital(Sensor_Pin, LOW);
    pin_Derection(Sensor_Pin, INPUT);
    write_Digital(Sensor_Pin, HIGH);
    for(i=0; i<3; i++){
        //empty loop for delay
    }
    return read_Digital(Sensor_Pin);
}

/*
 * void DS_Write(IO_PORT Sensor_Pin, uint8_t CMD)
 * Input args: Sensor digital pin and Command
 * For more information about how the DS_Read method work read in
 * page 16. Figure 16
 */
void DS_Write(IO_PORT Sensor_Pin, uint8_t CMD){
    uint8_t i;
    pin_Derection(Sensor_Pin, INPUT);
    
    for(i=0; i<7; i++){
        if((CMD & (1<<i)) !=0){
            pin_Derection(Sensor_Pin, OUTPUT);
            write_Digital(Sensor_Pin, LOW);
            Delay_us(1);
            write_Digital(Sensor_Pin, HIGH);
            Delay_us(60);
        }
        else{
            pin_Derection(Sensor_Pin, OUTPUT);
            write_Digital(Sensor_Pin, LOW);
            Delay_us(60);
            pin_Derection(Sensor_Pin, INPUT);
        }
    }
}

/*
 * void DS_Write_bit(IO_PORT Sensor_Pin, uint8_t CMD)
 * Input args: Sensor digital pin and Command
 * For more information about how the DS_Read method work read in
 * page 16. Figure 16
 */
void DS_Write_bit(IO_PORT Sensor_Pin, uint8_t CMD){
    pin_Derection(Sensor_Pin, OUTPUT);
    write_Digital(Sensor_Pin, LOW);
    
    if(CMD == 1){
        write_Digital(Sensor_Pin, HIGH);
    }
    Delay_us(5);
    pin_Derection(Sensor_Pin, INPUT);
    write_Digital(Sensor_Pin, HIGH);
}
#pragma warning pop