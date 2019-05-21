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
 */
__interrupt() void Interrupt_Service(){
    if(INTCONbits.T0IF){
        //Insert the Interrupt rutine here
        INTCONbits.T0IF = 0;
    }else if(INTCONbits.INTF){
        //Insert the Interrupt rutine here
        INTCONbits.INTF = 0;
    }else if(INTCONbits.RBIF){
        //Insert the Interrupt rutine here
        INTCONbits.RBIF = 0;
    }else if(PIR1bits.ADIF){
        //Insert the Interrupt rutine here
        PIR1bits.ADIF = 0;
    }else if(PIR1bits.RCIF){
        //Insert the Interrupt rutine here
        PIR1bits.RCIF = 0;
    }else if(PIR1bits.TXIF){
        //Insert the Interrupt rutine here
        PIR1bits.TXIF = 0;
    }else if(PIR1bits.SSPIF){
        //Insert the Interrupt rutine here
        PIR1bits.SSPIF = 0;
    }else if(PIR1bits.CCP1IF){
        //Insert the Interrupt rutine here
        PIR1bits.CCP1IF = 0;
    }else if(PIR1bits.TMR2IF){
        //Insert the Interrupt rutine here
        PIR1bits.TMR2IF = 0;
    }else if(PIR1bits.TMR1IF){
        //Insert the Interrupt rutine here
        PIR1bits.TMR1IF = 0;
    }else if(PIR2bits.OSFIF){
        //Insert the Interrupt rutine here
        PIR2bits.OSFIF = 0;
    }else if(PIR2bits.C2IF){
        //Insert the Interrupt rutine here
        PIR2bits.C2IF = 0;
    }else if(PIR2bits.C1IF){
        //Insert the Interrupt rutine here
        PIR2bits.C1IF = 0;
    }else if(PIR2bits.EEIF){
        //Insert the Interrupt rutine here
        PIR2bits.EEIF = 0;
    }else if(PIR2bits.BCLIF){
        //Insert the Interrupt rutine here
        PIR2bits.BCLIF = 0;
    }else if(PIR2bits.ULPWUIF){
        //Insert the Interrupt rutine here
        PIR2bits.ULPWUIF = 0;
    }else if(PIR2bits.CCP2IF){
        //Insert the Interrupt rutine here
        PIR2bits.CCP2IF = 0;
    }
    return;
}