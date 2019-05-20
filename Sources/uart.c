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
 * File: uart.c  
 * Author: konstantinos gkotzamanidis
 * Comments:
 * Revision history: 
 */
#include <stdarg.h>
#include "uart.h"

#pragma warning push
#pragma warning disable 520

void UART_Init(uint32_t BaudRate){
    pin_Derection(RC_6, OUTPUT);
    pin_Derection(RC_7, INPUT);
    TXSTA = 0x20;
    RCSTA = 0x90;
    
    UART_setBaudRate(BaudRate);
}

void UART_setBaudRate(uint32_t BaudRate){
    uint8_t RegisterValue;
    
    if((BaudRate >= MinBaudRate) && (BaudRate <= MaxBaudRate)){
        RegisterValue = (uint8_t)x_GetBaudRate(BaudRate);
    }
    else{
        RegisterValue = (uint8_t)x_GetBaudRate(9600);
    }
    SPBRG = RegisterValue;
}

char UART_RxChar(){
    while(RCIF == 0){
        //nothing
    }
    RCIF = 0;
    return RCREG;
}

void UART_TxChar(char Data){
    while(TXIF == 0);
    TXIF = 0;
    TXREG = Data;
}

void UART_TxString(const char *Pointer_String){
    while(*Pointer_String){
        UART_TxChar(*Pointer_String++);
    }
}

uint8_t UART_RxString(char *Pointer_String, uint8_t Max_Length){
    uint8_t i=0;
    char temp=1;
    
    for(i=0; i < Max_Length; i++){
        temp = UART_RxChar();
        
        if(temp=='\0' || temp=='\n' || temp=='\r'){
            break;
        }
        Pointer_String[i]=temp;
    }
    Pointer_String[i+1]='\0';
    return i;
}

void UART_printf(const char *argList, ...){
    const char *ptr;
    va_list argp;
    char *str;
    char ch;
    uint8_t numOfDigitsToTransmit;
    
    va_start(argp, argList);
    for(ptr = argList; *ptr !='\0' ;ptr++){
        ch = *ptr;
        if(ch == '%'){
            ptr++;
            ch = *ptr;
            if((ch >= 0x30) && (ch <= 0x39)){
                numOfDigitsToTransmit = (numOfDigitsToTransmit * 10) + (ch - 0x30);
                ptr++;
                ch = *ptr;
            }
            else{
                numOfDigitsToTransmit = MaxDigitsToDisplayUsingPrintf;
            }
            
            switch(ch){
                case 'C':
                case 'c':
                    ch = va_arg(argp, uint8_t);
                    UART_TxChar(ch);
                    break;
                case 'S':
                case 's':
                    str = va_arg(argp, char *);
                    UART_TxString(str);
                    break;
                case '%':
                    UART_TxChar(ch);
            }
        }
        else{
            UART_TxChar(ch);
        }
    }
    va_end(argp);
}
#pragma warning pop