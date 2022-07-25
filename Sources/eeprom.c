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
 * File: eeprom.c  
 * Author: konstantinos gkotzamanidis
 * Comments:
 * Revision history: 
 */
#include "../Libraries/eeprom.h"

/*
 * void EEPROM_WriteBytes(uint16_t addr,uint8_t data)
 * input arg0: uint16_t addr.
 * input arg1: uint8_t data
 * This Function write data @ address in EEPROM
 */
void EEPROM_WriteBytes(uint16_t addr,uint8_t data){
    uint8_t Flags;
    while(WR);
    EEADR = addr;
    EEDATA = data;
    WREN = 1;
    Flags = GIE;
    GIE=0;
    EECON2 = 0x55;
    EECON2 = 0xAA;
    WR = 1;
    GIE = Flags;
    WREN = 0;
}
/*
 * void EEPROM_WriteNBytes(uint16_t addr,uint8_t *ram_addr,uint16_t numOfData)
 * input arg0: uint16_t addr.
 * input arg1: unint8_t *ram_addr.
 * input arg2: uint16_t numOfData
 * This Function write data @ address in EEPROM form RAM
 */
void EEPROM_WriteNBytes(uint16_t addr,uint8_t *ram_addr,uint16_t numOfData){
    while(numOfData !=0){
        EEPROM_WriteBytes(addr,*ram_addr);
        addr++;
        ram_addr++;
        numOfData--;
    }
}
/*
 * void EEPROM_ReadNBytes(uint16_t addr,uint8_t *ram_addr,uint16_t numOfData)
 * input arg0: uint16_t addr.
 * input arg1: unint8_t *ram_addr.
 * input arg2: uint16_t numOfData
 * This Function read data @ address in EEPROM form RAM
 */
void EEPROM_ReadNBytes(uint16_t addr,uint8_t *ram_addr,uint16_t numOfData){
    while(numOfData !=0){
        *ram_addr = EEPROM_ReadBytes(addr);
        addr++;
        ram_addr++;
        numOfData--;
    }
}
/*
 * uint8_t EEPROM_ReadBytes(uint16_t addr)
 * input arg0: uint16_t addr.
 * return uint8_t data.
 * This function read data @ address form EEPROM
 */
uint8_t EEPROM_ReadBytes(uint16_t addr){
    while(RD || WR);
    EEADR = addr;
    RD = 1;
    return EEADR;
}
/*
 * void EEPROM_WriteString(uint16_t addr,char *ptr_Message)
 * input arg0: uint16_t addr.
 * input arg1: char *ptr_Message.
 * This function write String message into EEPROM and start from address.
 */
void EEPROM_WriteString(uint16_t addr,char *ptr_Message){
    do{
        EEPROM_WriteBytes(addr,*ptr_Message);
        ptr_Message++;
        addr++;
    }while(*(ptr_Message - 1) !=0);
}
/*
 * void EEPROM_ReadString(uint16_t addr,char *ptr_Message)
 * input arg0: uint16_t addr.
 * input arg1: char *ptr_Message.
 * This function read String message into EEPROM and start from address.
 */
void EEPROM_ReadString(uint16_t addr,char *ptr_Message){
    char eeprom_data;
    do{
        eeprom_data = EEPROM_ReadBytes(addr);
        *ptr_Message = eeprom_data;
        ptr_Message++;
        addr++;
    }while(eeprom_data !=0);
}
/*
 * void EEPROM_Erase(void)
 * This function erase the EEPROM.
 */
void EEPROM_Erase(void){
    for(uint16_t addr =0;addr < MaxEEPROMSize;addr++){
        EEPROM_WriteBytes(addr,0xFFU);
    }
}