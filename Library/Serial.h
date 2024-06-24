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

/*
 * void UART_Init(uint32_t baudrate)
 * Use this function to Initiallize the UART
 * @input param uint32_t baudrate
 */
void UART_Init(uint32_t baudrate);
/*
 * void UART_SetBaudRate(uint32_t baudrate)
 * Use this function to set the BuadRate
 * @input param uint32_t baudrate
 */
void UART_SetBaudRate(uint32_t baudrate);
/*
 * char UART_RxChar()
 * Use this function to read an Character
 * @return character
 */
char UART_RxChar();
/*
 * uint8_t UART_RxString(char *ptr_string)
 * Use this function to read an String
 * @input param char *ptr_string
 * @return param uint8_t len
 */
uint8_t UART_RxString(char *ptr_string);
/*
 * void UART_TxChar(char uartData)
 * Use this function to send an Character
 * @input param char uardData
 */
void UART_TxChar(char uartData);
/*
 * void UART_TxString(const char *ptr_string)
 * Use this function to send an String
 * @input param const char *ptr_string
 */
void UART_TxString(const char *ptr_string);

#endif