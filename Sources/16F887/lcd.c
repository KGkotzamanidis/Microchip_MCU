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
#include "./../../Libraries/16F887/lcd.h"

#pragma waring push
#pragma warning disable 356
#pragma warning disable 520
#pragma warning disable 752
#pragma warning disable 1496
#pragma warning disable 1498

/* Global Variables and Structures */
LcdConfigs_struct LCDConfig;
uint8_t LcdTrackLineNum;
uint8_t LcdTrackCursorPos;
uint8_t Array_LCDLineNumAddress[] = {
    0x80,0xC0,0x90,0xD0
};

/* Local Functions */
static void lcd_DataWrite(uint8_t dataFrame);
static void lcd_BusyCheck(void);
static void lcd_Reset(void);
static void lcd_SendCMDSignlas(void);
static void lcd_SendDataSignlas(void);
static void lcd_SendHigherData(uint8_t dataFrame);
static void lcd_SendLowerData(uint8_t dataFrame);

/*
 * void LCD_Setup(IO_PORT RS,IO_PORT RW,IO_PORT EN,IO_PORT D0,IO_PORT D1,IO_PORT D2,IO_PORT D3,IO_PORT D4,IO_PORT D5,IO_PORT D6,IO_PORT D7)
 * input arg0: IO_PORT RS
 * input arg1: IO_PORT RW (R_NULL if not Connected)
 * input arg2: IO_PORT EN
 * input arg3: IO_PORT D0 (R_NULL if not Connected for 4-bit mode)
 * input arg4: IO_PORT D1 (R_NULL if not Connected for 4-bit mode)
 * input arg5: IO_PORT D2 (R_NULL if not Connected for 4-bit mode)
 * input arg6: IO_PORT D3 (R_NULL if not Connected for 4-bit mode)
 * input arg7: IO_PORT D4
 * input arg8: IO_PORT D5
 * input arg9: IO_PORT D6
 * input arg10: IO_PORT D7
 * This function is used to configure the LCD Pins.
 */
void LCD_Setup(IO_PORT RS,IO_PORT RW,IO_PORT EN,IO_PORT D0,
                IO_PORT D1,IO_PORT D2,IO_PORT D3,IO_PORT D4,
                IO_PORT D5,IO_PORT D6,IO_PORT D7){
    LCDConfig.RS = RS;
    LCDConfig.RW = RW;
    LCDConfig.EN = EN;
    LCDConfig.D0 = D0;
    LCDConfig.D1 = D1;
    LCDConfig.D2 = D2;
    LCDConfig.D3 = D3;
    LCDConfig.D4 = D4;
    LCDConfig.D5 = D5;
    LCDConfig.D6 = D6;
    LCDConfig.D7 = D7;
    if((D0 == R_NULL) || (D1 == R_NULL) || (D2 == R_NULL) || (D3 == R_NULL)){
        LCDConfig.LcdMode = FourBitMode;
    }else{
        LCDConfig.LcdMode = EighBitMode;
        pin_Direction(D0,OUTPUT);
        pin_Direction(D1,OUTPUT);
        pin_Direction(D2,OUTPUT);
        pin_Direction(D3,OUTPUT);
    }
    pin_Direction(RS,OUTPUT);
    pin_Direction(RW,OUTPUT);
    pin_Direction(EN,OUTPUT);
    pin_Direction(D0,OUTPUT);
    pin_Direction(D1,OUTPUT);
    pin_Direction(D2,OUTPUT);
    pin_Direction(D3,OUTPUT);
    pin_Direction(D4,OUTPUT);
    pin_Direction(D5,OUTPUT);
    pin_Direction(D6,OUTPUT);
    pin_Direction(D7,OUTPUT);
}
/*
 * void LCD_Init(uint8_t var_maxLCDLine,uint8_t var_maxLCDChars)
 * input arg0: uint8_t var_maxLCDLines
 * input arg1: uint8_t var_maxLCDChars
 * This function is used to initialize the LCD.
 */
void LCD_Init(uint8_t var_maxLCDLines,uint8_t var_maxLCDChars){
    LCDConfig.MaxSupportedLines = var_maxLCDLines;
    LCDConfig.MaxSupportedChars = var_maxLCDChars;
    if(var_maxLCDLines > LcdLineTwo){
        Array_LCDLineNumAddress[LcdLineTwo] = 0x90 + (var_maxLCDChars & 0x0F);
        Array_LCDLineNumAddress[LcdLineThree] = 0xD0 + (var_maxLCDChars & 0x0F);
    }
    Delay_ms(100);
    if(LCDConfig.LcdMode == EighBitMode){
        LCD_CMD_Write(CMD_LCD_EIGHT_BIT_MODE);
    }else if(LCDConfig.LcdMode == FourBitMode){
        lcd_Reset();
        LCD_CMD_Write(CMD_LCD_FOUR_BIT_MODE);
    }
    LCD_CMD_Write(CMD_LCD_CURSOR_ON);
    LCD_Clear();
}
/*
 * void LCD_Clear()
 * input args: none
 * This function Clear the LCD.
 */
void LCD_Clear(){
    LCD_CMD_Write(CMD_LCD_CLEAR);
    LCD_GoToLine(LcdLineZero);
}
/*
 * void LCD_CMD_Write(uint8_t CMDFrame)
 * input args: uint8_t CMDFrame
 * This function is to send CMD Data into LCD.
 */
void LCD_CMD_Write(uint8_t CMDFrame){
    lcd_BusyCheck();
    if(LCDConfig.LcdMode == EighBitMode){
        lcd_SendLowerData(CMDFrame);
    }else{
        lcd_SendHigherData(CMDFrame);
        lcd_SendCMDSignlas();
        CMDFrame = CMDFrame << 4;
    }
    lcd_SendHigherData(CMDFrame);
    lcd_SendCMDSignlas();
}
/*
 * void LCD_GoToLine(uint8_t var_LineNum)
 * input args: uint8_t var_LineNum
 * This function is to go into specific location at LCD.
 */
void LCD_GoToLine(uint8_t var_LineNum){
    if(var_LineNum < LCDConfig.MaxSupportedLines){
        LcdTrackCursorPos = 0x00;
        LcdTrackLineNum = var_LineNum;
        LCD_CMD_Write(Array_LCDLineNumAddress[var_LineNum]);
    }
}
/*
 * void LCD_GoToNextLine(void)
 * input args: none.
 * This function is to go into next line at LCD.
 */
void LCD_GoToNextLine(void){
    LcdTrackLineNum++;
    LcdTrackCursorPos = 0x00;
    if(LcdTrackLineNum >= LCDConfig.MaxSupportedLines){
        LcdTrackLineNum = LcdLineZero;
    }
    LCD_CMD_Write(Array_LCDLineNumAddress[LcdTrackLineNum]);
}
/*
 * void LCD_SetCursor(uint8_t var_LineNum,uint8_t var_CharNum)
 * input arg0: uint8_t var_LineNum.
 * input arg1: uint8_t var_CharNum
 * This function set pointer into specific location at LCD.
 */
void LCD_SetCursor(uint8_t var_LineNum,uint8_t var_CharNum){
    if((var_LineNum < LCDConfig.MaxSupportedLines) && (var_CharNum < LCDConfig.MaxSupportedChars)){
        LcdTrackCursorPos = var_CharNum;
        LcdTrackLineNum = var_LineNum;
        LCD_CMD_Write(Array_LCDLineNumAddress[var_LineNum] + var_CharNum);
    }
}
/*
 * void LCD_SetCursor(uint8_t var_LineNum,uint8_t var_CharNum)
 * input arg0: uint8_t dataFrame
 * This function is to Display an Character.
 */
void LCD_DisplayChar(uint8_t dataFrame){
    if((LcdTrackCursorPos >= LCDConfig.MaxSupportedChars) || (dataFrame == '\n')){
        LCD_GoToNextLine();
    }
    if(dataFrame != '\n'){
        lcd_DataWrite(dataFrame);
        LcdTrackCursorPos++;
    }
}
/*
 * void LCD_DisplayString(const char *ptr_MessagePointer)
 * input arg0: const char *ptr_MessagePointer
 * This function is to Dispaly string.
 */
void LCD_DisplayString(const char *ptr_MessagePointer){
    while((*ptr_MessagePointer) !=0){
        LCD_DisplayChar(*ptr_MessagePointer++);
    }
}
/*
 * void LCD_ScrollMessage(uint8_t var_LineNum,char *ptr_MessagePointer)
 * input arg0: uint8_t var_LineNum
 * input arg1: char *ptr_MessagePointer
 * This function is to Display and Scroll at specific line.
 */
void LCD_ScrollMessage(uint8_t var_LineNum,char *ptr_MessagePointer){
    uint8_t i,j;
    if(var_LineNum >= LCDConfig.MaxSupportedLines){
        var_LineNum = LcdLineZero;
    }
    LCD_CMD_Write(CMD_LCD_CURSOR_OFF);
    for(i=0;ptr_MessagePointer[i];i++){
        LCD_GoToLine(var_LineNum);
        for(j=0;(j<LCDConfig.MaxSupportedChars) && (ptr_MessagePointer[i+j]);j++){
            LCD_DisplayChar(ptr_MessagePointer[i+j]);
        }
        while(j<LCDConfig.MaxSupportedChars){
            LCD_DisplayChar(' ');
            j++;
        }
        Delay_ms(ScrollDelayTime);
    }
    LCD_CMD_Write(CMD_LCD_CURSOR_ON);
}
/*
 * void LCD_DisplayNumber(uint8_t numberic_System,uint32_t var_number32,uint8_t var_numOfDigitsToDisplay)
 * input arg0: uint8_t numberic_System
 * input arg1: uint32_t var_number32
 * input arg2: uint8_t var_numOfDigitsToDisplay
 * This function is to Display Numbers.
 */
void LCD_DisplayNumber(uint8_t numberic_System,uint32_t var_number32,uint8_t var_numOfDigitsToDisplay){
    uint8_t i=0,a[10];
    if(numberic_System == x_BINARY){
        while(var_numOfDigitsToDisplay != 0){
            i = x_GetBitStatus(var_number32,(var_numOfDigitsToDisplay - 1));
            LCD_DisplayChar(x_Dec2Ascii(i));
            var_numOfDigitsToDisplay--;
        }
    }else if(var_number32 == 0){
        LCD_DisplayChar('0');
    }
    else{
        for(i=0;i<var_numOfDigitsToDisplay;i++){
            if(var_number32 != 0){
                a[i] = x_GetMod32(var_number32,numberic_System);
                var_number32 = (var_number32 / numberic_System);
            }else if((var_numOfDigitsToDisplay == DisplayDefaultDigits) || (var_numOfDigitsToDisplay > MaxDigitsToDisplay)){
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
/*
 * void LCD_DisplayFloatNumber(double var_number)
 * input arg0: double var_number
 * This function is to Display Float numbers.
 */
void LCD_DisplayFloatNumber(double var_number){
    uint32_t decNumber;
    decNumber = (uint32_t) var_number;
    LCD_DisplayNumber(x_DECIMAL,decNumber,DisplayDefaultDigits);
    LCD_DisplayChar('.');
    var_number = var_number - decNumber;
    decNumber = var_number * 1000000;
    LCD_DisplayNumber(x_DECIMAL,decNumber,DisplayDefaultDigits);
}
/*
 * void LCD_Printf(const char *argList, ...)
 * input arg0: const char *argList
 * input arg1: ...
 * This function is to Display String with args.
 */
void LCD_Printf(const char *argList, ...){
    const char *ptr;
    va_list argp;
    sint16_t var_num_s16;
    sint32_t var_num_s32;
    uint16_t var_num_u16;
    uint32_t var_num_u32;
    char *str;
    char ch;
    uint8_t NumOfBinDigitsToDisplay_u8;
    double var_float_num;
    
    va_start(argp,argList);
    for(ptr = argList; *ptr != '\0'; ptr++){
        ch = *ptr;
        if(ch == '%'){
            ptr++;
            ch=*ptr;
            if((ch >= 0x30) && (ch <= 0x39)){
                NumOfBinDigitsToDisplay_u8 = 0;
                while((ch >= 0x30) && (ch <= 0x39)){
                    NumOfBinDigitsToDisplay_u8 = ((NumOfBinDigitsToDisplay_u8 * 10) + (ch - 0x30));
                    ptr++;
                    ch = *ptr;
                }
            }else{
                NumOfBinDigitsToDisplay_u8 = MaxDigitsToDisplayUsingPrintf;
            }
            
            switch(ch){
                case 'C':
                case 'c':
                    ch = va_arg(argp,int);
                    LCD_DisplayChar(ch);
                    break;
                case 'd':
                    var_num_s16 = va_arg(argp,int);
                    if(var_num_s16 <0){
                        var_num_s16 = -var_num_s16;
                        LCD_DisplayChar('-');
                    }
                    LCD_DisplayNumber(x_DECIMAL,var_num_s16,NumOfBinDigitsToDisplay_u8);
                    break;
                case 'D':
                    var_num_s32 = va_arg(argp,sint32_t);
                    if(var_num_s32 <0){
                        var_num_s32 = - var_num_s32;
                        LCD_DisplayChar('-');
                    }
                    LCD_DisplayNumber(x_DECIMAL,var_num_s32,NumOfBinDigitsToDisplay_u8);
                    break;
                case 'u':
                    var_num_u16 = va_arg(argp,int);
                    LCD_DisplayNumber(x_DECIMAL,var_num_u16,NumOfBinDigitsToDisplay_u8);
                    break;
                case 'U':
                    var_num_u32 = va_arg(argp,uint32_t);
                    LCD_DisplayNumber(x_DECIMAL,var_num_u32,NumOfBinDigitsToDisplay_u8);
                    break;
                case 'x':
                    var_num_u16 = va_arg(argp,int);
                    LCD_DisplayNumber(x_HEX,var_num_s16,NumOfBinDigitsToDisplay_u8);
                    break;
                case 'X':
                    var_num_u32 = va_arg(argp,uint32_t);
                    LCD_DisplayNumber(x_HEX,var_num_u32,NumOfBinDigitsToDisplay_u8);
                    break;
                case 'b':
                    var_num_u16 = va_arg(argp,int);
                    if(NumOfBinDigitsToDisplay_u8 == MaxDigitsToDisplayUsingPrintf){
                        NumOfBinDigitsToDisplay_u8 = 16;
                    }
                    LCD_DisplayNumber(x_BINARY,var_num_u16,NumOfBinDigitsToDisplay_u8);
                    break;
                case 'B':
                    var_num_u32 = va_arg(argp,uint32_t);
                    if(NumOfBinDigitsToDisplay_u8 == MaxDigitsToDisplayUsingPrintf){
                        NumOfBinDigitsToDisplay_u8 = 16;
                    }
                    LCD_DisplayNumber(x_BINARY,var_num_u32,NumOfBinDigitsToDisplay_u8);
                    break;
                case 'F':
                case 'f':
                    var_float_num = va_arg(argp,double);
                    LCD_DisplayFloatNumber(var_float_num);
                    break;
                case 'S':
                case 's':
                    str = va_arg(argp,char*);
                    LCD_DisplayString(str);
                    break;
                case '%':
                    LCD_DisplayChar('%');
                    break;
            }
        }else{
            LCD_DisplayChar(ch);
        }
    }
    va_end(argp);
}
/*
 */
void LCD_CreateCustomChar(uint8_t location,uint8_t *CustomChar){
    uint8_t i;
    if(location <8){
        LCD_CMD_Write(0x40 + (location*8));
        for(i=0;i<7;i++){
            LCD_DisplayChar(CustomChar[i]);
        }
    }
    LCD_GoToNextLine();
}
/*
 */
void LCD_DisplayCustomChar(char location){
    LCD_DisplayChar(location);
}
/*
 * static void lcd_DataWrite(uint8_t dataFrame)
 * Input args: uint8_t dataframe.
 * Send bytes of data into LCD.
 */
static void lcd_DataWrite(uint8_t dataFrame){
    lcd_BusyCheck();
    if(LCDConfig.LcdMode == EighBitMode){
        lcd_SendLowerData(dataFrame);
    }else{
        lcd_SendHigherData(dataFrame);
        lcd_SendDataSignlas();
        dataFrame = dataFrame << 4;
    }
    lcd_SendHigherData(dataFrame);
    lcd_SendDataSignlas();
}
/*
 * static void lcd_BusyCheck(void)
 * Input args: none
 * Check if the LCD is Busy.
 */
static void lcd_BusyCheck(void){
    uint8_t busyFlag;
    if(LCDConfig.RW != R_NULL){
        pin_Direction(LCDConfig.D7,INPUT);
        write_Digital(LCDConfig.RS,LOW);
        write_Digital(LCDConfig.RW,HIGH);
        
        do{
            write_Digital(LCDConfig.EN, LOW);
            Delay_us(10);
            write_Digital(LCDConfig.EN,HIGH);
            Delay_us(10);
            busyFlag = read_Digital(LCDConfig.D7);
            
            if(LCDConfig.LcdMode == FourBitMode){
                write_Digital(LCDConfig.EN,LOW);
                Delay_us(10);
                write_Digital(LCDConfig.EN,HIGH);
                Delay_us(10);
            }
        }while(busyFlag != 0);
        pin_Direction(LCDConfig.D7,OUTPUT);
    }else{
        Delay_ms(1);
    }
}
/*
 * static void lcd_Reset(void)
 * Input args: none.
 * Reset the LCD.
 */
static void lcd_Reset(void){
    lcd_SendHigherData(0x30);
    lcd_SendCMDSignlas();
    Delay_ms(100);
    lcd_SendHigherData(0x30);
    lcd_SendCMDSignlas();
    Delay_us(200);
    lcd_SendHigherData(0x30);
    lcd_SendCMDSignlas();
    Delay_us(200);
    lcd_SendHigherData(0x20);
    lcd_SendCMDSignlas();
    Delay_us(200);
}
/*
 * static void lcd_SendCMDSignlas(void)
 * input args: none.
 * Start the sequence for CMDFrame.
 */
static void lcd_SendCMDSignlas(void){
    write_Digital(LCDConfig.RS,LOW);
    write_Digital(LCDConfig.RW,LOW);
    write_Digital(LCDConfig.EN,HIGH);
    Delay_us(10);
    write_Digital(LCDConfig.EN,LOW);
}
/*
 * static void lcd_SendDataSignlas(void)
 * input args: none.
 * Start the sequence for DataFrame.
 */
static void lcd_SendDataSignlas(void){
    write_Digital(LCDConfig.RS,HIGH);
    write_Digital(LCDConfig.RW,LOW);
    write_Digital(LCDConfig.EN,HIGH);
    Delay_us(10);
    write_Digital(LCDConfig.EN,LOW);
}
/*
 * static void lcd_SendHigherData(uint8_t dataFrame)
 * input args: none.
 * Send Higher Data Frame for 4bit mode.
 */
static void lcd_SendHigherData(uint8_t dataFrame){
    write_Digital(LCDConfig.D4,x_IsBitSet(dataFrame,4));
    write_Digital(LCDConfig.D5,x_IsBitSet(dataFrame,5));
    write_Digital(LCDConfig.D6,x_IsBitSet(dataFrame,6));
    write_Digital(LCDConfig.D7,x_IsBitSet(dataFrame,7));
}
/*
 * static void lcd_SendLowData(uint8_t dataFrame)
 * input args: none.
 * Send Higher Data Frame for 4bit mode.
 */
static void lcd_SendLowerData(uint8_t dataFrame){
    write_Digital(LCDConfig.D0,x_IsBitSet(dataFrame,0));
    write_Digital(LCDConfig.D1,x_IsBitSet(dataFrame,1));
    write_Digital(LCDConfig.D2,x_IsBitSet(dataFrame,2));
    write_Digital(LCDConfig.D3,x_IsBitSet(dataFrame,3));
}
#pragma warning pop