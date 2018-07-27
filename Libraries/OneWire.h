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
 */

#ifndef _ONE_WIRE_H
#define _ONE_WIRE_H

#include <stdio.h>
#include <xc.h>
#include "Pic16f887_Utils.h"
#include "Pic_IO.h"
#include "Delay.h"

/*
 * Dallas 18B20 ROM Commands.
 */
#define Search_ROM      0xF0
#define Read_ROM        0x33
#define Match_ROM       0x55
#define Skip_ROM        0xCC
#define Search_Alarm    0xEC

/*
 * Dallas 18B20 Function Commands
 */
#define Convert_T           0x44
#define Write_Scartchpad    0x4E
#define Read_Scartchpad     0xBE
#define Copy_Scartchpad     0x48
#define Recall_E            0xB8
#define ReadPowerSupply     0xB4

/*
 * Resolution Variables
 */
double resolutionTime;
uint8_t cmd_resolution;
/*
 *________________________________________________________
 *| 8 bit CRC | 48 bit Serial Number | 8 bit Family Code |
 *MSB      LSB MSB               LSB  MSB               LSB
 * 
 */
char sensor_ROM[64];

unsigned short DS_Reset(Pic_IO_Ports enm_Channel);
unsigned short DS_Read(Pic_IO_Ports enm_Channel);
unsigned short DS_Write(Pic_IO_Ports enm_Channel, unsigned short value);
char Display_Temperature(Pic_IO_Ports enm_Channel, int Resolution_Var);

#endif