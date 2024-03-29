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
#ifndef _OSCILLATOR_H
#define _OSCILLATOR_H

#include "Utils.h"

/*
 * void External_Oscillator()
 * Use this function to Start MCU With External Oscilator
 * First you need to change the Configuration Bits FOSC = HS.
 * For more info read @ page:63~75
 */
void External_Oscillator();
/*
 * void Internal_Oscillator(int clock_speed);
 * Use this function to Start MCU With Internal Oscilator
 * First you need to change the Configuration Bits FOSC = INTRC_CLKOUT.
 * @input param int clock_speed:1-2-4-8
 * For more info read @ page:63~75
 */
void Internal_Oscillator(int clock_speed);
#endif