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
 */
void TMR0_Start(uint16_t timer,int clk_Prescale,int Postscaler,bool _16bit_Operation){
    bytes[0] = timer >> 8;
    bytes[1] = timer & 0x00FF;
    TMR0L = bytes[0];
    TMR0H = bytes[1];
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