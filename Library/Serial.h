/*
*	Copyright (C) <2024>  <KGkotzamanidis>
*
*	This program is free software: you can redistribute it and/or modify
*	it under the terms of the GNU General Public License as published by
*	the Free Software Foundation, either version 3 of the License, or
*	(at your option) any later version.
*
*	This program is distributed in the hope that it will be useful,
*	but WITHOUT ANY WARRANTY; without even the implied warranty of
*	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
*	GNU General Public License for more details.
*
*	You should have received a copy of the GNU General Public License
*	along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/
#ifndef _SERIAL_H
#define _SERIAL_H

#include "Utils.h"

#define minBaudRate 2400
#define maxBaudRate 115200
#define getBuadReate(baudrate) (uint32_t)((_XTAL_FREQ/(64*(uint32_t)baudrate))-1)

void UART_Init(uint32_t baudrate);
void UART_SetBaudRate(uint32_t baudrate);
char UART_RxChar();
void UART_TxChar(char uartData);
void UART_TxString(const char *ptr_string);
uint8_t UART_RxString(char *ptr_string);
#endif