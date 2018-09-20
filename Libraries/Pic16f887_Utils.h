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
 */

#ifndef _PIC16F887_UTILS_H
#define _PIC16F887_UTILS_H

#pragma config FOSC = HS        // Oscillator Selection bits (HS oscillator: High-speed crystal/resonator on RA6/OSC2/CLKOUT and RA7/OSC1/CLKIN)
#pragma config WDTE = OFF       // Watchdog Timer Enable bit (WDT disabled and can be enabled by SWDTEN bit of the WDTCON register)
#pragma config PWRTE = OFF      // Power-up Timer Enable bit (PWRT disabled)
#pragma config MCLRE = ON       // RE3/MCLR pin function select bit (RE3/MCLR pin function is MCLR)
#pragma config CP = OFF         // Code Protection bit (Program memory code protection is disabled)
#pragma config CPD = OFF        // Data Code Protection bit (Data memory code protection is disabled)
#pragma config BOREN = ON       // Brown Out Reset Selection bits (BOR enabled)
#pragma config IESO = ON        // Internal External Switchover bit (Internal/External Switchover mode is enabled)
#pragma config FCMEN = ON       // Fail-Safe Clock Monitor Enabled bit (Fail-Safe Clock Monitor is enabled)
#pragma config LVP = OFF        // Low Voltage Programming Enable bit (RB3 pin has digital I/O, HV on MCLR must be used for programming)
#pragma config BOR4V = BOR40V   // Brown-out Reset Selection bit (Brown-out Reset set to 4.0V)
#pragma config WRT = OFF        // Flash Program Memory Self Write Enable bits (Write protection off)
#include <xc.h>
#include <pic16f887.h>

typedef signed char     sint8_t;
typedef unsigned char   uint8_t;
typedef signed int      sint16_t;
typedef unsigned int    uint16_t;
typedef signed long int    sint32_t;
typedef unsigned long int  uint32_t;

#define C_SINT8_MAX   0x7F
#define C_SINT8_MIN  -128
#define C_UINT8_MAX   0xFFu
#define C_UINT8_MIN   0x00u
#define C_SINT16_MAX  32767
#define C_SINT16_MIN -32768
#define C_UINT16_MAX  0xFFFFu
#define C_UINT16_MIN  0x00u
#define C_SINT32_MAX  2147483647
#define C_SINT32_MIN -2147483648
#define C_UINT32_MAX  0xFFFFFFFFu
#define C_UINT32_MIN  0x00u

#define  Mask_BIT0   0x0001u
#define  Mask_BIT1   0x0002u
#define  Mask_BIT2   0x0004u
#define  Mask_BIT3   0x0008u
#define  Mask_BIT4   0x0010u
#define  Mask_BIT5   0x0020u
#define  Mask_BIT6   0x0040u
#define  Mask_BIT7   0x0080u
#define  Mask_BIT8   0x0100u
#define  Mask_BIT9   0x0200u
#define  Mask_BIT10  0x0400u
#define  Mask_BIT11  0x0800u
#define  Mask_BIT12  0x1000u
#define  Mask_BIT13  0x2000u
#define  Mask_BIT14  0x4000u
#define  Mask_BIT15  0x8000u

#define C_PinOutput_U8     0x00u
#define C_PinInput_U8      0x01u
#define C_PortOutput_U8    0x00u
#define C_PortInput_U8     0xFFu

#define INPUT              C_PinInput_U8
#define OUTPUT             C_PinOutput_U8
#define LOW                0x00u
#define HIGH               0x01u

#define C_ZERO_U8          0x00u
#define C_NULL_U8          0x00u
#define NULL_CHAR          0x00u
#ifndef NULL
#define NULL 0
#endif

#define FALSE              0x00u
#define TRUE               0x01u

#define C_NOTOK_U8         0x00u
#define C_OK_U8            0x01u
#define C_INVALID_U8       0x00u
#define C_VALID_U8         0x01u
#define C_FAILED_U8        0x00u
#define C_SUCCESSFUL_U8    0x01u
#define C_BUSY_U8          0x02u
#define C_BINARY_U8           2u
#define C_DECIMAL_U8         10u
#define C_HEX_U8             16u

#define Pic_GetBitMask(bit)          (1<<(bit))
#define Pic_BitSet(x,bit)            ((x) |=  Pic_GetBitMask(bit))
#define Pic_BitClear(x,bit)          ((x) &= ~Pic_GetBitMask(bit))
#define Pic_BitToggle(x,bit)         ((x) ^=  Pic_GetBitMask(bit))
#define Pic_UpdateBit(x,bit,val)     ((val)? Pic_BitSet(x,bit): Pic_BitClear(x,bit))
#define Pic_GetBitStatus(x,bit)      (((x)&(Pic_GetBitMask(bit)))!=0u)
#define Pic_IsBitSet(x,bit)          (((x)&(Pic_GetBitMask(bit)))!=0u)
#define Pic_IsBitCleared(x,bit)      (((x)&(Pic_GetBitMask(bit)))==0u)
#define Pic_AreAllBitsSet(x,BitMask) (((x)&(BitMask))==BitMask)
#define Pic_AreAnyBitsSet(x,BitMask) (((x)&(BitMask))!=0x00u)
#define Pic_GetMod8(dividend,divisor)  (uint8_t) (dividend - (divisor * (uint8_t) (dividend/divisor)))
#define Pic_GetMod16(dividend,divisor) (uint16_t)(dividend - (divisor * (uint16_t)(dividend/divisor)))
#define Pic_GetMod32(dividend,divisor) (uint32_t)(dividend - (divisor * (uint32_t)(dividend/divisor)))
#define Pic_Dec2Ascii(Dec)	 ((Dec)+0x30)
#define Pic_Ascii2Dec(Asc)	 ((Asc)-0x30)
#define Pic_Hex2Ascii(Hex)  (((Hex)>0x09) ? ((Hex) + 0x37): ((Hex) + 0x30)) 
#define Pic_Ascii2Hex(Asc)  (((Asc)>0x39) ? ((Asc) - 0x37): ((Asc) - 0x30))
#define Pic_ExtractNibble0to4(x)    (uint8_t) ((x) & 0x0Fu)
#define Pic_ExtractNibble4to8(x)    (uint8_t) (((x)>>4)  & 0x0Fu)
#define Pic_ExtractNibble8to12(x)   (uint8_t) (((x)>>8)  & 0x0Fu)
#define Pic_ExtractNibble12to16(x)  (uint8_t) (((x)>>12) & 0x0Fu)
#define Pic_ExtractByte0to8(x)    (uint8_t) ((x) & 0xFFu)
#define Pic_ExtractByte8to16(x)   (uint8_t) (((x)>>8) & 0xFFu)
#define Pic_ExtractByte16to28(x)  (uint8_t) (((x)>>16) & 0xFFu)
#define Pic_ExtractByte28to32(x)  (uint8_t) (((x)>>28) & 0xFFu)
#define Pic_GetMax(num1,num2)     (((num1)>(num2))? (num1): (num2)) 
#define Pic_GetMin(num1,num2)     (((num1)<(num2))? (num1): (num2)) 
#define Pic_swap(x,y)             (x ^= y ^= x ^= y)
#define Pic_GetAbsolute(x)	       (((x) < 0) ? -(x) : (x))

typedef enum
{
   E_FALSE,
   E_TRUE   
}Boolean_enm;

typedef enum
{
    E_FAILED,
    E_SUCCESS,
    E_BUSY,
    E_TIMEOUT
}Status_enm;

typedef enum
{
	E_BINARY=2,
	E_DECIMAL = 10,
	E_HEX = 16
}NumbericSystem_enm;

#endif	