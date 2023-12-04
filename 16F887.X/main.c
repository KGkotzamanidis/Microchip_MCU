#pragma config FOSC = INTRC_CLKOUT// Oscillator Selection bits (INTOSC oscillator: CLKOUT function on RA6/OSC2/CLKOUT pin, I/O function on RA7/OSC1/CLKIN)
#pragma config WDTE = OFF       // Watchdog Timer Enable bit (WDT disabled and can be enabled by SWDTEN bit of the WDTCON register)
#pragma config PWRTE = OFF      // Power-up Timer Enable bit (PWRT disabled)
#pragma config MCLRE = ON       // RE3/MCLR pin function select bit (RE3/MCLR pin function is MCLR)
#pragma config CP = OFF         // Code Protection bit (Program memory code protection is disabled)
#pragma config CPD = OFF        // Data Code Protection bit (Data memory code protection is disabled)
#pragma config BOREN = OFF      // Brown Out Reset Selection bits (BOR disabled)
#pragma config IESO = OFF       // Internal External Switchover bit (Internal/External Switchover mode is disabled)
#pragma config FCMEN = ON       // Fail-Safe Clock Monitor Enabled bit (Fail-Safe Clock Monitor is enabled)
#pragma config LVP = OFF        // Low Voltage Programming Enable bit (RB3 pin has digital I/O, HV on MCLR must be used for programming)
#pragma config BOR4V = BOR40V   // Brown-out Reset Selection bit (Brown-out Reset set to 4.0V)
#pragma config WRT = OFF        // Flash Program Memory Self Write Enable bits (Write protection off)

#include "../Library/Lcd.h"
#include "../Library/GPIO.h"
#include "../Library/Oscillator.h"
#include "../Library/Timer.h"
#include "../Library/Utils.h"

void __interrupt() ISR(void){
    return;
}

int main(){
    Internal_Oscillator(8);
    LCD_Setup(RD_2,R_NULL,RD_3,R_NULL,R_NULL,R_NULL,R_NULL,RD_4,RD_5,RD_6,RD_7);
    LCD_SetDisplay(2,16);
    
    char msg[32];
    sprintf(msg,"It's Antena\nThis is line 1\n");
    
    while(1){
        LCD_CreateCustomChar(0,antena);
        LCD_GoToLine(0);
        LCD_SetCursor(0,0);
        LCD_DisplayChar(0);
        LCD_SetCursor(0,2);
        LCD_DisplayString(msg);
    }
}