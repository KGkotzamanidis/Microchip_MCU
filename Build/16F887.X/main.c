#pragma config FOSC = HS//HS INTRC_CLKOUT// Oscillator Selection bits (HS oscillator: High-speed crystal/resonator on RA6/OSC2/CLKOUT and RA7/OSC1/CLKIN)
#pragma config WDTE = ON        // Watchdog Timer Enable bit (WDT enabled)
#pragma config PWRTE = OFF      // Power-up Timer Enable bit (PWRT disabled)
#pragma config MCLRE = ON       // RE3/MCLR pin function select bit (RE3/MCLR pin function is MCLR)
#pragma config CP = OFF         // Code Protection bit (Program memory code protection is disabled)
#pragma config CPD = OFF        // Data Code Protection bit (Data memory code protection is disabled)
#pragma config BOREN = ON       // Brown Out Reset Selection bits (BOR enabled)
#pragma config IESO = ON        // Internal External Switchover bit (Internal/External Switchover mode is enabled)
#pragma config FCMEN = OFF      // Fail-Safe Clock Monitor Enabled bit (Fail-Safe Clock Monitor is disabled)
#pragma config LVP = OFF        // Low Voltage Programming Enable bit (RB3 pin has digital I/O, HV on MCLR must be used for programming)
#pragma config BOR4V = BOR40V   // Brown-out Reset Selection bit (Brown-out Reset set to 4.0V)
#pragma config WRT = OFF        // Flash Program Memory Self Write Enable bits (Write protection off)

#include "../../Libraries/16F887/macros.h"
#include "../../Libraries/16F887/oscillator.h"
#include "../../Libraries/16F887/io.h"
#include "../../Libraries/16F887/timer.h"

void __interrupt() test(void){
    while(TMR2_interrupt()){
        write_Digital(RD_1,LOW);
        TMR2_reset();
    }
    return;
}

void main(void){
    pin_Direction(RD_1,OUTPUT);
    TMR2_enable(1,1);
    TMR2_set_timer(125);
    ExternalClock_Init();
    write_Digital(RD_1,HIGH);
    
    while(1){
        
    }
    return;
}