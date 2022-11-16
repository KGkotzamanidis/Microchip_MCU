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
 * File: analog.c 
 * Author: konstantinos gkotzamanidis
 * Comments:
 * Revision history: 
 */

/*
 * ADCON0 Register BitMap.
 * --ADCS1---ADCS0---CHS3----CHS2----CHS1----CHS0----GO/DONE----ADON---
 * | R/W-0 | R/W-0 | R/W-0 | R/W-0 | R/W-0 | R/W-0 | Go/R/W-0 | R/W-0 |
 * --------------------------------------------------------------------
 * bit7                                                             bit0
 * 
 * ADCON1 Register BitMap.
 * --ADFM-----U-0----VCFG1----VCFG0---U-0----U-0------U-0-----U-0--
 * | R/W-0 |   0   | R/W-0 | R/W-0 |   0   |   0   |   0   |   0   |
 * -----------------------------------------------------------------
 * bit7                                                          bit0
 * For more information about ADC look at page 103/104 in DataSheet.
 */
#include "./../../Libraries/16F887/analog.h"
#include "./../../Libraries/16F887/delay.h"

#pragma warning push
#pragma warning disable 520

/*
 * Initiallize Analog to Digital Converter
 */
void ADC_Init(bool a_negative_voltager, bool a_positive_voltag){
    if(a_negative_voltager){
        ADCON1bits.VCFG1 = 1;
    }else{
        ADCON1bits.VCFG1 = 0;
    }
    if(a_positive_voltag){
        ADCON1bits.VCFG0 = 1;
    }
    else{
        ADCON1bits.VCFG0 = 0;
    }
    ADCON0 = 0x00; //->Set Freq/2,AN0 port as sampling,Complete Flag,Enable ADC.
    ADCON1bits.ADFM = 1;
}

/*
 * Create method like Arduio "Analog Read" for more info about how it works
 * read the DataSheet for PIC16F887 in ADC chapter in DOC.
 * Input arg: 1 of 14 channel
 */
uint16_t read_Analog(uint8_t var_Channel){
    if(var_Channel > 13){
        var_Channel = 0;
    }
    switch(var_Channel){
        case 0:
            ADCON0bits.CHS0 = 0;
            ADCON0bits.CHS1 = 0;
            ADCON0bits.CHS2 = 0;
            ADCON0bits.CHS3 = 0;
            break;
        case 1:
            ADCON0bits.CHS0 = 1;
            ADCON0bits.CHS1 = 0;
            ADCON0bits.CHS2 = 0;
            ADCON0bits.CHS3 = 0;
            break;
        case 2:
            ADCON0bits.CHS0 = 0;
            ADCON0bits.CHS1 = 1;
            ADCON0bits.CHS2 = 0;
            ADCON0bits.CHS3 = 0;
            break;
        case 3:
            ADCON0bits.CHS0 = 1;
            ADCON0bits.CHS1 = 1;
            ADCON0bits.CHS2 = 0;
            ADCON0bits.CHS3 = 0;
            break;
        case 4:
            ADCON0bits.CHS0 = 0;
            ADCON0bits.CHS1 = 0;
            ADCON0bits.CHS2 = 1;
            ADCON0bits.CHS3 = 0;
            break;
        case 5:
            ADCON0bits.CHS0 = 1;
            ADCON0bits.CHS1 = 0;
            ADCON0bits.CHS2 = 1;
            ADCON0bits.CHS3 = 0;
            break;
        case 6:
            ADCON0bits.CHS0 = 0;
            ADCON0bits.CHS1 = 1;
            ADCON0bits.CHS2 = 1;
            ADCON0bits.CHS3 = 0;
            break;
        case 7:
            ADCON0bits.CHS0 = 1;
            ADCON0bits.CHS1 = 1;
            ADCON0bits.CHS2 = 1;
            ADCON0bits.CHS3 = 0;
            break;
        case 8:
            ADCON0bits.CHS0 = 0;
            ADCON0bits.CHS1 = 0;
            ADCON0bits.CHS2 = 0;
            ADCON0bits.CHS3 = 1;
            break;
        case 9:
            ADCON0bits.CHS0 = 1;
            ADCON0bits.CHS1 = 0;
            ADCON0bits.CHS2 = 0;
            ADCON0bits.CHS3 = 1;
            break;
        case 10:
            ADCON0bits.CHS0 = 0;
            ADCON0bits.CHS1 = 1;
            ADCON0bits.CHS2 = 0;
            ADCON0bits.CHS3 = 1;
            break;
        case 11:
            ADCON0bits.CHS0 = 1;
            ADCON0bits.CHS1 = 1;
            ADCON0bits.CHS2 = 0;
            ADCON0bits.CHS3 = 1;
            break;
        case 12:
            ADCON0bits.CHS0 = 0;
            ADCON0bits.CHS1 = 0;
            ADCON0bits.CHS2 = 1;
            ADCON0bits.CHS3 = 1;
            break;
        case 13:
            ADCON0bits.CHS0 = 1;
            ADCON0bits.CHS1 = 0;
            ADCON0bits.CHS2 = 1;
            ADCON0bits.CHS3 = 1;
            break;
        default:
            ADCON0bits.CHS0 = 0;
            ADCON0bits.CHS1 = 0;
            ADCON0bits.CHS2 = 0;
            ADCON0bits.CHS3 = 0;
            break;
    }
    ADON = 1;
    Delay_us(10);
    GO = 1;
    
    while(GO_DONE ==1){
        //Loop until GO_DONE = 1
    }
    return ((ADRESH<<8)+ADRESL);
}
#pragma warning pop