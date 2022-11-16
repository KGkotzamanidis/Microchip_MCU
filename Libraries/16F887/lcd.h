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
 * File: lcd.h  
 * Author: konstantinos gkotzamanidis
 * Comments:
 * Revision history: 
 */

#ifndef _LCD_H
#define _LCD_H

#include <stdarg.h>
#include "delay.h"
#include "macros.h"
#include "io.h"

/* LCD Command List */
#define CMD_LCD_CLEAR 0x01
#define CMD_LCD_RETURN_HOME 0x02
#define CMD_LCD_OFF 0x08
#define CMD_LCD_CURSOR_OFF 0x0C
#define CMD_LCD_CURSOR_ON 0x0E
#define CMD_LCD_CURSOR_BLINK 0x0F
#define CMD_LCD_FOUR_BIT_MODE 0x28
#define CMD_LCD_EIGHT_BIT_MODE 0x38

/* LCD Macros List */
#define FourBitMode 4
#define EighBitMode 8
#define ScrollDelayTime 200
#define DisplayDefaultDigits 0xFF
#define MaxDigitsToDisplay 10
#define NumOfBinDigitsToDisplay 16
#define MaxDigitsToDisplayUsingPrintf DisplayDefaultDigits

/* LCD Struct and Enums */
#define LcdLineZero 0x00
#define LcdLineOne 0x01
#define LcdLineTwo 0x02
#define LcdLineThree 0x03
#define LcdMaxLines 0x04

typedef struct{
    uint8_t MaxSupportedLines;
    uint8_t MaxSupportedChars;
    uint8_t LcdMode;
    IO_PORT RS;
    IO_PORT RW;
    IO_PORT EN;
    IO_PORT D0;
    IO_PORT D1;
    IO_PORT D2;
    IO_PORT D3;
    IO_PORT D4;
    IO_PORT D5;
    IO_PORT D6;
    IO_PORT D7;
}LcdConfigs_struct;

/* Main LCD Functions */
void LCD_Setup(IO_PORT RS,IO_PORT RW,IO_PORT EN,IO_PORT D0,
                IO_PORT D1,IO_PORT D2,IO_PORT D3,IO_PORT D4,
                IO_PORT D5,IO_PORT D6,IO_PORT D7);
void LCD_Init(uint8_t var_maxLCDLines,uint8_t var_maxLCDChars);
void LCD_Clear();
void LCD_CMD_Write(uint8_t CMDFrame);
void LCD_GoToLine(uint8_t var_LineNum);
void LCD_GoToNextLine(void);
void LCD_SetCursor(uint8_t var_LineNum,uint8_t var_CharNum);
void LCD_DisplayChar(uint8_t dataFrame);
void LCD_DisplayString(const char *ptr_MessagePointer);
void LCD_ScrollMessage(uint8_t var_LineNum,char *ptr_MessagePointer);
void LCD_DisplayNumber(uint8_t numberic_System,uint32_t var_number32,uint8_t var_numOfDigitsToDisplay);
void LCD_DisplayFloatNumber(double var_number);
void LCD_Printf(const char *argList, ...);
void LCD_CreateCustomChar(uint8_t location,uint8_t *CustomChar);
void LCD_DisplayCustomChar(char location);
#endif