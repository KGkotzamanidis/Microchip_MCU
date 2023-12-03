#include "../Library/Timer.h"

void TMR0_start(char clk_select[], bool PSA_select, int Prescaler){
    if(!strcmp(clk_select,"Internal")){
        T0CS = 0;
    }
    else if(!strcmp(clk_select,"External")){
        T0CS = 1;
    }
    else if(PSA_select){
        PSA = 1;
    }
    else if(!PSA_select){
        PSA = 0;
    }
    switch(Prescaler){
        case 2:
            OPTION_REGbits.PS = 0x00;
            break;
        case 4:
            OPTION_REGbits.PS = 0x1;
            break;
        case 8:
            OPTION_REGbits.PS = 0x2;
            break;
        case 16:
            OPTION_REGbits.PS = 0x3;
            break;
        case 32:
            OPTION_REGbits.PS = 0x4;
            break;
        case 64:
            OPTION_REGbits.PS = 0x5;
            break;
        case 128:
            OPTION_REGbits.PS = 0x6;
            break;
        case 256:
            OPTION_REGbits.PS = 0x7;
            break;
        default:
            break;
    }
    T0SE = 1;
    GIE = 1;
    T0IE = 1;
}
void TMRO_set(uint8_t value){
    TMR0 = value;
}
bool TMR0_Interrupt(){
    if(T0IF == 1){
        T0IF = 0;
        return true;
    }
    return false;
}
void TMR0_stop(){
    GIE = 0;
    T0IE = 0;
}

void TMR2_start(int Prescaler, int Postscaler){
    TMR2ON = 1;
    GIE = 1;
    PEIE = 1;
    TMR2IE = 1;
    
    switch(Prescaler){
        case 1:
            T2CONbits.T2CKPS = 0x0;
            break;
        case 4:
            T2CONbits.T2CKPS = 0x1;
            break;
        case 16:
            T2CONbits.T2CKPS = 0x2;
            break;
    }
    
    switch(Postscaler){
        case 1:
            T2CONbits.TOUTPS = 0x00;
            break;
        case 2:
            T2CONbits.TOUTPS = 0x01;
            break;
        case 3:
            T2CONbits.TOUTPS = 0x02;
            break;
        case 4:
            T2CONbits.TOUTPS = 0x03;
            break;
        case 5:
            T2CONbits.TOUTPS = 0x04;
            break;
        case 6:
            T2CONbits.TOUTPS = 0x05;
            break;
        case 7:
            T2CONbits.TOUTPS = 0x06;
            break;
        case 8:
            T2CONbits.TOUTPS = 0x07;
            break;
        case 9:
            T2CONbits.TOUTPS = 0x08;
            break;
        case 10:
            T2CONbits.TOUTPS = 0x09;
            break;
        case 11:
            T2CONbits.TOUTPS = 0x0A;
            break;
        case 12:
            T2CONbits.TOUTPS = 0x0B;
            break;
        case 13:
            T2CONbits.TOUTPS = 0x0C;
            break;
        case 14:
            T2CONbits.TOUTPS = 0x0D;
            break;
        case 15:
            T2CONbits.TOUTPS = 0x0E;
            break;
        case 16:
            T2CONbits.TOUTPS = 0x0F;
            break;
    }
}
void TMR2_set(uint8_t value){
    PR2 = value;
}
bool TMR2_Interrupt(){    
    if(TMR2IF == 1){
        TMR2IF = 0;
        return true;
    }
    return false;
}
void TMR2_stop(){
    TMR2ON = 0;
}