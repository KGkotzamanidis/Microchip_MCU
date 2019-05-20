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
#include "analog.h"
#include "delay.h"

#pragma warning push
#pragma warning disable 520

/*
 * Initiallize Analog to Digital Converter
 */
void ADC_Init(){
    ADCON0 = 0x00; //->Set Freq/2,AN0 port as sampling,Complete Flag,Enable ADC.
    ADCON1 = 0x80; //->Set Conversion Resualt Format,Voltager Ref 1, Voltage Ref 2.
}

/*
 * Create method like Arduino "Analog Read" for more info about how it works
 * read the DataSheet for PIC16F887 in ADC chapter in DOC.
 * Input arg: 1 of 14 channel
 */
uint16_t read_Analog(uint8_t var_Channel){
    if(var_Channel > 13){
        return 0;
    }
    
    ADCON0 = (var_Channel<<3);
    ADON = 1;
    Delay_us(10);
    GO = 1;
    
    while(GO_DONE ==1){
        //Loop until GO_DONE = 1
    }
    return ((ADRESH<<8)+ADRESL);
}
#pragma warning pop