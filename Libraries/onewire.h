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
 * File: onewire.h   
 * Author: konstantinos gkotzamanidis 
 * Comments:
 * Revision history: 
 */
#ifndef _ONEWIRE_H
#define _ONEWIRE_H
#include <xc.h>
#include "delay.h"
#include "lcd.h"

#define sensor PORTAbits.RA0
#define direction TRISAbits.TRISA0

#define SEARCH_ROM 0xF0
#define READ_ROM 0x33
#define MATCH_ROM 0x55
#define SKIP_ROM 0xCC
#define SEARCH_ALARM 0xEC

#define CONVERT_T 0x44
#define WRITE_SCARTCHPAD 0x4E
#define READ_SCARTCHPAD 0xBE
#define COPY_SCARTCHPAD 0x48
#define RECALL_E 0xB8
#define READPOWERSUPLY 0xB4

#define DS1820_B_Family 0x28
#define DS1820_S_Family 0x10

#define DS1820_ADDRESH_LENGH 8

static bool DoneFlag;
static uint8_t LastSensorFount;
static uint8_t Sensor_Address[DS1820_ADDRESH_LENGH];

void DS_Reset_pulse();
void DS_Presence_pulse();
bool DS_check();
void DS_Set_zero();
void DS_Set_one();
char DS_Read_bit();
char DS_Read_byte();
void DS_Write_command(char command);
void DS_Set_resolution(char resolution);
float DS_Read_temperature();
void DS_Print_temperature();
void DS_Address(char command);
bool Ds_FindNextSensor(void);
bool DS_FindFirstSensor(void);
void DS_Write_EEPROM(uint8_t tempH, uint8_t tempL);
#endif
