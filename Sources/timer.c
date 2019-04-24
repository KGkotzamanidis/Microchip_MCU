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
 * File: timer.c   
 * Author: konstantinos gkotzamanidis 
 * Comments:
 * Revision history: 
 */
#include "timer.h"

/*
 * void enable_timer0(bool e_tmr0)
 * Input args: (true/false)
 * For more info about how to setup the Timer0 go in page 75 @ Pic16f887 datasheet.
 */
void enable_timer0(bool e_tmr0){
    if(e_tmr0){
        T0IE = 1;
        T0IF = 0;
    }else{
        T0IE = 0;
        T0IF = 0;
    }
    return;
}

/*
 * void mode_timer0(char amode)
 * Input args: ('c' for Counter mode
 *              't' for Timer mode)
 * For more info about how to setup the Timer0 go in page 75 @ Pic16F887 datasheet.
 */
void mode_timer0(char amode){
    switch(amode){
        case 'c':
            T0CS = 1;
            break;
        case 't':
            T0CS = 0;
            break;
        default:
            break;
    }
    return;
    
}

/*
 * void enable_timer1(bool e_tmr0)
 * Input args: (true/false)
 * For more info about how to setup the Timer0 go in page 78 @ Pic16f887 datasheet.
 */
void enable_timer1(bool e_tmr1){
    if(e_tmr1){
        TMR1ON = 1;
        TMR1IE = 1;
    }
    else{
        TMR1ON = 0;
        TMR1IE = 0;
    }
    return;
}

/*
 * void enable_timer2(bool e_tmr0)
 * Input args: (true/false)
 * For more info about how to setup the Timer0 go in page 83 @ Pic16f887 datasheet.
 */
void enable_timer2(bool e_tmr2){
    if(e_tmr2){
        TMR2ON = 1;
    }
    else{
        TMR2ON = 0;
    }
    return;
}

/*
 * void match_timer2(int value)
 * Input args: (0 ~ 255)
 * For more info about how to setup the Timer0 go in page 83 @ Pic16f887 datasheet.
 */
void match_timer2(int value){
    if(value >= 255){
        value = 255;
    }
    else if(value <= 0){
        value = 0;
    }
    PR2 = value;
    return;
}