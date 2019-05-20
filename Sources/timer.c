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
#include "macros.h"
#include "timer.h"
#include "lcd.h"

void timer0_mode_source(char mode){
    switch (mode){
        case 't':
            OPTION_REGbits.T0CS = 0;
            break;
        case 'c':
            OPTION_REGbits.T0CS = 1;
            break;
        default:
            OPTION_REGbits.T0CS = 0;
            break;
    }
}

int timer0_return(){
    return TMR0;
}

/*
 *void timer1_enable(bool choice)
 * Input args : bool True or False 
 */
void timer1_enable(bool choice){
    if(choice){
        T1CONbits.TMR1ON = 1;
        T1CONbits.T1OSCEN = 0;
        T1CONbits.TMR1GE = 0;
        T1CONbits.T1GINV = 1;
    }
    else{
        T1CONbits.TMR1ON = 0;
    }
}

/*
 * void timer1_mode_source(char mode,int prescale)
 * Input args1 : char f: Fosc/4
 *               char t: T1CKIpin
 * Input args2 : int 1: Prescale 1-1
 *               int 2: Prescale 1-2
 *               int 4: Prescale 1-4
 *               int 8: Prescale 1-8
 * For more information about timer1 see @ Page 78.
 */
void timer1_mode_source(char mode,int prescale){
    switch(mode){
        case 'f':
            T1CONbits.TMR1CS = 0;
            break;
        case 't':
            T1CONbits.TMR1CS = 1;
            break;
        default:
            T1CONbits.TMR1CS = 0;
            break;
    }
    switch(prescale){
        case 1:
            T1CONbits.T1CKPS0 = 0;
            T1CONbits.T1CKPS1 = 0;
            break;
        case 2:
            T1CONbits.T1CKPS0 = 0;
            T1CONbits.T1CKPS1 = 1;
            break;
        case 4:
            T1CONbits.T1CKPS0 = 1;
            T1CONbits.T1CKPS1 = 0;
            break;
        case 8:
            T1CONbits.T1CKPS0 = 1;
            T1CONbits.T1CKPS1 = 1;
            break;
        default:
            T1CONbits.T1CKPS0 = 0;
            T1CONbits.T1CKPS1 = 0;
            break;
    }
}

int timer1_return(){
    return ((TMR1H<<16)+TMR1L);
}

/*
 * void timer1_mode_source(int comparator_value,int prescale,int postscale)
 * Input args1 : int : Set a value to Comparator with TMR2.
 * Input args2 : int 1  : 1-1
 *               int 4  : 1-4
 *               int 16 : 1-16
 * Input args3 : int 1  :1-1
 *               int 2  :1-2
 *               int 3  :1-3
 *               int 4  :1-4
 *               int 5  :1-5
 *               int 6  :1-6
 *               int 7  :1-7
 *               int 8  :1-8
 *               int 9  :1-9
 *               int 10 :1-10
 *               int 11 :1-11
 *               int 12 :1-12
 *               int 13 :1-13
 *               int 14 :1-14
 *               int 15 :1-15
 *               int 16 :1-16
 */
void timer2_mode_source(int comparator_value,int prescale,int postscale){
    if(comparator_value == 0){
       comparator_value = 0;
    }
    else{
        comparator_value = PR2;
    }
    switch(prescale){
        case 1:
            break;
        case 4:
            break;
        case 16:
            break;
        default:
            break;
    }
    switch(postscale){
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        case 6:
            break;
        case 7:
            break;
        case 8:
            break;
        case 9:
            break;
        case 10:
            break;
        case 11:
            break;
        case 12:
            break;
        case 13:
            break;
        case 14:
            break;
        case 15:
            break;
        case 16:
            break;
        default:
            break;
    }
}

int timer2_return(){
    return TMR2;
}