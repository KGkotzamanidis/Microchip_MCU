// <editor-fold defaultstate="collapsed" desc="PIC18LF24K40 Config BITs">
#pragma config FEXTOSC = HS    // External Oscillator mode Selection bits (Oscillator not enabled)
//#pragma config RSTOSC = LFINTOSC
#pragma config CLKOUTEN = OFF   // Clock Out Enable bit (CLKOUT function is enable)
#pragma config CSWEN = ON       // Clock Switch Enable bit (Writing to NOSC and NDIV is allowed)
#pragma config FCMEN = ON       // Fail-Safe Clock Monitor Enable bit (Fail-Safe Clock Monitor enabled)
#pragma config MCLRE = EXTMCLR  // Master Clear Enable bit (If LVP = 0, MCLR pin is MCLR; If LVP = 1, RE3 pin function is MCLR )
#pragma config PWRTE = OFF      // Power-up Timer Enable bit (Power up timer disabled)
#pragma config LPBOREN = OFF    // Low-power BOR enable bit (ULPBOR disabled)
#pragma config BOREN = SBORDIS  // Brown-out Reset Enable bits (Brown-out Reset enabled , SBOREN bit is ignored)
#pragma config BORV = VBOR_190  // Brown Out Reset Voltage selection bits (Brown-out Reset Voltage (VBOR) set to 1.90V)
#pragma config ZCD = OFF        // ZCD Disable bit (ZCD disabled. ZCD can be enabled by setting the ZCDSEN bit of ZCDCON)
#pragma config PPS1WAY = ON     // PPSLOCK bit One-Way Set Enable bit (PPSLOCK bit can be cleared and set only once; PPS registers remain locked after one clear/set cycle)
#pragma config STVREN = ON      // Stack Full/Underflow Reset Enable bit (Stack full/underflow will cause Reset)
#pragma config DEBUG = OFF      // Debugger Enable bit (Background debugger disabled)
#pragma config XINST = OFF      // Extended Instruction Set Enable bit (Extended Instruction Set and Indexed Addressing Mode disabled)
#pragma config WDTCPS = WDTCPS_31// WDT Period Select bits (Divider ratio 1:65536; software control of WDTPS)
#pragma config WDTE = ON        // WDT operating mode (WDT enabled regardless of sleep)
#pragma config WDTCWS = WDTCWS_7// WDT Window Select bits (window always open (100%); software control; keyed access not required)
#pragma config WDTCCS = SC      // WDT input clock selector (Software Control)
#pragma config WRT0 = OFF       // Write Protection Block 0 (Block 0 (000800-001FFFh) not write-protected)
#pragma config WRT1 = OFF       // Write Protection Block 1 (Block 1 (002000-003FFFh) not write-protected)
#pragma config WRTC = OFF       // Configuration Register Write Protection bit (Configuration registers (300000-30000Bh) not write-protected)
#pragma config WRTB = OFF       // Boot Block Write Protection bit (Boot Block (000000-0007FFh) not write-protected)
#pragma config WRTD = OFF       // Data EEPROM Write Protection bit (Data EEPROM not write-protected)
#pragma config SCANE = ON       // Scanner Enable bit (Scanner module is available for use, SCANMD bit can control the module)
#pragma config LVP = ON         // Low Voltage Programming Enable bit (Low voltage programming enabled. MCLR/VPP pin function is MCLR. MCLRE configuration bit is ignored)
#pragma config CP = OFF         // UserNVM Program Memory Code Protection bit (UserNVM code protection disabled)
#pragma config CPD = OFF        // DataNVM Memory Code Protection bit (DataNVM code protection disabled)
#pragma config EBTR0 = OFF      // Table Read Protection Block 0 (Block 0 (000800-001FFFh) not protected from table reads executed in other blocks)
#pragma config EBTR1 = OFF      // Table Read Protection Block 1 (Block 1 (002000-003FFFh) not protected from table reads executed in other blocks)
#pragma config EBTRB = OFF      // Boot Block Table Read Protection bit (Boot Block (000000-0007FFh) not protected from table reads executed in other blocks)
// </editor-fold>

#include "../../Libraries/18LF24K40/macros.h"
#include "../../Libraries/18LF24K40/oscillator.h"
#include "../../Libraries/18LF24K40/io.h"
#include "../../Libraries/18LF24K40/timer.h"

void main(void){
    return;
}