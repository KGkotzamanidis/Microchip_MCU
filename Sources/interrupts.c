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
#include "interrupts.h"

/*
 * __interrupt() void Interrupt_Service()
 * INTCON Register
 * T0IF     :   Timer0 Overflow Interrupt Flag
 * INTF     :   External Interrupt Flag
 * RBIF     :   PORTB Change Interrupt Flag
 * PIR1 Register
 * ADIF     :   A/D Convert Interrupt Flag
 * RCIF     :   EUSART Receive Interrupt Flag
 * TXIF     :   EUSART Transmit Interrupt Flag
 * SSPIF    :   MSSP Interrupt Flag
 * CCP1IF   :   Capture mode Interrupt Flag
 * TMR2IF   :   Timer2 to PR2 Interrupt Flag
 * TMR1IF   :   Timer1 Overflow Interrupt Flag
 * PIR2 Register
 * OSFIF    :   Oscillator Fail Interrupt Flag
 * C2IF     :   Comparator C2 Interrupt Flag
 * C1IF     :   Comparator C1 Interrupt Flag
 * EEIF     :   EE Write Operation Interrupt Flag
 * BCLIF    :   Bus Collision Interrupt Flag
 * ULPWUIF  :   Ultra low power Wake-up Interrupt Flag
 * CCP2IF   :   Capture mode Interrupt Flag
 * 
 * return True if we have an interrupt.
 */
bool do_intterupt(){
    if(T0IF){
        return true;
    }
    else if(INTF){
        return true;
    }
    else if(RBIF){
        return true;
    }
    else if(ADIF){
        return true;
    }
    else if(RCIF){
        return true;
    }
    else if(TXIF){
        return true;
    }
    else if(SSPIF){
        return true;
    }
    else if(CCP1IF){
        return true;
    }
    else if(TMR0IF){
        return true;
    }
    else if(TMR2IF){
        return true;
    }
    else if(TMR1IF){
        return true;
    }
    else if(OSFIF){
        return true;
    }
    else if(C2IF){
        return true;
    }
    else if(C1IF){
        return true;
    }
    else if(EEIF){
        return true;
    }
    else if(BCLIF){
        return true;
    }
    else if(ULPWUIF){
        return true;
    }
    else if(CCP2IF){
        return true;
    }
    return false;
}

/*
 * void do_interrupt(void)
 * args input: none.
 *      return: none.
 * Delay until we have an interrupt. 
 */
void do_interrupt(void){
    do{
       //Delay until we have an interrupt. 
    }while(T0IF || T0IF || INTF || RBIF || ADIF || RCIF || TXIF || 
            SSPIF || CCP1IF || TMR0IF || TMR1IF || TMR2IF || OSFIF || 
            C2IF || C1IF || EEIF || BCLIF || ULPWUIF || CCP2IF);
}