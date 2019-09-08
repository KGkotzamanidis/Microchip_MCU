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
 * File: esp32.h   
 * Author: konstantinos gkotzamanidis 
 * Comments:
 * Revision history: 
 */
#ifndef _ESP32_H
#define _ESP32_H

#include <stdarg.h>
#include <stdio.h>
#include <string.h>

#include "io.h"
#include "macros.h"

void esp32_Init(void);
void esp32_Write(char byte);
char esp32_Read();
void esp32_Write_string(char* string);

bit esp32_IsStarted(void);
bit esp32_IsRestart(void);
void esp32_Echo_cmd(bool);

void esp32_Mode(uint8_t);
uint8_t esp32_Connect(uint8_t*,uint8_t*);
void esp32_Disconnect(void);
void esp32_Get_ip(char*);
bit esp32_Start(uint8_t protocol,char* ip,uint8_t port);
bit esp32_Send(uint8_t*);
void esp32_Receive(uint8_t*,uint16_t bool);
void esp32_Print(unsigned const char *);

inline uint16_t esp32_Wait_For(uint8_t *);
inline uint8_t esp32_Wait_Responce(void);

#endif