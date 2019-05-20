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

#include <xc.h>

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

#define x_BINARY 2u
#define x_DECIMAL 10u
#define x_HEX 16u

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

#define MinBaudRate 2400
#define MaxBaudRate 115200
#define Frequency 20000000
#define x_GetBaudRate(baudrate) (uint32_t)((Frequency / (64*(uint32_t)baudrate))-1)

#define x_GetMod8(dividend,divisor)     (uint8_t) (dividend - (divisor * (uint8_t) (dividend/divisor)))
#define x_GetMod16(dividend,divisor)    (uint16_t) (dividend - (divisor * (uint16_t) (dividend/divisor)))
#define x_GetMod32(dividend,divisor)    (uint32_t) (dividend - (divisor * (uint32_t) (dividend/divisor)))

#define x_Dec2Ascii(Dec)    ((Dec)+0x30)
#define x_Ascii2Dec(Asc)    ((Asc)-0x30)
#define x_Hex2Ascii(Hex)    (((Hex)>0x09)?((Hex)+0x37):((Hex)+0x30))
#define x_Ascii2Hex(Asc)    (((Asc)>0x39)?((Asc)-0x37):((Asc)-0x30))

typedef signed char sint8_t;
typedef signed int sint16_t;
typedef signed long int sint32_t;

typedef unsigned char uint8_t;
typedef unsigned int uint16_t;
typedef unsigned long int uint32_t;

#endif