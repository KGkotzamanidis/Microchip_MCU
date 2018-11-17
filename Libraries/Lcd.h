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

#ifndef _LCD_H_
#define _LCD_H_

#include "Pic16f887_Utils.h"
#include "Pic_IO.h"

/* 
 * LCD Command List
 */
#define CMD_LCD_CLEAR   0x01u
#define CMD_LCD_RETURN_HOME 0x02u
#define CMD_DISPLAY_ON_CURSOR_OFF   0x0Cu
#define CMD_DISPLAY_ON_CURSOR_ON    0x0Eu
#define CMD_DISPLAY_ON_CURSOR_BLINK 0x0Fu
#define CMD_LCD_FOUR_BIT_MODE   0x28u
#define CMD_LCD_EIGHT_BIT_MODE  0x38u

#define C_LcdLineZero 0x00
#define C_LcdLineOne 0x01
#define C_LcdLineTwo 0x02
#define C_LcdLineThree 0x03
#define C_LcdLineMaxLines 0x04

#define C_EightBitMode 8u
#define C_FourBitMode 4u

#define C_DisplayDefaultDigits 0xffu
#define C_MaxDigitsToDisplay 10u
#define C_NumOfBinDigitsToDisplay 16u
#define C_MaxDigitsToDisplayUsingPrintf C_DisplayDefaultDigits

/*
 * LCD IO PORTS List
 */
typedef struct{
    uint8_t MaxSupportedLines;
    uint8_t MaxSupportedChars;
    uint8_t LcdMode;
    Pic_IO_Ports RS;
    Pic_IO_Ports RW;
    Pic_IO_Ports EN;
    Pic_IO_Ports D0;
    Pic_IO_Ports D1;
    Pic_IO_Ports D2;
    Pic_IO_Ports D3;
    Pic_IO_Ports D4;
    Pic_IO_Ports D5;
    Pic_IO_Ports D6;
    Pic_IO_Ports D7;
}Lcd_IO_Ports_enm;

/*
 * LCD Basic Functions
 */
void LCD_Init(uint8_t number_of_lines, uint8_t number_of_characters);
void LCD_SetUp(Pic_IO_Ports RS, Pic_IO_Ports RW, Pic_IO_Ports EN, Pic_IO_Ports D0,
                Pic_IO_Ports D1, Pic_IO_Ports D2, Pic_IO_Ports D3, Pic_IO_Ports D4,
                Pic_IO_Ports D5, Pic_IO_Ports D6, Pic_IO_Ports D7);
void LCD_Clear();
void LCD_GoToLine(uint8_t line_number);
void LCD_CmdWrite(uint8_t lcd_commnad);
void LCD_DisplayChar(char lcd_data);
void LCD_DisplayString(const char *StringPointer);
void LCD_Reset();
void LCD_GoToNextLine();
#endif