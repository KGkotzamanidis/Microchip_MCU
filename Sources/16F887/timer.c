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
#include "./../../Libraries/16F887/timer.h"

/*
 * void enable_TMR0(bool enable,char select_Clock,bool enable_Prescaler,int set_Prescaler)
 * input arg0: bool enable(true/false)
 * input arg1: char select_edge(h/l)
 * input arg2: char select_Clock(f/t)
 *              f:Fosc/4
 *              t:T0CKI pin
 * input arg3: bool enable_Prescaler(true/false)
 * input arg4: int set_Prescaler(2,4,8,16,32,64,128,256)
 * For more info about Timer0 see @ page 75.
 */
void enable_TMR0(bool enable,char select_edge,char select_clock,bool enable_Prescaler,int set_Prescaler){
    if(enable){
        INTCONbits.GIE = 1;
        INTCONbits.PEIE = 1;
        INTCONbits.T0IE = 1;
        INTCONbits.T0IF = 0;
        TMR0 = 0x00;
        switch(select_edge){
            case 'l':
                OPTION_REGbits.T0SE = 1;
                break;
            case 'h':
                OPTION_REGbits.T0SE = 0;
                break;
            default:
                OPTION_REGbits.T0SE = 0;
                break;
        }
        switch(select_clock){
        case 'f':
            OPTION_REGbits.T0CS = 0;
            break;
        case 't':
            OPTION_REGbits.T0CS = 1;
            break;
        default:
            OPTION_REGbits.T0CS = 0;
            break;
        }
        if(enable_Prescaler){
            OPTION_REGbits.PSA = 0;
            switch(set_Prescaler){
                case 2:
                    OPTION_REGbits.PS0 = 0;
                    OPTION_REGbits.PS1 = 0;
                    OPTION_REGbits.PS2 = 0;
                    break;
                case 4:
                    OPTION_REGbits.PS0 = 1;
                    OPTION_REGbits.PS1 = 0;
                    OPTION_REGbits.PS2 = 0;
                    break;
                case 8:
                    OPTION_REGbits.PS0 = 0;
                    OPTION_REGbits.PS1 = 1;
                    OPTION_REGbits.PS2 = 0;
                    break;
                case 16:
                    OPTION_REGbits.PS0 = 1;
                    OPTION_REGbits.PS1 = 1;
                    OPTION_REGbits.PS2 = 0;
                    break;
                case 32:
                    OPTION_REGbits.PS0 = 0;
                    OPTION_REGbits.PS1 = 0;
                    OPTION_REGbits.PS2 = 1;
                    break;
                case 64:
                    OPTION_REGbits.PS0 = 1;
                    OPTION_REGbits.PS1 = 0;
                    OPTION_REGbits.PS2 = 1;
                    break;
                case 128:
                    OPTION_REGbits.PS0 = 0;
                    OPTION_REGbits.PS1 = 1;
                    OPTION_REGbits.PS2 = 1;
                    break;
                case 256:
                    OPTION_REGbits.PS0 = 1;
                    OPTION_REGbits.PS1 = 1;
                    OPTION_REGbits.PS2 = 1;
                    break;
                default:
                    OPTION_REGbits.PS0 = 0;
                    OPTION_REGbits.PS1 = 0;
                    OPTION_REGbits.PS2 = 0;
                    break;
            }
        }else{
            OPTION_REGbits.PSA = 1;
        }
    }else{
        INTCONbits.GIE = 0;
        INTCONbits.PEIE = 0;
        INTCONbits.T0IE = 0;
        INTCONbits.T0IF = 0;
    }
}

/*
 * void set_TMR0(uint8_t timer)
 * arg0: uint8_t timer
 * Set the value of the timer0.
 */
void set_TMR0(uint8_t timer){
    TMR0 = timer;
}

/*
 * uint8_t get_TMR0
 * return the value of the timer0.
 */
uint8_t get_TMR0(){
    return TMR0;
}

/*
 * void enable_TMR1(bool enable,char select_clock,int set_Prescaler,bool enable_sychronize)
 * input arg0: bool enable(true/false)
 * input arg1: char select_clock(e/f)
 *              e:External clock
 *              f:Fosc/4
 * input arg2: int set_Prescaler(1,2,4,8)
 * input arg3: bool enable_synchronize(true,false)
 * For more info about Timer0 see @ page 78.
 */
void enable_TMR1(bool enable,char select_clock,int set_Prescaler,bool enable_sychronize){
    if(enable){
        T1CONbits.TMR1ON = 1;
        PIE1bits.TMR1IE = 1;
        PIR1bits.TMR1IF = 0;
        INTCONbits.GIE = 1;
        INTCONbits.PEIE = 1;
        switch(select_clock){
            case 'e':
                T1CONbits.TMR1CS = 1;
                break;
            case 'f':
                T1CONbits.TMR1CS = 0;
                break;
            default:
                T1CONbits.TMR1CS = 0;
                break;
        }
        switch(set_Prescaler){
            case 1:
                T1CONbits.T1CKPS0 = 0;
                T1CONbits.T1CKPS1 = 0;
                break;
            case 2:
                T1CONbits.T1CKPS0 = 1;
                T1CONbits.T1CKPS1 = 0;
                break;
            case 4:
                T1CONbits.T1CKPS0 = 0;
                T1CONbits.T1CKPS1 = 1;
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
        if(enable_sychronize){
            T1CONbits.T1SYNC = 0;
        }
        else{
            T1CONbits.T1SYNC = 1;
        }
    }else{
        T1CONbits.TMR1ON = 0;
        PIE1bits.TMR1IE = 0;
        PIR1bits.TMR1IF = 0;
        INTCONbits.GIE = 0;
        INTCONbits.PEIE = 0;
    }
}

/*
 * void set_TMR1(uint16_t time)
 * input arg0: int time
 */
void set_TMR1(uint16_t time){
    TMR1H = time >> 8;
    TMR1L = time & 0xFF;
}

/*
 * uint16_t getTMR1()
 * return the value of the timer1.
 */
uint16_t get_TMR1(){
    return ((TMR1H << 8) + TMR1L);
}

/*
 * void enable_TMR2(bool enable,int set_Prescaler,int set_Postscaler)
 * input arg0: bool enable(true/false)
 * input arg1: int set_Prescaler(1,4,16)
 * input arg2: int set_Postscaler(1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16)
 * For more info about Timer0 see @ page 83.
 */
void enable_TMR2(bool enable,int set_Prescaler,int set_Postscaler){
    if(enable){
        T2CONbits.TMR2ON = 1;
        PIE1bits.TMR2IE = 1;
        PIR1bits.TMR2IF = 0;
        INTCONbits.GIE = 1;
        INTCONbits.PEIE = 1;
        switch(set_Prescaler){
            case 1:
                T2CONbits.T2CKPS0 = 0;
                T2CONbits.T2CKPS1 = 0;
                break;
            case 4:
                T2CONbits.T2CKPS0 = 1;
                T2CONbits.T2CKPS1 = 0;
                break;
            case 16:
                T2CONbits.T2CKPS0 = 0;
                T2CONbits.T2CKPS1 = 1;
                break;
            default:
                T2CONbits.T2CKPS0 = 0;
                T2CONbits.T2CKPS1 = 0;
                break;
        }
        switch(set_Postscaler){
            case 1:
                T2CONbits.TOUTPS0 = 0;
                T2CONbits.TOUTPS1 = 0;
                T2CONbits.TOUTPS2 = 0;
                T2CONbits.TOUTPS3 = 0;
                break;
            case 2:
                T2CONbits.TOUTPS0 = 1;
                T2CONbits.TOUTPS1 = 0;
                T2CONbits.TOUTPS2 = 0;
                T2CONbits.TOUTPS3 = 0;
                break;
            case 3:
                T2CONbits.TOUTPS0 = 0;
                T2CONbits.TOUTPS1 = 1;
                T2CONbits.TOUTPS2 = 0;
                T2CONbits.TOUTPS3 = 0;
                break;
            case 4:
                T2CONbits.TOUTPS0 = 1;
                T2CONbits.TOUTPS1 = 1;
                T2CONbits.TOUTPS2 = 0;
                T2CONbits.TOUTPS3 = 0;
                break;
            case 5:
                T2CONbits.TOUTPS0 = 0;
                T2CONbits.TOUTPS1 = 0;
                T2CONbits.TOUTPS2 = 1;
                T2CONbits.TOUTPS3 = 0;
                break;
            case 6:
                T2CONbits.TOUTPS0 = 1;
                T2CONbits.TOUTPS1 = 0;
                T2CONbits.TOUTPS2 = 1;
                T2CONbits.TOUTPS3 = 0;
                break;
            case 7:
                T2CONbits.TOUTPS0 = 0;
                T2CONbits.TOUTPS1 = 1;
                T2CONbits.TOUTPS2 = 1;
                T2CONbits.TOUTPS3 = 0;
                break;
            case 8:
                T2CONbits.TOUTPS0 = 1;
                T2CONbits.TOUTPS1 = 1;
                T2CONbits.TOUTPS2 = 1;
                T2CONbits.TOUTPS3 = 0;
                break;
            case 9:
                T2CONbits.TOUTPS0 = 0;
                T2CONbits.TOUTPS1 = 0;
                T2CONbits.TOUTPS2 = 0;
                T2CONbits.TOUTPS3 = 1;
                break;
            case 10:
                T2CONbits.TOUTPS0 = 1;
                T2CONbits.TOUTPS1 = 0;
                T2CONbits.TOUTPS2 = 0;
                T2CONbits.TOUTPS3 = 1;
                break;
            case 11:
                T2CONbits.TOUTPS0 = 0;
                T2CONbits.TOUTPS1 = 1;
                T2CONbits.TOUTPS2 = 0;
                T2CONbits.TOUTPS3 = 1;
                break;
            case 12:
                T2CONbits.TOUTPS0 = 1;
                T2CONbits.TOUTPS1 = 1;
                T2CONbits.TOUTPS2 = 0;
                T2CONbits.TOUTPS3 = 1;
                break;
            case 13:
                T2CONbits.TOUTPS0 = 0;
                T2CONbits.TOUTPS1 = 0;
                T2CONbits.TOUTPS2 = 1;
                T2CONbits.TOUTPS3 = 1;
                break;
            case 14:
                T2CONbits.TOUTPS0 = 1;
                T2CONbits.TOUTPS1 = 0;
                T2CONbits.TOUTPS2 = 1;
                T2CONbits.TOUTPS3 = 1;
                break;
            case 15:
                T2CONbits.TOUTPS0 = 0;
                T2CONbits.TOUTPS1 = 1;
                T2CONbits.TOUTPS2 = 1;
                T2CONbits.TOUTPS3 = 1;
                break;
            case 16:
                T2CONbits.TOUTPS0 = 1;
                T2CONbits.TOUTPS1 = 1;
                T2CONbits.TOUTPS2 = 1;
                T2CONbits.TOUTPS3 = 1;
                break;
            default:
                T2CONbits.TOUTPS0 = 0;
                T2CONbits.TOUTPS1 = 0;
                T2CONbits.TOUTPS2 = 0;
                T2CONbits.TOUTPS3 = 0;
                break;
        }
    }else{
        T2CONbits.TMR2ON = 0;
        PIE1bits.TMR2IE = 0;
        PIR1bits.TMR2IF = 0;
        INTCONbits.GIE = 0;
        INTCONbits.PEIE = 0;
    }
}

/*
 * void set_TMR2(uint8_t time)
 * input arg0: uint8_t time
 */
void set_TMR2(uint8_t time){
    PR2 = time;
}

/*
 * uint8_t get_TMR2()
 * return the value of the timer2
 */
uint8_t get_TMR2(){
    return TMR2;
}
