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
 * File: pwm.c  
 * Author: konstantinos gkotzamanidis
 * Comments:
 * Revision history: 
 */

/*
 * CCP1CON Register BitMap.
 * --RW/0---RW/0---RW/0----RW/0-----RW/0-----RW/0-----RW/0-----RW/0---
 * | P1M1 | P1M0 | DC1B1 | DC1B0 | CCP1M3 | CCP1M2 | CCP1M1 | CCP1M0 |
 * -------------------------------------------------------------------
 * bit7                                                             bit0
 * For more informations about how to setup PWM go to 121 in DataSheet.
 */
#include "../Libraries/pwm.h"
#include "../Libraries/io.h"

#pragma warning push
#pragma warning disable 520

void Pwm_Init(uint8_t var_Channel){              
    
    switch(var_Channel){
        case 0:
            CCP1CON = 0x0f;
            PR2 = 100;
            CCPR1L = 50;
            x_BitClear(TRISC,2);
            break;
        case 1:
            CCP1CON = 0x0f;
            PR2 = 100;
            CCPR2L = 50;
            x_BitClear(TRISC,1);
            break;
    }
}

void Pwm_setDutyCycle(uint8_t var_Channel, uint8_t DutyCycle){
    if(DutyCycle > 100){
        DutyCycle = 100;
    }
    
    switch(var_Channel){
        case 0:
            CCPR1L = DutyCycle;
            break;
        case 1:
            CCPR2L = DutyCycle;
            break;
    }
}

void Pwm_Start(){
    TMR2ON = 1;
}

void Pwm_Stop(uint8_t var_Channel){
    switch(var_Channel){
        case 0:
            CCP1CON = 0x00;
            break;
        case 1:
            CCP2CON = 0x00;
            break;
    }
}
#pragma warning pop