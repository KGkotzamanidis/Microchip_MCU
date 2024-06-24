#include "../Library/Serial.h"

void UART_Init(uint32_t baudrate){
    TRISC=0x80;
    TXSTA=0x20;
    RCSTA=0x90;
    void UART_SetBaudRate(uint32_t baudrate);
}

void UART_SetBaudRate(uint32_t baudrate){
    uint8_t RegisterValue;
    if((baudrate >= minBaudRate) && (baudrate<=maxBaudRate)){
        RegisterValue = (uint8_t)getBuadReate(baudrate);
    }else{
        RegisterValue = (uint8_t)getBuadReate(9600);
    }
    SPBRG = RegisterValue;
}

char UART_RxChar(){
    while(RCIF==0);
    RCIF=0;
    return RCREG;
}

void UART_TxChar(char uartData){
    while(TXIF==0);
    TXIF=0;
    TXREG=uartData;
}

void UART_TxString(const char *ptr_string){
    while(*ptr_string){
        UART_TxChar(*ptr_string++);
    }
}

uint8_t UART_RxString(char *ptr_string){
    char ch;
    uint8_t len = 0;
    while(1){
        ch=UART_RxChar();
        UART_TxChar(ch);
        
        if((ch=='\r') || (ch=='\n')){
            ptr_string[len]=0;
            break;
        }
        else if((ch=='\b') && (len!=0)){
            len--;
        }
        else{
            ptr_string[len]=ch;
            len++;
        }
    }
    return len;
}
