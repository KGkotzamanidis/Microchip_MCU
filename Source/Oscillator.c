#include "./../Library/Oscillator.h"

void External_Oscillator(){
    OSCCON = 0x7E;
    OSCTUNE = 0x00;
}
void Internal_Oscillator(int clock_speed){
    if(clock_speed == 8){
        OSCCON = 0x70;
        OSCTUNE = 0x00;
    }
    else if(clock_speed == 4){
        OSCCON = 0x60;
        OSCTUNE = 0x00;
    }
    else if(clock_speed == 2){
        OSCCON = 0x50;
        OSCTUNE = 0x00;
    }
    else if(clock_speed == 1){
        OSCCON = 0x40;
        OSCTUNE = 0x00;
    }
}