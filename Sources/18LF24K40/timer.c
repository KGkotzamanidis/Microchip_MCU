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
 * File: oscillator.c   
 * Author: konstantinos gkotzamanidis 
 * Comments:
 * Revision history: 
 */
#include "./../../Libraries/18LF24K40/timer.h"

/*
 * void TMR0_Start(uint16_t timer,int clk_Prescale,int Postscaler,bool _16bit_Operation)
 * @input param uint16_t timer : 0 ~ 65535
 * @input param int clk_Prescale : 2^16 (1~32768)
 * @input param int Postscaler : 1 ~ 16
 * @input param bool _16bit_Operation : false / true
 * @input param bool ASYNC : false / true
 * for more info see @ 295.
 */
void TMR0_Start(uint16_t timer,int clk_Prescale,int Postscaler,bool _16bit_Operation,bool ASYNC){
    uint8_t var_Postscaler;
    uint8_t var_Prescale;
    uint8_t var_16,var_ASYNC;
    uint16_t var_T0CON0,var_T0CON1;
    
    if(_16bit_Operation){
        var_16 = 0x9;
    }else{
        var_16 = 0x8;
    }
    
    if(ASYNC){
        var_ASYNC = 0x5;
    }else{
        var_ASYNC = 0x4;
    }
    
    switch(clk_Prescale){
        case 1:
            var_Prescale = 0x00;
            break;
        case 2:
            var_Prescale = 0x01;
            break;
        case 4:
            var_Prescale = 0x02;
            break;
        case 8:
            var_Prescale = 0x03;
            break;
        case 16:
            var_Prescale = 0x04;
            break;
        case 32:
            var_Prescale = 0x05;
            break;
        case 64:
            var_Prescale = 0x06;
            break;
        case 128:
            var_Prescale = 0x07;
            break;
        case 256:
            var_Prescale = 0x08;
            break;
        case 512:
            var_Prescale = 0x09;
            break;
        case 1024:
            var_Prescale = 0x0A;
            break;
        case 2048:
            var_Prescale = 0x0B;
            break;
        case 4096:
            var_Prescale = 0x0C;
            break;
        case 8192:
            var_Prescale = 0x0D;
            break;
        case 16384:
            var_Prescale = 0x0E;
            break;
        case 32768:
            var_Prescale = 0x0F;
            break;
        default:
            break;
    }
    
    switch(Postscaler){
        case 1:
            var_Postscaler = 0x00;
            break;
        case 2:
            var_Postscaler = 0x01;
            break;
        case 3:
            var_Postscaler = 0x02;
            break;
        case 4:
            var_Postscaler = 0x03;
            break;
        case 5:
            var_Postscaler = 0x04;
            break;
        case 6:
            var_Postscaler = 0x05;
            break;
        case 7:
            var_Postscaler = 0x06;
            break;
        case 8:
            var_Postscaler = 0x07;
            break;
        case 9:
            var_Postscaler = 0x08;
            break;
        case 10:
            var_Postscaler = 0x09;
            break;
        case 11:
            var_Postscaler = 0x0A;
            break;
        case 12:
            var_Postscaler = 0x0B;
            break;
        case 13:
            var_Postscaler = 0x0C;
            break;
        case 14:
            var_Postscaler = 0x0D;
            break;
        case 15:
            var_Postscaler = 0x0E;
            break;
        case 16:
            var_Postscaler = 0x0F;
            break;
        default:
            var_Postscaler = 0x00;
            break;
    }
    
    var_T0CON0 = var_16;
    var_T0CON0 = (var_T0CON0 << 4) | var_Postscaler;

    var_T0CON1 = var_ASYNC;
    var_T0CON1 = (var_T0CON1 << 4) | var_Prescale;
    
    bytes[0] = timer >> 8;
    bytes[1] = timer & 0x00FF;
    TMR0L = bytes[1];
    TMR0H = bytes[0];
    
    T0CON0 = var_T0CON0;
    T0CON1 = var_T0CON1;
}

/*
 * void TMR1_Start(uint16_t timer,int clk_Prescale,bool _16bit_Operation)
 */
void TMR1_Start(uint16_t timer,int clk_Prescale,bool _16bit_Operation){
    bytes[0] = timer >> 8;
    bytes[1] = timer & 0x00FF;
    TMR1L = bytes[0];
    TMR1H = bytes[1];
}

/*
 * void TMR2_Start(uint8_t timer,int clk_Prescale,int Postscaler)
 */
void TMR2_Start(uint8_t timer,int clk_Prescale,int Postscaler){
    bytes[0] = timer;
    T2PR = bytes[0];
}

/*
 * void TMR3_Start(uint16_t timer,int clk_Prescale,bool _16bit_Operation)
 */
void TMR3_Start(uint16_t timer,int clk_Prescale,bool _16bit_Operation){
    bytes[0] = timer >> 8;
    bytes[1] = timer & 0x00FF;
    TMR3L = bytes[0];
    TMR3H = bytes[1];
}

/*
 * void TMR4_Start(uint8_t timer,int clk_Prescale,int Postscaler)
 */
void TMR4_Start(uint8_t timer,int clk_Prescale,int Postscaler){
    bytes[0] = timer;
    T4PR = bytes[0];
}

/*
 * void TMR5_Start(uint16_t timer,int clk_Prescale,bool _16bit_Operation)
 */
void TMR5_Start(uint16_t timer,int clk_Prescale,bool _16bit_Operation){
    bytes[0] = timer >> 8;
    bytes[1] = timer & 0x00FF;
    TMR5L = bytes[0];
    TMR5H = bytes[1];
}

/*
 * void TMR6_Start(uint8_t timer,int clk_Prescale,int Postscaler)
 */
void TMR6_Start(uint8_t timer,int clk_Prescale,int Postscaler){
    bytes[0] = timer;
    T6PR = bytes[0];
}

void TMR0_Stop(){
    
}

void TMR1_Stop(){
    
}

void TMR2_Stop(){
    
}

void TMR3_Stop(){
    
}

void TMR4_Stop(){
    
}

void TMR5_Stop(){
    
}

void TMR6_Stop(){
    
}