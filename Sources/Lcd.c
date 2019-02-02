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
 * File: lcd.c  
 * Author: konstantinos gkotzamanidis
 * Comments:
 * Revision history: 
 */
#include <stdarg.h>
#include "delay.h"
#include "io.h"
#include "lcd.h"
#include "macros.h"

#pragma warning push
#pragma warning disable 520
#pragma warning disable 1518

uint8_t LcdTrackLineNum;
uint8_t LcdTrackCursorPos;
LCD_IO_PORT lcd_io_port;
uint8_t Array_LineNumberAddress[]={
    0x80,0xc0,0x90,0xd0
};

static void lcd_DataWrite(uint8_t data);
static void lcd_BusyCheck(void);
static void lcd_Reset(void);
static void lcd_SendCmdSignlas(void);
static void lcd_SendDataSignlas(void);
static void lcd_SendHigherNibble(uint8_t dataByte);
static void lcd_SendLowerNibble(uint8_t dataByte);

void LCD_SetUp(IO_PORT RS, IO_PORT RW, IO_PORT EN, IO_PORT D0, IO_PORT D1, IO_PORT D2, IO_PORT D3, IO_PORT D4, IO_PORT D5, IO_PORT D6, IO_PORT D7){
    lcd_io_port.RS = RS;
    lcd_io_port.RW = RW;
    lcd_io_port.EN = EN;
    lcd_io_port.D0 = D0;
    lcd_io_port.D1 = D1;
    lcd_io_port.D2 = D2;
    lcd_io_port.D3 = D3;
    lcd_io_port.D4 = D4;
    lcd_io_port.D5 = D5;
    lcd_io_port.D6 = D6;
    lcd_io_port.D7 = D7;
    
    if((D0 == R_NULL) || (D1 == R_NULL) || (D2 == R_NULL) || (D3 == R_NULL)){
        lcd_io_port.LcdMode = 4;
    }
    else{
        lcd_io_port.LcdMode = 8;
        pin_Derection(D0, OUTPUT);
        pin_Derection(D1, OUTPUT);
        pin_Derection(D2, OUTPUT);
        pin_Derection(D3, OUTPUT);
    }
    
    pin_Derection(RS, OUTPUT);
    pin_Derection(RW, OUTPUT);
    pin_Derection(EN, OUTPUT);
    
    pin_Derection(D4, OUTPUT);
    pin_Derection(D5, OUTPUT);
    pin_Derection(D6, OUTPUT);
    pin_Derection(D7, OUTPUT);
}

void LCD_Init(uint8_t NumbersOfLines, uint8_t MaxCharsPerLines){
    lcd_io_port.MaxSupportedChars = MaxCharsPerLines;
    lcd_io_port.MaxSupportedLines = NumbersOfLines;
    
    if(NumbersOfLines > LcdLineTwo){
        Array_LineNumberAddress[LcdLineTwo] = 0x90 + (MaxCharsPerLines & 0x0f);
        Array_LineNumberAddress[LcdLineThree] = 0xd0 + (MaxCharsPerLines & 0x0f);
    }
    
    Delay_ms(100);
    
    if(lcd_io_port.LcdMode == EightBitMode){
        LCD_CmdWrite(CMD_EIGHT_BIT_MODE);    
    }
    else if(lcd_io_port.LcdMode == FourBitMode){
        lcd_Reset();
        LCD_CmdWrite(CMD_FOUR_BIT_MODE);
    }
    
    LCD_CmdWrite(CMD_DISPLAY_ON_CURSOR_ON);
    LCD_Clear();
}

void LCD_Clear(){
    LCD_CmdWrite(CMD_CLEAR);
    LCD_GoToLine(LcdLineZero);
}

void LCD_GoToLine(uint8_t lineNumber){
    if(lineNumber < lcd_io_port.MaxSupportedLines){
        LcdTrackCursorPos = 0x00;
        LcdTrackLineNum = lineNumber;
        LCD_CmdWrite(Array_LineNumberAddress[lineNumber]);
    }
}

void LCD_GoToNextLine(void){
    LcdTrackLineNum++;
    LcdTrackCursorPos = 0x00;
    
    if(LcdTrackLineNum >= lcd_io_port.MaxSupportedLines){
        LcdTrackLineNum = LcdLineZero;
    }
    LCD_CmdWrite(Array_LineNumberAddress[LcdTrackLineNum]);
}

void LCD_CmdWrite(uint8_t lcd_CMD){
    lcd_BusyCheck();
    
    if(lcd_io_port.LcdMode == EightBitMode){
        lcd_SendLowerNibble(lcd_CMD);
    }
    else{
        lcd_SendHigherNibble(lcd_CMD);
        lcd_SendCmdSignlas();
        lcd_CMD = lcd_CMD << 4;
    }
    
    lcd_SendHigherNibble(lcd_CMD);
    lcd_SendCmdSignlas();
}

void LCD_DisplayChar(char lcd_Char){
    if((LcdTrackCursorPos >= lcd_io_port.MaxSupportedChars) || (lcd_Char == '\n')){
        LCD_GoToNextLine();
    }
    if(lcd_Char != '\n'){
        lcd_DataWrite(lcd_Char);
        LcdTrackCursorPos++;
    }
}

void LCD_DisplayString(const char *lcd_StringPointer){
    while((*lcd_StringPointer) !=0){
        LCD_DisplayChar(*lcd_StringPointer++);
    }
}

void LCD_DisplayNumber(uint8_t numberic_System, uint32_t number, uint8_t numberofdisplay){
    uint8_t i=0, a[10];
    
    if(x_BINARY == numberic_System){
        while(numberofdisplay !=0){
            i = x_GetBitStatus(number, (numberofdisplay - 1));
            LCD_DisplayChar(x_Dec2Ascii(i));
            numberofdisplay--;
        }
    }
    else if(number == 0){
        LCD_DisplayChar('0');
    }
    else{
        for(i=0; i<numberofdisplay; i++){
            if(number !=0){
                a[i]=x_GetMod32(number,numberic_System);
                number = number/numberic_System;
            }
            else if((numberofdisplay == DisplayDefaultDigits) || (numberofdisplay > MaxDigitsToDisplay)){
                break;
            }
            else{
                a[i] = 0;
            }
        }
        while(i!=0){
            LCD_DisplayChar(x_Hex2Ascii(a[i-1]));
            i--;
        }
    }
}

void LCD_DisplayFloat(double number){
    uint32_t decNumber;
    decNumber = (uint32_t) number;
    LCD_DisplayNumber(x_DECIMAL, decNumber, DisplayDefaultDigits);
    LCD_DisplayChar('.');
    number = number - decNumber;
    decNumber = number * 1000000;
    LCD_DisplayNumber(x_DECIMAL, decNumber, DisplayDefaultDigits);
}

void LCD_Printf(const char* argList, ...){
    const char *pointer;
    va_list argp;
    sint16_t v_num_s16;
    sint32_t v_num_s32;
    uint16_t v_num_u16;
    uint32_t v_num_u32;
    char *str;
    char ch;
    uint8_t numberOfDigitsToDisplay;
    double floatNumber;
    va_start(argp,argList);
    
    for(pointer = argList; *pointer != '\0'; pointer++){
        ch = *pointer;
        
        if(ch == '%'){
            pointer++;
            ch = *pointer;
            if((ch >= 0x30) && (ch <= 0x39)){
                numberOfDigitsToDisplay = 0;
                while((ch>=0x30)&&(ch<=0x39)){
                    numberOfDigitsToDisplay = (numberOfDigitsToDisplay * 10) + (ch-0x30);
                    pointer++;
                    ch = *pointer;
                }
            }
            else{
                numberOfDigitsToDisplay = MaxDigitsToDisplayUsingPrintf;
            }
            
            switch(ch){
                case 'C':
                case 'c':
                    ch = va_arg(argp, int);
                    LCD_DisplayChar(ch);
                    break;
                case 'd':
                    v_num_s16 = va_arg(argp, int);
                    if(v_num_s16 <0){
                        v_num_s16 = -v_num_s16;
                        LCD_DisplayChar('-');
                    }
                    LCD_DisplayNumber(x_DECIMAL, v_num_s16, numberOfDigitsToDisplay);
                    break;
                case 'D':
                    v_num_s32 = va_arg(argp, sint32_t);
                    if(v_num_s32 < 0){
                        v_num_s32 = - v_num_s32;
                        LCD_DisplayChar('-');
                    }
                    LCD_DisplayNumber(x_DECIMAL, v_num_s32, numberOfDigitsToDisplay);
                    break;
                case 'u':
                    v_num_u16 = va_arg(argp, int);
                    LCD_DisplayNumber(x_DECIMAL, v_num_u16, numberOfDigitsToDisplay);
                    break;
                case 'U':
                    v_num_u32 = va_arg(argp, uint32_t);
                    LCD_DisplayNumber(x_DECIMAL, v_num_u32, numberOfDigitsToDisplay);
                    break;
                case 'x':
                    v_num_u16 = va_arg(argp, int);
                    LCD_DisplayNumber(x_HEX, v_num_u16, numberOfDigitsToDisplay);
                    break;
                case 'X':
                    v_num_u32 = va_arg(argp, uint32_t);
                    LCD_DisplayNumber(x_HEX, v_num_u32, numberOfDigitsToDisplay);
                    break;
                case 'b':
                    v_num_u16 = va_arg(argp, int);
                    if(numberOfDigitsToDisplay == MaxDigitsToDisplayUsingPrintf){
                        numberOfDigitsToDisplay = 16;
                    }
                    LCD_DisplayNumber(x_BINARY, v_num_u16, numberOfDigitsToDisplay);
                    break;
                case 'B':
                    v_num_u32 = va_arg(argp, uint32_t);
                    if(numberOfDigitsToDisplay == MaxDigitsToDisplayUsingPrintf){
                        numberOfDigitsToDisplay = 16;
                    }
                    LCD_DisplayNumber(x_BINARY, v_num_u32, numberOfDigitsToDisplay);
                    break;
                case 'F':
                case 'f':
                    floatNumber = va_arg(argp, double);
                    LCD_DisplayFloat(floatNumber);
                    break;
                case 'S':
                case 's':
                    str = va_arg(argp, char *);
                    LCD_DisplayString(str);
                    break;
                case '%':
                    LCD_DisplayChar('%');
                    break;
            }
        }
        else{
            LCD_DisplayChar(ch);
        }
    }
    va_end(argp);
}

static void lcd_DataWrite(uint8_t data){
    lcd_BusyCheck();
    if(lcd_io_port.LcdMode == EightBitMode){
        lcd_SendLowerNibble(data);
    }
    else{
        lcd_SendHigherNibble(data);
        lcd_SendDataSignlas();
        data = data << 4;
    }
    
    lcd_SendHigherNibble(data);
    lcd_SendDataSignlas();
}

static void lcd_BusyCheck(void){
    uint8_t busyflag;
    
    if(lcd_io_port.RW != R_NULL){
        pin_Derection(lcd_io_port.D7,INPUT);
        write_Digital(lcd_io_port.RS, LOW);
        write_Digital(lcd_io_port.RW, HIGH);
        
        do{
            write_Digital(lcd_io_port.EN, LOW);
            Delay_us(10);
            write_Digital(lcd_io_port.EN, HIGH);
            Delay_us(10);
            busyflag = read_Digital(lcd_io_port.D7);
            
            if(lcd_io_port.LcdMode == 4){
                write_Digital(lcd_io_port.EN, LOW);
                Delay_us(10);
                write_Digital(lcd_io_port.EN, HIGH);
                Delay_us(10);
            }
        }while(busyflag != 0);
        pin_Derection(lcd_io_port.D7, OUTPUT);
    }
    else{
        Delay_ms(1);
    }
}

static void lcd_Reset(void){
    lcd_SendHigherNibble(0x30);
    lcd_SendCmdSignlas();
    Delay_ms(100);
    lcd_SendHigherNibble(0x30);
    lcd_SendCmdSignlas();
    Delay_us(200);
    lcd_SendHigherNibble(0x30);
    lcd_SendCmdSignlas();
    Delay_us(200);
    lcd_SendHigherNibble(0x20);
    lcd_SendCmdSignlas();
    Delay_us(200);
}

static void lcd_SendHigherNibble(uint8_t dataByte){
    write_Digital(lcd_io_port.D4,x_IsBitSet(dataByte,4));
    write_Digital(lcd_io_port.D5,x_IsBitSet(dataByte,5));
    write_Digital(lcd_io_port.D6,x_IsBitSet(dataByte,6));
    write_Digital(lcd_io_port.D7,x_IsBitSet(dataByte,7));
}

static void lcd_SendLowerNibble(uint8_t dataByte){
    write_Digital(lcd_io_port.D0,x_IsBitSet(dataByte,0));
    write_Digital(lcd_io_port.D1,x_IsBitSet(dataByte,1));
    write_Digital(lcd_io_port.D2,x_IsBitSet(dataByte,2));
    write_Digital(lcd_io_port.D3,x_IsBitSet(dataByte,3));
}

static void lcd_SendCmdSignlas(void){
    write_Digital(lcd_io_port.RS, LOW);
    write_Digital(lcd_io_port.RW, LOW);
    write_Digital(lcd_io_port.EN, HIGH);
    Delay_us(10);
    write_Digital(lcd_io_port.EN, LOW);
}

static void lcd_SendDataSignlas(void){
    write_Digital(lcd_io_port.RS, HIGH);
    write_Digital(lcd_io_port.RW, LOW);
    write_Digital(lcd_io_port.EN, HIGH);
    Delay_us(10);
    write_Digital(lcd_io_port.EN, LOW);
}
#pragma warning pop