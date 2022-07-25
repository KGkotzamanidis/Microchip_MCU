#pragma config FOSC = INTRC_CLKOUT  // Oscillator Selection bits (HS oscillator: High-speed crystal/resonator on RA6/OSC2/CLKOUT and RA7/OSC1/CLKIN)
#pragma config WDTE = ON            // Watchdog Timer Enable bit (WDT enabled)
#pragma config PWRTE = OFF          // Power-up Timer Enable bit (PWRT disabled)
#pragma config MCLRE = ON           // RE3/MCLR pin function select bit (RE3/MCLR pin function is MCLR)
#pragma config CP = OFF             // Code Protection bit (Program memory code protection is disabled)
#pragma config CPD = OFF            // Data Code Protection bit (Data memory code protection is disabled)
#pragma config BOREN = ON           // Brown Out Reset Selection bits (BOR enabled)
#pragma config IESO = ON            // Internal External Switchover bit (Internal/External Switchover mode is enabled)
#pragma config FCMEN = ON           // Fail-Safe Clock Monitor Enabled bit (Fail-Safe Clock Monitor is enabled)
#pragma config LVP = OFF            // Low Voltage Programming Enable bit (RB3 pin has digital I/O, HV on MCLR must be used for programming)
#pragma config BOR4V = BOR40V       // Brown-out Reset Selection bit (Brown-out Reset set to 4.0V)
#pragma config WRT = OFF            // Flash Program Memory Self Write Enable bits (Write protection off)

#include <xc.h>

#include "../Libraries/delay.h"
#include "../Libraries/io.h"
#include "../Libraries/oscillator.h"

#define led RD_0
#define in_cmd RD_3
void main(){
    InternalClock_Init(8);
    pin_Direction(led,OUTPUT);
    pin_Direction(in_cmd,INPUT);
    
    while(true){
        char temp = read_byte(in_cmd);
        while(temp == 0xF){
            if(temp == 0xF0){
                write_Digital(led,HIGH);
            }
            else{
                write_Digital(led,LOW);
            }
        }
        __delay_ms(500);
        write_Digital(led,LOW);
    }
    return;
}