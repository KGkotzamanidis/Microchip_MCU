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
 * File: io.c   
 * Author: konstantinos gkotzamanidis 
 * Comments:
 * Revision history: 
 */

#include "io.h"

#pragma warning push
#pragma warning disable 520

/*
 * Select a pin and set it as INPUT or OUTPUT
 */
void pin_Direction(IO_PORT var_pin, uint8_t var_derection){
    uint8_t var_PortNumber;
    var_PortNumber = (var_pin>>3);
    var_pin = var_pin & 0x07;
    
    switch(var_PortNumber){
        case 0:
            x_UpdateBit(TRISA,var_pin,var_derection);
            break;
        case 1:
            x_UpdateBit(TRISB,var_pin,var_derection);
            break;
        case 2:
            x_UpdateBit(TRISC,var_pin,var_derection);
            break;
        case 3:
            x_UpdateBit(TRISD,var_pin,var_derection);
            break;
        case 4:
            x_UpdateBit(TRISE,var_pin,var_derection);
            break;
    }
}

/*
 * void pin_Mode(IO_PORT var_pin, uint8_t mode)
 * mode:Analog/Digital IO
 */
void pin_Mode(IO_PORT var_pin, uint8_t mode){
    uint8_t var_PortNumber;
    var_pin = (var_PortNumber>>3);
    var_pin = var_pin & 0x07;
    
    switch(var_PortNumber){
        case 0:
            x_UpdateBit(ANSEL,var_pin,mode);
            break;
        case 1:
            x_UpdateBit(ANSELH,var_pin,mode);
            break;
        case 2:
            //Doesn't have Analog support.
            break;
        case 3:
            //Doesn't have Analog support.
            break;
        case 4:
            x_UpdateBit(ANSEL,var_pin,mode);
            break;
    }
}
/*
 * Write Digital HIGH or LOW at selected Pin.
 */
void write_Digital(IO_PORT var_pin, uint8_t value){
    uint8_t var_PortNumber;
    var_PortNumber = (var_pin>>3);
    var_pin = var_pin & 0x07;
    
    switch(var_PortNumber){
        case 0:
            x_UpdateBit(PORTA,var_pin,value);
            break;
        case 1:
            x_UpdateBit(PORTB,var_pin,value);
            break;
        case 2:
            x_UpdateBit(PORTC,var_pin,value);
            break;
        case 3:
            x_UpdateBit(PORTD,var_pin,value);
            break;
        case 4:
            x_UpdateBit(PORTE,var_pin,value);
            break;
    }
}

/*
 * Read Digital Volt in selected Pin.
 */
uint8_t read_Digital(IO_PORT var_pin){
    uint8_t var_PortNum;
    uint8_t returnStatus =0;
    
    var_PortNum = (var_pin>>3);
    var_pin = var_pin & 0x07;
    
    switch(var_PortNum){
        case 0:
            returnStatus = x_GetBitStatus(PORTA,var_pin);
            break;
        case 1:
            returnStatus = x_GetBitStatus(PORTB,var_pin);
            break;
        case 2:
            returnStatus = x_GetBitStatus(PORTC,var_pin);
            break;
        case 3:
            returnStatus = x_GetBitStatus(PORTD,var_pin);
            break;
        case 4:
            returnStatus = x_GetBitStatus(PORTE,var_pin);
            break;
    }
    return returnStatus;
}

/*
 * Read bit from a Digital Port.
 */
char read_bit(IO_PORT var_pin){
    uint8_t _bit = 0;
    _bit = read_Digital(var_pin);
    return _bit;
}

/*
 * Read byte from a Digital Port.
 */
char read_byte(IO_PORT var_pin){
    uint8_t _byte  = 0;
    for(int x=0;x<8;x++){
        _byte = _byte | (read_bit(var_pin)<<x);
    }
    return _byte;
}

/*
 * Write byte in Digital Port. 
 */
void write_byte(IO_PORT var_pin, uint8_t var_byte){
    for(int x=0;x<8;x++){
        if(var_byte&0x01){
            write_Digital(var_pin,HIGH);
        }
        else{
            write_Digital(var_pin,LOW);
        }
        var_byte = var_byte>>x;
    }
}
#pragma warning pop