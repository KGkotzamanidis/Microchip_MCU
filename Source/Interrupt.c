#include "./../Library/Interrupt.h"

void Interrupt_enable(bool Peripheral,bool Timer0, bool INT, bool INT_RB, INTERRUPT_GPIO channel){
    GIE = 1;
    if(Peripheral){
        PEIE = 1;
    }else{
        PEIE = 0;
    }
    if(Timer0){
        T0IE = 1;
    }
    else{
        T0IE = 0;
    }
    if(INT){
        pinMode(RB_0,INPUT);
        INTE = 1;
        ANSELHbits.ANS12 = 0;
        INTEDG = 0;
    }
    else{
        INTE = 0;
        ANSELHbits.ANS12 = 1;
    }
    if(INT_RB){
        RBIE = 1;
        switch(channel){
            case IOCB_0:
                IOCB0 = 1;
                ANSELHbits.ANS12 = 0;
                break;
            case IOCB_1:
                IOCB1 = 1;
                ANSELHbits.ANS10 = 0;
                break;
            case IOCB_2:
                IOCB2 = 1;
                ANSELHbits.ANS8 = 0;
                break;
            case IOCB_3:
                IOCB3 = 1;
                ANSELHbits.ANS9 = 0;
                break;
            case IOCB_4:
                IOCB4 = 1;
                ANSELHbits.ANS11 = 0;
                break;
            case IOCB_5:
                IOCB5 = 1;
                ANSELHbits.ANS13 = 0;
                break;
            case IOCB_6:
                IOCB6 = 1;
                break;
            case IOCB_7:
                IOCB7 = 1;
                break;
            case R_NULL:
                break;
        }
    }else{
        RBIE = 0;
    }
}
void Interrupt_disable(void){
    GIE = 0;
    PEIE = 0;
    T0IE = 0;
    INTE = 0;
    RBIE = 0;
}