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
 * File: interrupts.c   
 * Author: konstantinos gkotzamanidis 
 * Comments:
 * Revision history: 
 */
#include <pic16f887.h>

#include "interrupts.h"

/*
 * void __interrupt() noInterrupt()
 * T0IF: Timer0 overflow Interrupt flag
 * INTF: External Interrupt flag
 * RBIF: PortB change Interrupt flag
 * ADIF: A/D Converter Interrupt flag
 * RCIF: EUSART receive Interrupt flag
 * TXIF: EUSART transmit Interrupt flag
 * SSPEF: Master Synchronous Serial Port (MSSP) Interrupt flag
 * CCP1IF: CCP1 Interrupt flag
 */
void __interrupt() noInterrupt(){
    if(T0IF){
        
    }
    else if(INTF){
        
    }
    else if(RBIF){
        
    }
    else if(ADIF){
        
    }
    else if(RCIF){
        
    }
    else if(TXIF){
        
    }
    else if(SSPIF){
        
    }
    else if(CCP1IF){
        
    }
    else if(TMR2IF){
        
    }
    else if(TMR1IF){
        
    }
    else if(OSFIF){
        
    }
    else if(C2IF){
        
    }
    else if(C1IF){
        
    }
    else if(EEIF){
        
    }
    else if(BCLIF){
        
    }
    else if(ULPWUIF){
        
    }
    else if(CCP2IF){
        
    }
    
}

void setInterrupt(int enable_register_interrupt){
    if(T0IF){
        
    }
    else if(INTF){
        
    }
    else if(RBIF){
        
    }
    else if(){
        
    }
}
