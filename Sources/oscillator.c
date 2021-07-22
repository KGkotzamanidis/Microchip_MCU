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
#include "oscillator.h"

/*
 * init_InternalClock(int set_device_freq)
 * Input args(8-4-2-1-500-250-125-31)
 *          Mhz------->khz--------------->
 * In this method you can select Device operation clock
 * if you give wrong number then the clock speed start with
 * default frequency.
 * 
 * For more info about device clock see in page 61.
 */
void InternalClock_Init(int set_device_freq){
    switch(set_device_freq){
        case 8:
            OSCCON = 0x77;
            OSCTUNE = 0x1F;
            break;
        case 4:
            OSCCON = 0x67;
            OSCTUNE = 0x1F;
            break;
        case 2:
            OSCCON = 0x57;
            OSCTUNE = 0x1F;
            break;
        case 1:
            OSCCON = 0x47;
            OSCTUNE = 0x1F;
            break;
        case 500:
            OSCCON = 0x37;
            OSCTUNE = 0x1F;
            break;
        case 250:
            OSCCON = 0x27;
            OSCTUNE = 0x1F;
            break;
        case 125:
            OSCCON = 0x17;
            OSCTUNE = 0x1F;
            break;
        case 31:
            OSCCON = 0x07;
            OSCTUNE = 0x1F;
            break;
        default:
            OSCCON = 0x77;
            OSCTUNE = 0x1F;
            break;
    }
    return;
}

/*
 * void ExternalClock_Init(void)
 * The system is running from External Cystall.
 * You must change and prepare Config @ SSR.
 */
void ExternalClock_Init(void){
    OSCCON = 0x7E;
}