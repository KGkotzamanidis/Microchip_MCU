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
 * void TMR0_enable(uint8_t timer,int Prescaler,char clk_src[],char edge_src[])
 * @input param bool PSA : false/true (false:timer0 module / true:WDT)
 * @input param int Prescaler : 2/4/8/16/32/64/128/256
 * @input param char clk_src[] : FOSC4/T0CKI
 * @input param char edge_src[] : HIGH/LOW
 * For more info see @ 76.
 */
void TMR0_enable(bool PSA,int Prescaler,char clk_src[],char edge_src[]){
    bit x_PSA;
    bit x_clk_src;
    bit x_edge_src;
    uint8_t var_OPTIONS;
    uint8_t var_Settings;
    uint8_t var_Prescaler;
    
    if(!strcmp(clk_src,"FOSC4")){
        x_clk_src = 0;
    }else if(!strcmp(clk_src,"T0CKI")){
        x_clk_src = 1;
    }else if(!strcmp(edge_src,"HIGH")){
        x_edge_src = 1;
    }else if(!strcmp(edge_src,"LOW")){
        x_edge_src = 0;
    }
    
    if(PSA){
        x_PSA = 1;
    }else{
        x_PSA = 0;
    }
    
    var_Settings = x_edge_src;
    var_Settings = (var_Settings << 1) | x_clk_src;
    
    switch(Prescaler){
        case 2:
            var_Prescaler = x_PSA;
            var_Prescaler = (var_Prescaler << 3) | 0x0;
            break;
        case 4:
            var_Prescaler = x_PSA;
            var_Prescaler = (var_Prescaler << 3) | 0x1;
            break;
        case 8:
            var_Prescaler = x_PSA;
            var_Prescaler = (var_Prescaler << 3) | 0x2;
            break;
        case 16:
            var_Prescaler = x_PSA;
            var_Prescaler = (var_Prescaler << 3) | 0x3;
            break;
        case 32:
            var_Prescaler = x_PSA;
            var_Prescaler = (var_Prescaler << 3) | 0x4;
            break;
        case 64:
            var_Prescaler = x_PSA;
            var_Prescaler = (var_Prescaler << 3) | 0x5;
            break;
        case 128:
            var_Prescaler = x_PSA;
            var_Prescaler = (var_Prescaler << 3) | 0x6;
            break;
        case 256:
            var_Prescaler = x_PSA;
            var_Prescaler = (var_Prescaler << 3) | 0x7;
            break;
        default:
            var_Prescaler = x_PSA;
            var_Prescaler = (var_Prescaler << 3) | 0x0;
            break;
    }
    
    var_OPTIONS = var_Settings;
    var_OPTIONS = (var_OPTIONS << 4) | var_Prescaler;
    
    INTCON = 0xE0;
    OPTION_REG = var_OPTIONS;
}

/*
 * void TMR0_reset()
 */
void TMR0_reset(){
    TMR0 = 0x00;
}

/*
 * bool TMR0_interrupt(uint8_t timer)
 * @input param uint8_t timer : 0 ~ 256
 * @output param true?false
 * For more info see @ 76.
 */
bool TMR0_interrupt(){
    if(INTCONbits.T0IF == 1){
        INTCONbits.T0IF = 0;
        return true;
    }
    return false;
}

/*
 * void TMR1_enable(char clk_src[],bool SYNC,bool LPSOC,int Prescaler)
 * @input param char clk_src[] : FOSC4 /T1CKI
 * @input param bool SYNC : false/true
 * @input param bool LPSOC : false/true
 * @input param int Prescaler : 1/2/4/8
 * for more info see @ 78.
 */
void TMR1_enable(char clk_src[],bool SYNC,bool LPSOC,int Prescaler){
    uint8_t var_Settings;
    uint8_t var_Prescaler;
    uint8_t var_T1CON;
    bit x_clk_src;
    bit x_SYNC;
    bit x_LPSOC;
    
    if(!strcmp(clk_src,"FOSC4")){
        x_clk_src = 0;
    }else if(!strcmp(clk_src,"T1CKI")){
        x_clk_src = 1;
    }
    
    if(SYNC){
        x_SYNC = 0;
    }else{
        x_SYNC = 1;
    }
    
    if(LPSOC){
        x_LPSOC = 1;
    }else{
        x_LPSOC = 0;
    }
    
    var_Settings = x_LPSOC;
    var_Settings = (var_Settings << 1) | x_SYNC ;
    var_Settings = (var_Settings << 1) | x_clk_src;
    var_Settings = (var_Settings << 1) | 0x1;
    
    switch(Prescaler){
        case 1:
            var_Prescaler = 0x8;
            break;
        case 2:
            var_Prescaler = 0x9;
            break;
        case 4:
            var_Prescaler = 0xA;
            break;
        case 8:
            var_Prescaler = 0xB;
            break;
        default:
            var_Prescaler = 0x8;
            break;
    }
    
    var_T1CON = var_Prescaler;
    var_T1CON = (var_T1CON << 4) | var_Settings;
    
    INTCON = 0xC0;
    PIE1bits.TMR1IE = 1;
    T1CON = var_T1CON;
}

/*
 * void TMR1_set_timer(uint16_t time)
 * @input param uint16_t time : 0 ~ 65535
 * for more info see @ 78.
 */
void TMR1_set_timer(uint16_t time){
    uint8_t bytes[2];
    bytes[0] = time >> 8;
    bytes[1] = time & 0x00FF;
    
    TMR1H = bytes[0];
    TMR1L = bytes[1];
}

/*
 * void TMR1_reset()
 */
void TMR1_reset(){
    TMR1L = 0x00;
    TMR1H = 0x00;
}

/*
 * bool TMR1_interrupt()
 * for more info see @ 78.
 */
bool TMR1_interrupt(){
    if(PIR1bits.TMR1IF == 1){
        PIR1bits.TMR1IF = 0;
        return true;
    }
    return false;
}
/*
 * void TMR2_enable(int Prscaler,int Postscaler)
 * @input param int Prescaler : 1/4/16
 * @input param int Postscaler : 1 ~ 16
 * for more info see @ 83.
 */
void TMR2_enable(int Prescaler,int Postscaler){
    uint8_t var_Prescaler;
    uint8_t var_Postscaler;
    uint8_t var_T2CON;
    
    switch(Prescaler){
        case 1:
            var_Prescaler = 0x4;
            break;
        case 4:
            var_Prescaler = 0x5;
            break;
        case 16:
            var_Prescaler = 0x6;
            break;
        default:
            var_Prescaler = 0x4;
            break;
    }
    
    switch(Postscaler){
        case 1:
            var_Postscaler = 0x0;
            break;
        case 2:
            var_Postscaler = 0x1;
            break;
        case 3:
            var_Postscaler = 0x2;
            break;
        case 4:
            var_Postscaler = 0x3;
            break;
        case 5:
            var_Postscaler = 0x4;
            break;
        case 6:
            var_Postscaler = 0x5;
            break;
        case 7:
            var_Postscaler = 0x6;
            break;
        case 8:
            var_Postscaler = 0x7;
            break;
        case 9:
            var_Postscaler = 0x8;
            break;
        case 10:
            var_Postscaler = 0x9;
            break;
        case 11:
            var_Postscaler = 0xA;
            break;
        case 12:
            var_Postscaler = 0xB;
            break;
        case 13:
            var_Postscaler = 0xC;
            break;
        case 14:
            var_Postscaler = 0xD;
            break;
        case 15:
            var_Postscaler = 0xE;
            break;
        case 16:
            var_Postscaler = 0xF;
            break;
        default:
            var_Postscaler = 0x0;
            break;
    }
    
    var_T2CON = var_Postscaler;
    var_T2CON = (var_T2CON << 3) | var_Prescaler;
    
    INTCON = 0xC0;
    PIE1bits.TMR2IE = 1;
    T2CON = var_T2CON;
}

/*
 * void TMR2_set_timer(uint8_t timer)
 * @input param uint8_t timer : 0 ~ 256
 * for more info see @ 83.
 */
void TMR2_set_timer(uint8_t timer){
    PR2 = timer;
}

/*
 * void TMR2_reset()
 */
void TMR2_reset(){
    TMR2 = 0x00;
}

/*
 * bool TMR2_interrupt()
 * @return param : true/false
 * for more info see @ 83.
 */
bool TMR2_interrupt(){
    if(PIR1bits.TMR2IF == 1){
        PIR1bits.TMR2IF = 0;
        return true;
    }
    return false;
}
