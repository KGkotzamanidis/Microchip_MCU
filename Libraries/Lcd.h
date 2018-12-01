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

#include "io.h"

#define CMD_CLEAR 0x01
#define CMD_RETURN_HOME 0x02
#define CMD_DISPLAY_ON_CURSOR_OFF 0x0C
#define CMD_DISPLAY_ON_CURSOR_ON 0x0E
#define CMD_DISPLAY_ON_CURSOR_BLINK 0x0F
#define CMD_FOUR_BIT_MODE 0x28
#define CMD_EIGHT_BIT_MODE 0x38

#define FourBitMode 4
#define EightBitMode 8

#define ScrollDellayTime 200
#define DisplayDefaultDigits 0xFF
#define MaxDigitsToDisplay 10
#define NumOfBinDigitsToDisplay 16
#define MaxDigitsToDisplayUsingPrintf DisplayDefaultDigits

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
}LCD_IO_PORT;

void LCD_SetUp(IO_PORT RS, IO_PORT RW, IO_PORT EN, IO_PORT D0,
                IO_PORT D1, IO_PORT D2, IO_PORT D3, IO_PORT D4,
                IO_PORT D5, IO_PORT D6, IO_PORT D7);
void LCD_Init(uint8_t NumbersOfLines, uint8_t MaxCharsPerLines);
void LCD_CmdWrite(uint8_t lcd_CMD);
void LCD_DisplayChar(char lcd_Char);
void LCD_Clear();
void LCD_GoToLine(uint8_t lineNumber);
void LCD_GoToNextLine();
void LCD_DisplayString(const char *lcd_StringPointer);
void LCD_Printf(const char *argList, ...);
#endif