#include "./../Library/Lcd.h"

LCD_Configs lcd;
uint8_t TruckLineNum, TruckCursorPos;
uint8_t Array_LineAddress[] = {
    0x80,0xC0,0x90,0xD0
};
static void LCD_WriteData(uint8_t dataFrame);
static void LCD_BusyCheck(void);
static void LCD_Reset(void);
static void LCD_SendCmdSignal(void);
static void LCD_SendDataSignal(void);
static void LCD_SendLowerData(uint8_t dataFrame);
static void LCD_SendHigherData(uint8_t dataFrame);

void LCD_Setup(GPIO RS, GPIO RW, GPIO EN, GPIO D0, GPIO D1, GPIO D2, GPIO D3, GPIO D4, GPIO D5, GPIO D6, GPIO D7){
    lcd.RS = RS;
    lcd.RW = RW;
    lcd.EN = EN;
    lcd.D0 = D0;
    lcd.D1 = D1;
    lcd.D2 = D2;
    lcd.D3 = D3;
    lcd.D4 = D4;
    lcd.D5 = D5;
    lcd.D6 = D6;
    lcd.D7 = D7;
    
    if((D0 == R_NULL)||(D1 == R_NULL)||(D2 == R_NULL)||(D3 == R_NULL)){
        lcd.Mode = 4;
    }else{
        lcd.Mode = 8;
        pinMode(D0,OUTPUT);
        pinMode(D1,OUTPUT);
        pinMode(D2,OUTPUT);
        pinMode(D3,OUTPUT);
    }
    pinMode(RS,OUTPUT);
    pinMode(RW,OUTPUT);
    pinMode(EN,OUTPUT);
    pinMode(D0,OUTPUT);
    pinMode(D1,OUTPUT);
    pinMode(D2,OUTPUT);
    pinMode(D3,OUTPUT);
    pinMode(D4,OUTPUT);
    pinMode(D5,OUTPUT);
    pinMode(D6,OUTPUT);
    pinMode(D7,OUTPUT);
}

void LCD_SetDisplay(uint8_t maxLines, uint8_t maxCharacters){
    lcd.MaxSupportedLines = maxLines;
    lcd.MaxSupportedCharacters = maxCharacters;
    
    if(maxLines > LineTwo){
        Array_LineAddress[LineTwo] = 0x90 + (maxCharacters & 0x0F);
        Array_LineAddress[LineThree] = 0xD0 + (maxCharacters & 0x0F);
    }
    __delay_ms(100);
    
    if(lcd.Mode == 8){
        LCD_WriteCmd(cmd8BitMode);
    }else if(lcd.Mode == 4){
        LCD_Reset();
        LCD_WriteCmd(cmd4BitMode);
    }
    LCD_WriteCmd(cmdIncrementMode);
    LCD_WriteCmd(cmdCursorOFF);
    LCD_Clear();
}

void LCD_DisplayChar(uint8_t dataFrame){
    if((TruckCursorPos >= lcd.MaxSupportedCharacters) || (dataFrame == '\n')){
        LCD_GoToNextLine();
    }
    if(dataFrame != '\n'){
        LCD_WriteData(dataFrame);
        TruckCursorPos++;
    }
}

void LCD_DisplayString(const char *ptr){
    while((*ptr) != 0){
        LCD_DisplayChar(*ptr++);
    }
}

void LCD_SetCursor(uint8_t line, uint8_t pos){
    if((line < lcd.MaxSupportedLines) && (pos < lcd.MaxSupportedCharacters)){
        TruckCursorPos = pos;
        TruckLineNum = line;
        LCD_WriteCmd(Array_LineAddress[line] + pos);
    }
}

void LCD_GoToNextLine(void){
    TruckLineNum++;
    TruckCursorPos = 0x00;
    if(TruckLineNum >= lcd.MaxSupportedLines){
        TruckLineNum = LineZero;
    }
    LCD_WriteCmd(Array_LineAddress[TruckLineNum]);
}

void LCD_GoToLine(uint8_t line){
    if(line < lcd.MaxSupportedLines){
        TruckCursorPos = 0x00;
        TruckLineNum = line;
        LCD_WriteCmd(Array_LineAddress[line]);
    }
}

void LCD_Clear(void){
    LCD_WriteCmd(cmdClear);
    LCD_GoToLine(cmdReturnHome);
}

void LCD_WriteCmd(uint8_t dataFrame){
    LCD_BusyCheck();
    if(lcd.Mode == 8){
        LCD_SendLowerData(dataFrame);
    }else{
        LCD_SendHigherData(dataFrame);
        LCD_SendCmdSignal();
        dataFrame = dataFrame << 4;
    }
    LCD_SendHigherData(dataFrame);
    LCD_SendCmdSignal();
}

void LCD_CreateCustomChar(uint8_t char_location, uint8_t *CustomChar_array){
    char_location &= 0x7;
    LCD_WriteCmd(0x40 | char_location << 3);
    
    for(int i=0;i<8;i++){
        LCD_WriteData(CustomChar_array[i]);
    }
}

static void LCD_WriteData(uint8_t dataFrame){
    LCD_BusyCheck();
    if(lcd.Mode == 8){
        LCD_SendLowerData(dataFrame);
    }else{
        LCD_SendHigherData(dataFrame);
        LCD_SendDataSignal();
        dataFrame = dataFrame << 4;
    }
    LCD_SendHigherData(dataFrame);
    LCD_SendDataSignal();
}

static void LCD_BusyCheck(void){
    uint8_t busyFlag;
    if(lcd.RW != R_NULL){
        pinMode(lcd.D7,INPUT);
        writeDigital(lcd.RS,LOW);
        writeDigital(lcd.RW,HIGH);
        
        do{
            writeDigital(lcd.EN,LOW);
            __delay_us(10);
            writeDigital(lcd.EN,HIGH);
            __delay_us(10);
            busyFlag = readDigital(lcd.D7);
            
            if(lcd.Mode == 4){
                writeDigital(lcd.EN,LOW);
                __delay_us(10);
                writeDigital(lcd.EN,HIGH);
                __delay_us(10);
            }
        }while(busyFlag != 0);
        
        pinMode(lcd.D7,OUTPUT);
    }else{
        __delay_ms(1);
    }
}

static void LCD_Reset(void){
    LCD_SendHigherData(0x30);
    LCD_SendCmdSignal();
    __delay_ms(100);
    LCD_SendHigherData(0x30);
    LCD_SendCmdSignal();
    __delay_us(200);
    LCD_SendHigherData(0x30);
    LCD_SendCmdSignal();
    __delay_us(200);
    LCD_SendHigherData(0x20);
    LCD_SendCmdSignal();
    __delay_us(200);
}

static void LCD_SendCmdSignal(void){
    writeDigital(lcd.RS,LOW);
    writeDigital(lcd.RW,LOW);
    writeDigital(lcd.EN,HIGH);
    __delay_us(10);
    writeDigital(lcd.EN,LOW);
}

static void LCD_SendDataSignal(void){
    writeDigital(lcd.RS,HIGH);
    writeDigital(lcd.RW,LOW);
    writeDigital(lcd.EN,HIGH);
    __delay_us(10);
    writeDigital(lcd.EN,LOW);
}

static void LCD_SendLowerData(uint8_t dataFrame){
    writeDigital(lcd.D0,isBitSet(dataFrame,0));
    writeDigital(lcd.D1,isBitSet(dataFrame,1));
    writeDigital(lcd.D2,isBitSet(dataFrame,2));
    writeDigital(lcd.D3,isBitSet(dataFrame,3));
}

static void LCD_SendHigherData(uint8_t dataFrame){
    writeDigital(lcd.D4,isBitSet(dataFrame,4));
    writeDigital(lcd.D5,isBitSet(dataFrame,5));
    writeDigital(lcd.D6,isBitSet(dataFrame,6));
    writeDigital(lcd.D7,isBitSet(dataFrame,7));
}