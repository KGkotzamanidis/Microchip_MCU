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
#ifndef _INTERRUPT_H
#define _INTERRUPT_H

#include "GPIO.h"
#include "Utils.h"

/*
 * void Interrupt_enable(bool Peripheral,bool Timer0, bool INT, bool INT_RB, INTERRUPT_GPIO channel)
 * Use this function to enable the Interrupt Service in below boolean ports!
 * @input param bool Peripheral: true/false
 * @input param bool Timer0: true/false
 * @input param bool INT: true/false
 * @input param bool INT_RB: true/false
 * @input param INTERRUPT_GPIO channel: IOCB_0~IOCB_7
 */
void Interrupt_enable(bool Peripheral,bool Timer0, bool INT, bool INT_RB, INTERRUPT_GPIO channel);
/*
 * void Interrupt_disable(void)
 * Use this function to disable the Interrupt Service!
 */
void Interrupt_disable(void);
#endif