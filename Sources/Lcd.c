#include <stdarg.h>
#include "Delay.h"
#include "Lcd.h"
#include "Pic16f887_Utils.h"
#include "Pic_IO.h"

/*
 * Global 
 */
uint8_t LcdTrackLineNumber;
uint8_t LcdTrackLineCursorPos;
Lcd_IO_Ports_enm LCD_ports;
uint8_t Lcd_address[] = {
    0x80,0xC0,0x90,0xd0
};

/*
 * Local Functions
 */
static void lcd_DataWrite(uint8_t data);
static void lcd_BusyCheck(void);
static void lcd_Reset(void);
static void lcd_SendCmdSignals(void);
static void lcd_SendDataSignals(void);
static void lcd_SendHigherNibble(uint8_t dataByte);
static void lcd_SendLowerNibble(uint8_t dataByte);

/*
 * LCD_SetUp Function
 */
void LCD_SetUp(Pic_IO_Ports RS, Pic_IO_Ports RW, Pic_IO_Ports EN, Pic_IO_Ports D0, 
                Pic_IO_Ports D1, Pic_IO_Ports D2, Pic_IO_Ports D3, Pic_IO_Ports D4, 
                Pic_IO_Ports D5, Pic_IO_Ports D6, Pic_IO_Ports D7){
    LCD_ports.RS = RS;
    LCD_ports.RW = RW;
    LCD_ports.EN = EN;
    LCD_ports.D0 = D0;
    LCD_ports.D0 = D1;
    LCD_ports.D0 = D2;
    LCD_ports.D0 = D3;
    LCD_ports.D0 = D4;
    LCD_ports.D0 = D5;
    LCD_ports.D0 = D6;
    LCD_ports.D0 = D7;
    
    if((D0 == R_NC) || (D1 == R_NC) || (D2 == R_NC) || (D3 == R_NC)){
        LCD_ports.LcdMode = 4;
    }
    else{
        LCD_ports.LcdMode = 8;
        Pic_IO_Mode(D0,OUTPUT);
        Pic_IO_Mode(D1,OUTPUT);
        Pic_IO_Mode(D2,OUTPUT);
        Pic_IO_Mode(D3,OUTPUT);
    }
    
    Pic_IO_Mode(RS,OUTPUT);
    Pic_IO_Mode(RW,OUTPUT);
    Pic_IO_Mode(EN,OUTPUT);
    
    Pic_IO_Mode(D4,OUTPUT);
    Pic_IO_Mode(D5,OUTPUT);
    Pic_IO_Mode(D6,OUTPUT);
    Pic_IO_Mode(D7,OUTPUT);
}

/*
 * LCD_Init Function
 */
void LCD_Init(uint8_t number_of_lines, uint8_t number_of_characters){
    LCD_ports.MaxSupportedChars = number_of_characters;
    LCD_ports.MaxSupportedLines = number_of_lines;
    
    if(number_of_lines > C_LcdLineTwo){
        Lcd_address[C_LcdLineTwo] = 0x90 + (number_of_characters & 0x0fu);
        Lcd_address[C_LcdLineThree] = 0xd0 + (number_of_characters & 0x0fu);
    }
    
    Delay_ms(100);
    
    if(LCD_ports.LcdMode == C_EightBitMode){
        LCD_CmdWrite(CMD_LCD_EIGHT_BIT_MODE);
    }
    else if(LCD_ports.LcdMode == C_FourBitMode){
        LCD_Reset();
        LCD_CmdWrite(CMD_LCD_FOUR_BIT_MODE);
    }
    
    LCD_CmdWrite(CMD_DISPLAY_ON_CURSOR_ON);
    LCD_Clear();
}

/*
 * LCD_Clear Function
 */
void LCD_Clear(){
    LCD_CmdWrite(CMD_LCD_CLEAR);
    LCD_GoToLine(C_LcdLineZero);
}

/*
 * LCD_GoToLine Function
 */
void LCD_GoToLine(uint8_t line_number){
    if(line_number < LCD_ports.MaxSupportedLines){
        LcdTrackLineCursorPos = 0x00;
        LcdTrackLineNumber = line_number;
        LCD_CmdWrite(Lcd_address[line_number]);
    }
}

/*
 * LCD_CmdWrite Function
 */
void LCD_CmdWrite(uint8_t lcd_commnad){
    lcd_BusyCheck();
    
    if(LCD_ports.LcdMode == C_EightBitMode){
        lcd_SendLowerNibble(lcd_commnad);
    }
    else{
        lcd_SendHigherNibble(lcd_commnad);
        lcd_SendCmdSignals();
        lcd_commnad = lcd_commnad << 4;
    }
    
    lcd_SendHigherNibble(lcd_commnad);
    lcd_SendCmdSignals();
}

/*
 * LCD_GoToNecxLine Function
 */
void LCD_GoToNextLine(void){
    LcdTrackLineNumber++;
    LcdTrackLineCursorPos = 0x00;
    
    if(LcdTrackLineNumber >= LCD_ports.MaxSupportedLines){
        LcdTrackLineNumber = C_LcdLineZero;
    }
    LCD_CmdWrite(Lcd_address[LcdTrackLineNumber]);
}

/*
 * LCD_DisplayChar Function
 */
void LCD_DisplayChar(char lcd_data){
    if((LcdTrackLineCursorPos >= LCD_ports.MaxSupportedChars) || (lcd_data == '\n')){
        LCD_GoToNextLine();
    }
    if(lcd_data='\n'){
        lcd_DataWrite(lcd_data);
        LcdTrackLineCursorPos++;
    }
}

/*
 * LDC_DisplayString Function
 */
void LCD_DisplayString(const char *StringPointer){
    while((*StringPointer) !=0){
        LCD_DisplayChar(*StringPointer++);
    }
}

/*
 * lcd_DataWrite Local Function
 */
static void lcd_DataWrite(uint8_t data){
    lcd_BusyCheck();
    if(LCD_ports.LcdMode == C_EightBitMode){
        lcd_SendLowerNibble(data);
    }
    else{
        lcd_SendHigherNibble(data);
        lcd_SendDataSignals();
        data = data << 4;
    }
    
    lcd_SendHigherNibble(data);
    lcd_SendDataSignals();
}

/*
 * lcd_BusyCheck Local Function
 */
static void lcd_BusyCheck(void){
    uint8_t busyflag;
    
    if(LCD_ports.RW != R_NC){
        Pic_IO_Mode(LCD_ports.D7,INPUT);
        Pic_IO_Write(LCD_ports.RS,0);
        Pic_IO_Write(LCD_ports.RW,1);
        
        do{
            Pic_IO_Write(LCD_ports.EN,0);
            Delay_us(10);
            Pic_IO_Write(LCD_ports.EN,1);
            Delay_us(10);
            busyflag = Pic_IO_Read(LCD_ports.D7);
            
            if(LCD_ports.LcdMode == 4){
                Pic_IO_Write(LCD_ports.EN,0);
                Delay_us(10);
                Pic_IO_Write(LCD_ports.EN,1);
                Delay_us(10);
            }
        }while(busyflag != 0);
        Pic_IO_Mode(LCD_ports.D7,OUTPUT);
    }
    else{
        Delay_ms(1);
    }
}

/*
 * lcd_Reset Local Function
 */
static void lcd_Reset(void){
    lcd_SendHigherNibble(0x30);
    lcd_SendCmdSignals();
    Delay_ms(100);
    lcd_SendHigherNibble(0x30);
    lcd_SendCmdSignals();
    Delay_us(200);
    lcd_SendHigherNibble(0x30);
    lcd_SendCmdSignals();
    Delay_us(200);
    lcd_SendHigherNibble(0x20);
    lcd_SendCmdSignals();
    Delay_us(200);
}

/*
 * lcd_SendHigherNibble Local Function
 */
static void lcd_SendHigherNibble(uint8_t dataByte){
    Pic_IO_Write(LCD_ports.D4,Pic_IsBitSet(dataByte,4));
    Pic_IO_Write(LCD_ports.D5,Pic_IsBitSet(dataByte,5));
    Pic_IO_Write(LCD_ports.D6,Pic_IsBitSet(dataByte,6));
    Pic_IO_Write(LCD_ports.D7,Pic_IsBitSet(dataByte,7));
}

/*
 * lcd_SendLowerNibble Local Function
 */
static void lcd_SendLowerNibble(uint8_t dataByte){
    Pic_IO_Write(LCD_ports.D0,Pic_IsBitSet(dataByte,0));
    Pic_IO_Write(LCD_ports.D1,Pic_IsBitSet(dataByte,1));
    Pic_IO_Write(LCD_ports.D2,Pic_IsBitSet(dataByte,2));
    Pic_IO_Write(LCD_ports.D3,Pic_IsBitSet(dataByte,3));
}

/*
 * lcd_SendCmdSignals Local Function
 */
static void lcd_SendCmdSignals(void){
    Pic_IO_Write(LCD_ports.RS,0);
    Pic_IO_Write(LCD_ports.RW,0);
    Pic_IO_Write(LCD_ports.EN,1);
    Delay_us(10);
    Pic_IO_Write(LCD_ports.EN,0);
}

/*
 * lcd_SendDataSignals Local Function
 */
static void lcd_SendDataSignals(void){
    Pic_IO_Write(LCD_ports.RS,1);
    Pic_IO_Write(LCD_ports.RW,0);
    Pic_IO_Write(LCD_ports.EN,1);
    Delay_us(10);
    Pic_IO_Write(LCD_ports.EN,0);
}