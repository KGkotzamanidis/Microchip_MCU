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
#include "./../../Libraries/18LF24K40/oscillator.h"

/*
 * void InternalClock_Init(const char* INTOSC,int freq,int divider)
 * @input param const char* : L/H(LFINTOSC/HFINTOSC)
 * @input param int : 1,2,4,8,12,16,32,48,64
 * @input param int : 1,2,4,8,16,32,64,128,256,512
 * For more info see @ page 47.
 */
void InternalClock_Init(char INTOSC[],int freq,int divider){
    if(!strcmp(INTOSC,"L")){
        OSCEN = 0x10;
        OSCTUNE = 0x00;
        
        switch(divider){
        case 1:
            OSCCON1 = 0x50;
            break;
        case 2:
            OSCCON1 = 0x51;
            break;
        case 4:
            OSCCON1 = 0x52;
            break;
        case 8:
            OSCCON1 = 0x53;
            break;
        case 16:
            OSCCON1 = 0x54;
            break;
        case 32:
            OSCCON1 = 0x55;
            break;
        case 64:
            OSCCON1 = 0x56;
            break;
        case 128:
            OSCCON1 = 0x57;
            break;
        case 256:
            OSCCON1 = 0x58;
            break;
        case 512:
            OSCCON1 = 0x59;
            break;
        default:
            OSCCON1 = 0x50;
            break;
        }
    }
    else if(!strcmp(INTOSC,'H')){
        OSCTUNE = 0x40;
        OSCEN = 0x00;
        
        switch(divider){
        case 1:
            OSCCON1 = 0x60;
            break;
        case 2:
            OSCCON1 = 0x61;
            break;
        case 4:
            OSCCON1 = 0x62;
            break;
        case 8:
            OSCCON1 = 0x63;
            break;
        case 16:
            OSCCON1 = 0x64;
            break;
        case 32:
            OSCCON1 = 0x65;
            break;
        case 64:
            OSCCON1 = 0x66;
            break;
        case 128:
            OSCCON1 = 0x67;
            break;
        case 256:
            OSCCON1 = 0x68;
            break;
        case 512:
            OSCCON1 = 0x69;
            break;
        default:
            OSCCON1 = 0x60;
            break;
    }
        switch(freq){
            case 1:
                OSCFRQ = 0x00;
                break;
            case 2:
                OSCFRQ = 0x01;
                break;
            case 4:
                OSCFRQ = 0x02;
                break;
            case 8:
                OSCFRQ = 0x03;
                break;
            case 12:
                OSCFRQ = 0x04;
                break;
            case 16:
                OSCFRQ = 0x05;
                break;
            case 32:
                OSCFRQ = 0x06;
                break;
            case 48:
                OSCFRQ = 0x07;
                break;
            case 64:
                OSCFRQ = 0x00;
                break;
            default:
                OSCFRQ = 0x00;
                break;
        }
    }
    return;
}

void ExternalClock_Init(bool PLL,bool SOSC,int divider){
    if(PLL){
        OSCEN = 0x80;
        OSCCON1 = 0x20;
        switch(divider){
        case 1:
            OSCCON1 = 0x20;
            break;
        case 2:
            OSCCON1 = 0x21;
            break;
        case 4:
            OSCCON1 = 0x22;
            break;
        case 8:
            OSCCON1 = 0x23;
            break;
        case 16:
            OSCCON1 = 0x24;
            break;
        case 32:
            OSCCON1 = 0x25;
            break;
        case 64:
            OSCCON1 = 0x26;
            break;
        case 128:
            OSCCON1 = 0x27;
            break;
        case 256:
            OSCCON1 = 0x28;
            break;
        case 512:
            OSCCON1 = 0x29;
            break;
        default:
            OSCCON1 = 0x20;
            break;
        }
    }
    
    if(!PLL){
        OSCEN = 0x80;
        OSCCON1 = 0x70;
        switch(divider){
        case 1:
            OSCCON1 = 0x70;
            break;
        case 2:
            OSCCON1 = 0x71;
            break;
        case 4:
            OSCCON1 = 0x72;
            break;
        case 8:
            OSCCON1 = 0x73;
            break;
        case 16:
            OSCCON1 = 0x74;
            break;
        case 32:
            OSCCON1 = 0x75;
            break;
        case 64:
            OSCCON1 = 0x76;
            break;
        case 128:
            OSCCON1 = 0x77;
            break;
        case 256:
            OSCCON1 = 0x78;
            break;
        case 512:
            OSCCON1 = 0x79;
            break;
        default:
            OSCCON1 = 0x70;
            break;
        }
    }
    
    if(SOSC){
        OSCEN = 0x08;
        OSCCON1 = 0x40;
        switch(divider){
        case 1:
            OSCCON1 = 0x40;
            break;
        case 2:
            OSCCON1 = 0x41;
            break;
        case 4:
            OSCCON1 = 0x42;
            break;
        case 8:
            OSCCON1 = 0x43;
            break;
        case 16:
            OSCCON1 = 0x44;
            break;
        case 32:
            OSCCON1 = 0x45;
            break;
        case 64:
            OSCCON1 = 0x46;
            break;
        case 128:
            OSCCON1 = 0x47;
            break;
        case 256:
            OSCCON1 = 0x48;
            break;
        case 512:
            OSCCON1 = 0x49;
            break;
        default:
            OSCCON1 = 0x40;
            break;
        }   
    }
}