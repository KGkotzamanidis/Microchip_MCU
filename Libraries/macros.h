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
 * File: macros.h   
 * Author: konstantinos gkotzamanidis 
 * Comments:
 * Revision history: 
 */

#ifndef _MACROS_H
#define _MACROS_H

#pragma config FOSC = HS
#pragma config WDTE = ON
#pragma config PWRTE = OFF
#pragma config MCLRE = ON
#pragma config CP = OFF
#pragma config CPD = OFF
#pragma config BOREN = ON
#pragma config IESO = ON
#pragma config FCMEN = ON
#pragma config LVP = OFF
#pragma config BOR4V = BOR40V
#pragma config WRT = OFF

#include <pic16f887.h>
#include <xc.h>

#define _XTAL_FREQ 16000000

typedef signed char sint8_t;
typedef signed int sint16_t;
typedef signed long int sint32_t;

typedef unsigned char uint8_t;
typedef unsigned int uint16_t;
typedef unsigned long int uint32_t;

#define x_PinOutput 0x00
#define x_PinInput 0x01
#define x_PortOutput 0x00
#define x_PortInput 0xFF

#define INPUT x_PinInput
#define OUTPUT x_PinOutput
#define LOW 0x00
#define HIGH 0x01

#define x_ZERO 0x00
#define x_NULL 0x00
#define x_NULL_CHAR 0x00

#ifndef NULL
#define NULL 0
#endif

#define FALSE 0x00
#define TRUE 0x01

typedef enum{
    x_FALSE,
    x_TRUE
}Boolean_Enm;

#define  x_GetBitMask(bit)          (1<<(bit))
#define  x_BitSet(x,bit)            ((x) |=  x_GetBitMask(bit))
#define  x_BitClear(x,bit)          ((x) &= ~x_GetBitMask(bit))
#define  x_BitToggle(x,bit)         ((x) ^=  x_GetBitMask(bit))
#define  x_UpdateBit(x,bit,val)     ((val)? x_BitSet(x,bit): x_BitClear(x,bit))
#define  x_GetBitStatus(x,bit)      (((x)&(x_GetBitMask(bit)))!=0u)
#define  x_IsBitSet(x,bit)          (((x)&(x_GetBitMask(bit)))!=0u)
#define  x_IsBitCleared(x,bit)      (((x)&(x_GetBitMask(bit)))==0u)
#define  x_AreAllBitsSet(x,BitMask) (((x)&(BitMask))==BitMask)
#define  x_AreAnyBitsSet(x,BitMask) (((x)&(BitMask))!=0x00u)
#endif