#include "./../Library/PWM.h"

void PWM_Init(PWM_GPIO channel, int Postscaler , int Prescaler){
    TMR2ON = 1;
    if(Postscaler > 16){
        Postscaler = 16;
    }
    if(Prescaler > 16){
        Prescaler = 16;
    }
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
        default:
            break;
    }
    switch(Postscaler){
        case 1:
            T2CONbits.TOUTPS = 0x0;
            break;
        case 2:
            T2CONbits.TOUTPS = 0x1;
            break;
        case 3:
            T2CONbits.TOUTPS = 0x2;
            break;
        case 4:
            T2CONbits.TOUTPS = 0x3;
            break;
        case 5:
            T2CONbits.TOUTPS = 0x4;
            break;
        case 6:
            T2CONbits.TOUTPS = 0x5;
            break;
        case 7:
            T2CONbits.TOUTPS = 0x6;
            break;
        case 8:
            T2CONbits.TOUTPS = 0x7;
            break;
        case 9:
            T2CONbits.TOUTPS = 0x8;
            break;
        case 10:
            T2CONbits.TOUTPS = 0x9;
            break;
        case 11:
            T2CONbits.TOUTPS = 0xA;
            break;
        case 12:
            T2CONbits.TOUTPS = 0xB;
            break;
        case 13:
            T2CONbits.TOUTPS = 0xC;
            break;
        case 14:
            T2CONbits.TOUTPS = 0xD;
            break;
        case 15:
            T2CONbits.TOUTPS = 0xE;
            break;
        case 16:
            T2CONbits.TOUTPS = 0xF;
            break;
        default:
            break;
    }
    switch(channel){
        case P1A:
            TRISC2 = 0;
            CCP1CONbits.CCP1M = 0xC;
            break;
        case P1B:
            TRISC2 = 0;
            CCP2CONbits.CCP2M = 0xC;
            break;
        case P1C:
            TRISC3 = 0;
            CCP2CONbits.CCP2M = 0xC;
            break;
        case P1D:
            TRISC4 = 0;
            CCP2CONbits.CCP2M = 0xC;
            break;
    }
}
void PWM_Stop(PWM_GPIO channel){
    switch(channel){
        case P1A:
            CCP1CON = 0x00;
            break;
        case P1B:
            CCP2CON = 0x00;
            break;
        case P1C:
            CCP2CON = 0x00;
            break;
        case P1D:
            CCP2CON = 0x00;
            break;
    }
}
void PWM_DutyCycle(PWM_GPIO channel, unsigned int DutyCycle){
    if(DutyCycle > 1023){
        DutyCycle = 1023;
    }
    
    switch(channel){
        case P1A:
            CCPR1L = DutyCycle >> 2;
            CCP1CONbits.DC1B = (DutyCycle & 0x3);
            break;
        case P1B:
            CCPR2L = DutyCycle >> 2;
            CCP2CONbits.DC2B0 = (DutyCycle & 0x1);
            CCP2CONbits.DC2B1 = (DutyCycle & 0x2) >> 1;
            break;
        case P1C:
            CCPR2L = DutyCycle >> 2;
            CCP2CONbits.DC2B0 = (DutyCycle & 0x1);
            CCP2CONbits.DC2B1 = (DutyCycle & 0x2) >> 1;
            break;
        case P1D:
            CCPR2L = DutyCycle >> 2;
            CCP2CONbits.DC2B0 = (DutyCycle & 0x1);
            CCP2CONbits.DC2B1 = (DutyCycle & 0x2) >> 1;
            break;
    }
}