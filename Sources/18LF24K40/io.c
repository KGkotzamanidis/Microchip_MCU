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

#include "./../../Libraries/18LF24K40/io.h"

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
    }
}

/*
 * void pin_Mode(IO_PORT var_pin, uint8_t mode)
 * mode:Analog/Digital IO
 */
void pin_Mode(IO_PORT var_pin, uint8_t mode){
    switch (var_pin){
        case RA_0:
            if(mode == ANALOG){
                ANSELAbits.ANSELA0 = 1;
            }else{
                ANSELAbits.ANSELA0 = 0;
            }
            break;
        case RA_1:
           if(mode == ANALOG){
                ANSELAbits.ANSELA1 = 1;
            }else{
                ANSELAbits.ANSELA1 = 0;
            }
            break;
        case RA_2:
            if(mode == ANALOG){
                ANSELAbits.ANSELA2 = 1;
            }else{
                ANSELAbits.ANSELA2 = 0;
            }
            break;
        case RA_3:
            if(mode == ANALOG){
                ANSELAbits.ANSELA3 = 1;
            }else{
                ANSELAbits.ANSELA3 = 0;
            }
            break;
        case RA_4:
            if(mode == ANALOG){
                ANSELAbits.ANSELA4 = 1;
            }else{
                ANSELAbits.ANSELA4 = 0;
            }
            break;
        case RA_5:
            if(mode == ANALOG){
                ANSELAbits.ANSELA5 = 1;
            }else{
                ANSELAbits.ANSELA5 = 0;
            }
            break;
        case RA_6:
            if(mode == ANALOG){
                ANSELAbits.ANSELA6 = 1;
            }else{
                ANSELAbits.ANSELA6 = 0;
            }
            break;
        case RA_7:
            if(mode == ANALOG){
                ANSELAbits.ANSELA7 = 1;
            }else{
                ANSELAbits.ANSELA7 = 0;
            }
            break;
        case RB_0:
            if(mode == ANALOG){
                ANSELBbits.ANSELB0 = 1;
            }else{
                ANSELBbits.ANSELB0 = 0;
            }
            break;
        case RB_1:
            if(mode == ANALOG){
                ANSELBbits.ANSELB1 = 1;
            }else{
                ANSELBbits.ANSELB1 = 0;
            }
            break;
        case RB_2:
            if(mode == ANALOG){
                ANSELBbits.ANSELB2 = 1;
            }else{
                ANSELBbits.ANSELB2 = 0;
            }
            break;
        case RB_3:
            if(mode == ANALOG){
                ANSELBbits.ANSELB3 = 1;
            }else{
                ANSELBbits.ANSELB3 = 0;
            }
            break;
        case RB_4:
            if(mode == ANALOG){
                ANSELBbits.ANSELB4 = 1;
            }else{
                ANSELBbits.ANSELB4 = 0;
            }
            break;
        case RB_5:
            if(mode == ANALOG){
                ANSELBbits.ANSELB5 = 1;
            }else{
                ANSELBbits.ANSELB5 = 0;
            }
            break;
        case RB_6:
            if(mode == ANALOG){
                ANSELBbits.ANSELB6 = 1;
            }else{
                ANSELBbits.ANSELB6 = 0;
            }
            break;
        case RB_7:
            if(mode == ANALOG){
                ANSELBbits.ANSELB7 = 1;
            }else{
                ANSELBbits.ANSELB7 = 0;
            }
            break;
        case RC_0:
            if(mode == ANALOG){
                ANSELCbits.ANSELC0 = 1;
            }else{
                ANSELCbits.ANSELC0 = 0;
            }
            break;
        case RC_1:
            if(mode == ANALOG){
                ANSELCbits.ANSELC1 = 1;
            }else{
                ANSELCbits.ANSELC1 = 0;
            }
            break;
        case RC_2:
            if(mode == ANALOG){
                ANSELCbits.ANSELC2 = 1;
            }else{
                ANSELCbits.ANSELC2 = 0;
            }
            break;
        case RC_3:
            if(mode == ANALOG){
                ANSELCbits.ANSELC3 = 1;
            }else{
                ANSELCbits.ANSELC3 = 0;
            }
            break;
        case RC_4:
            if(mode == ANALOG){
                ANSELCbits.ANSELC4 = 1;
            }else{
                ANSELCbits.ANSELC4 = 0;
            }
            break;
        case RC_5:
            if(mode == ANALOG){
                ANSELCbits.ANSELC5 = 1;
            }else{
                ANSELCbits.ANSELC5 = 0;
            }
            break;
        case RC_6:
            if(mode == ANALOG){
                ANSELCbits.ANSELC6 = 1;
            }else{
                ANSELCbits.ANSELC6 = 0;
            }
            break;
        case RC_7:
            if(mode == ANALOG){
                ANSELCbits.ANSELC7 = 1;
            }else{
                ANSELCbits.ANSELC7 = 0;
            }
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