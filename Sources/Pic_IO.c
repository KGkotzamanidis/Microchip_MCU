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
 */

#include <pic16f887.h>
#include "Pic16f887_Utils.h"
#include "Pic_IO.h"

#pragma warning push
#pragma warning disable 752
#pragma warning disable 1496

void Pic_IO_Mode(Pic_IO_Ports enum_pinNumber,uint8_t var_pinDir){
    
    uint8_t var_portNumber;
    
    var_portNumber = (enum_pinNumber>>3);
    enum_pinNumber = enum_pinNumber & 0x07;
    
    switch(var_portNumber){
        case 0:
            Pic_UpdateBit(TRISA,enum_pinNumber,var_pinDir);
            break;
        case 1:
            Pic_UpdateBit(TRISB,enum_pinNumber,var_pinDir);
            break;
        case 2:
            Pic_UpdateBit(TRISC,enum_pinNumber,var_pinDir);
            break;
        case 3:
            Pic_UpdateBit(TRISD,enum_pinNumber,var_pinDir);
            break;
        case 4:
            Pic_UpdateBit(TRISE,enum_pinNumber,var_pinDir);
            break;
    }
}

void Pic_IO_Write(Pic_IO_Ports enum_pinNumber, uint8_t var_pinValue){
    
    uint8_t var_portNumber;
    
    var_portNumber = (enum_pinNumber>>3);
    enum_pinNumber = enum_pinNumber & 0x07;
    
    switch(var_portNumber){
        case 0:
            Pic_UpdateBit(PORTA,enum_pinNumber,var_pinValue);
            break;
        case 1:
            Pic_UpdateBit(PORTB,enum_pinNumber,var_pinValue);
            break;
        case 2:
            Pic_UpdateBit(PORTC,enum_pinNumber,var_pinValue);
            break;
        case 3:
            Pic_UpdateBit(PORTD,enum_pinNumber,var_pinValue);
            break;
        case 4:
            Pic_UpdateBit(PORTE,enum_pinNumber,var_pinValue);
            break;
    }
}

uint8_t Pic_IO_Read(Pic_IO_Ports enum_pinNumber){
    
    uint8_t var_portNumber;
    uint8_t returnStatus = 0;
    
    var_portNumber = (enum_pinNumber>>3);
    enum_pinNumber = enum_pinNumber & 0x07;
    
    switch(var_portNumber){
        case 0:
            returnStatus = Pic_GetBitStatus(PORTA,enum_pinNumber);
            break;
        case 1:
            returnStatus = Pic_GetBitStatus(PORTB,enum_pinNumber);
            break;
        case 2:
            returnStatus = Pic_GetBitStatus(PORTC,enum_pinNumber);
            break;
        case 3:
            returnStatus = Pic_GetBitStatus(PORTD,enum_pinNumber);
            break;
        case 4:
            returnStatus = Pic_GetBitStatus(PORTE,enum_pinNumber);
            break;
    }
    return returnStatus;
}
#pragma warning pop