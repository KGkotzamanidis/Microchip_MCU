#include "./../Library/GPIO.h"

void pinMode(GPIO pin, uint8_t mode){
    uint8_t portNumber;
    portNumber = (pin >> 3);
    pin = pin & 0x07;
    
    switch(portNumber){
        case 0:
            UpdateBit(TRISA,pin,mode);
            break;
        case 1:
            UpdateBit(TRISB,pin,mode);
            break;
        case 2:
            UpdateBit(TRISC,pin,mode);
            break;
        case 3:
            UpdateBit(TRISD,pin,mode);
            break;
        case 4:
            UpdateBit(TRISE,pin,mode);
            break;
    }
}

uint8_t readDigital(GPIO pin){
    uint8_t portNumber;
    uint8_t value = 0x00;
    portNumber = (pin >> 3);
    pin = pin & 0x07;
    
    switch(portNumber){
        case 0:
            value = GetBitStatus(PORTA,pin);
            break;
        case 1:
            value = GetBitStatus(PORTB,pin);
            break;
        case 2:
            value = GetBitStatus(PORTC,pin);
            break;
        case 3:
            value = GetBitStatus(PORTD,pin);
            break;
        case 4:
            value = GetBitStatus(PORTE,pin);
            break;
    }
    return value;
}

void writeDigital(GPIO pin, uint8_t type){
    uint8_t portNumber;
    portNumber = (pin >> 3);
    pin = pin & 0x07;
    
    switch(portNumber){
        case 0:
            UpdateBit(PORTA,pin,type);
            break;
        case 1:
            UpdateBit(PORTB,pin,type);
            break;
        case 2:
            UpdateBit(PORTC,pin,type);
            break;
        case 3:
            UpdateBit(PORTD,pin,type);
            break;
        case 4:
            UpdateBit(PORTE,pin,type);
            break;
    }
}

uint16_t readAnalog(ANALOG_GPIO channel){
    if(channel >> 13){
        return 0;
    }
    ADCON0 = 0x00;
    ADCON1 = 0x80;
    ADCON0 = (channel<<3);
    
    ADON = 1;
    __delay_us(10);
    GO = 1;
    
    while(GO_DONE == 1){
        
    }
    return ((ADRESH << 8) + ADRESL);
}

char readBit(GPIO pin){
    uint8_t _bit = 0x00;
    _bit = readDigital(pin);
    return _bit;
}

char readByte(GPIO pin){
    uint8_t byte = 0x00;
    for(int x = 0; x < 8; x++){
        byte = byte | (readDigital(pin) << x);
    }
    return byte;
}

void writeByte(GPIO pin, uint8_t byte){
    for(int x = 0; x < 8; x++){
        if(byte & 0x01){
            writeDigital(pin,HIGH);
        }
        else{
            writeDigital(pin,LOW);
        }
        byte = byte >> x;
    }
}