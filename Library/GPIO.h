/*
*	Copyright (C) <2023>  <KGkotzamanidis>
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
#ifndef _GPIO_H
#define _GPIO_H

#include "Utils.h"

typedef enum{
    RA_0,RA_1,RA_2,RA_3,RA_4,RA_5,RA_6,RA_7,
    RB_0,RB_1,RB_2,RB_3,RB_4,RB_5,RB_6,RB_7,
    RC_0,RC_1,RC_2,RC_3,RC_4,RC_5,RC_6,RC_7,
    RD_0,RD_1,RD_2,RD_3,RD_4,RD_5,RD_6,RD_7,
    RE_0,RE_1,RE_2,RE_3,RE_4,RE_5,RE_6,RE_7,
    R_NULL = 0xFF
}GPIO;

/* Analog Channels */
typedef enum {
    AN_0,AN_1,AN_2,AN_3,AN_4,AN_5,
    AN_6,AN_7,AN_8,AN_9,AN_10,AN_11,
    AN_12,AN_13,AN_NULL = 0xFF
}ANALOG_GPIO;

/* PWM Channels */
typedef enum{
    P1A,P1B,P1C,P1D
}PWM_GPIO;

/* Interrupt Port B*/
typedef enum{
    IOCB_0,IOCB_1,IOCB_2,IOCB_3,
    IOCB_4,IOCB_5,IOCB_6,IOCB_7,
    IOCB_NULL = 0xFF
}INTERRUPT_GPIO;

/*
 * void pinMode(GPIO pin,uint8_t mode)
 * Use this function to set INPUT/OUTPUT any pin of MCU.
 * @input param GPIO pin: RA_0~RE_7
 * @input param uint8_t mode: INPUT/OUTPUT
 */
void pinMode(GPIO pin,uint8_t mode);
/*
 * uint8_t readDigital(GPIO pin)
 * Use this function to read byte from any pin of MCU.
 * @input param GPOIO pin: RA_0~RE_7
 * @output param uint8_t
 */
uint8_t readDigital(GPIO pin);
/*
 * void writeDigital(GPIO pin, uint8_t type)
 * Use this function to set HIGH/LOW any pin of MCU.
 * @input param GPIO pin: RA_0~RE_7
 * @input param uint8_t type: HIGH/LOW
 */
void writeDigital(GPIO pin, uint8_t type);
/*
 * uint16_t readAnalog(ANALOG_GPIO channel)
 * Use this function to read raw values from analog pin of MCU.
 * @input param ANALOG_GPIO chanel: AN0~AN13
 * @output param uint16_t raw value.
 */
uint16_t readAnalog(ANALOG_GPIO channel);
/*
 * char readBit(GPIO pin)
 * Use this function to read bit from any pin of MCU.
 * @input param GPIO pin: RA_0~RE_7
 * @output param char.
 */
char readBit(GPIO pin);
/*
 * char readByte(GPIO pin)
 * Use this function to read byte from any pin of MCU.
 * @input param GPIO pin: RA_0~RE_7
 */
char readByte(GPIO pin);
/*
 * void writeByte(GPIO pin, uint8_t byte);
 * Use this function to write byte to any pin of MCU.
 * @input param GPIO pin: RA_0~RE_7.
 * @input param uint8_t byte: byte
 */
void writeByte(GPIO pin, uint8_t byte);
#endif