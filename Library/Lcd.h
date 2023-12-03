/*
*	Copyright (C) <2023>  <KGkotzamanidis>
*
*	This program is free software: you can redistribute it and/or modify
*	it under the terms of the GNU General Public License as published by
*	the Free Software Foundation, either version 3 of the License, or
*	(at your option) any later version.
*
*	This program is distributed in the hope that it will be useful,
*	but WITHOUT ANY WARRANTY; without even the implied warranty of
*	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
*	GNU General Public License for more details.
*
*	You should have received a copy of the GNU General Public License
*	along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/
#ifndef _LCD_H
#define _LCD_H

#include "Utils.h"
#include "GPIO.h"

#define LineZero    0x00
#define LineOne     0x01
#define LineTwo     0x02
#define LineThree   0x03
#define LineMaximum 0x04

#define cmdClear 0x01
#define cmdReturnHome 0x02
#define cmdOFF 0x08
#define cmdCursorOFF 0x0C
#define cmdCursorON 0x0E
#define cmdCursorBLINK 0x0F
#define cmd4BitMode 0x28
#define cmd8BitMode 0x38

typedef struct{
    uint8_t MaxSupportedLines;
    uint8_t MaxSupportedCharacters;
    uint8_t Mode;
    GPIO RS;
    GPIO RW;
    GPIO EN;
    GPIO D0;
    GPIO D1;
    GPIO D2;
    GPIO D3;
    GPIO D4;
    GPIO D5;
    GPIO D6;
    GPIO D7;
}LCD_Configs;

/*
 * void LCD_Setup(GPIO RS, GPIO RW, GPIO EN, GPIO D0, GPIO D1, GPIO D2, GPIO D3, GPIO D4, GPIO D5, GPIO D6, GPIO D7)
 * Use this function to Setup the LCD Pins
 * @input param GPIO RS
 * @input param GPIO RW
 * @input param GPIO EN
 * @input param GPIO D0
 * @input param GPIO D1
 * @input param GPIO D2
 * @input param GPIO D3
 * @input param GPIO D4
 * @input param GPIO D5
 * @input param GPIO D6
 * @input param GPIO D7
 */
void LCD_Setup(GPIO RS, GPIO RW, GPIO EN, GPIO D0, GPIO D1, GPIO D2, GPIO D3, GPIO D4, GPIO D5, GPIO D6, GPIO D7);
/*
 * void LCD_SetDisplay(uint8_t maxLines, uint8_t maxCharacters)
 * Use this function to delimitation the LCD.
 * @input param uint8_t maxLines:
 * @input param uint8_t maxCharacters:
 */
void LCD_SetDisplay(uint8_t maxLines, uint8_t maxCharacters);
/*
 * void LCD_WriteCmd(uint8_t dataFrame)
 * Use this function to send Command to LCD
 * @input param uint8_t dataFrame: byte
 */
void LCD_WriteCmd(uint8_t dataFrame);
/*
 * void LCD_Clear(void)
 * Use this function to clear the characters from the LCD.
 */
void LCD_Clear(void);
/*
 * void LCD_GoToLine(uint8_t line)
 * Use this function to position the cursor into the LCD
 * @input param uint8_t line:
 */
void LCD_GoToLine(uint8_t line);
/*
 * void LCD_GoToNextLine(void)
 * Use this function to go into the next Character from the LCD.
 */
void LCD_GoToNextLine(void);
/*
 * void LCD_SetCursor(uint8_t line, uint8_t pos)
 * Use this function to set the cursor into the spesific position
 * @input param uint8_t line:
 * @input param uint8_t pos:
 */
void LCD_SetCursor(uint8_t line, uint8_t pos);
/*
 * void LCD_DisplayChar(uint8_t dataFrame)
 * Use this function to print custom character into the LCD.
 * @input param uint8_t dataframe:
 */
void LCD_DisplayChar(uint8_t dataFrame);
/*
 * void LCD_DisplayString(const char *ptr)
 * Use this function to Print String into the LCD
 * @input param const char *ptr
 */
void LCD_DisplayString(const char *ptr);
#endif