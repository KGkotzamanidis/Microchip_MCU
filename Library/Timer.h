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
#ifndef _TIMER_H
#define _TIMER_H

#include "Utils.h"

/*
 * void TMR0_start(char clk_select[], bool PSA_select, int Prescaler)
 * Use this function to start the TIMER0.
 * @input param char clk_select[]: Internal/External
 * @input param bool PSA_select: true/false
 * @input param int Prescaler: 2,4,8,16,32,64,128,256
 * Check this when the PSA is true then Prescaler is /2
 */
void TMR0_start(char clk_select[], bool PSA_select, int Prescaler);
/*
 * void TMRO_set(uint8_t value)
 * Use this function to set TIMER0 start value
 * @input param uint8_t valse: value
 */
void TMRO_set(uint8_t value);
/*
 * bool TMR0_Interrupt()
 * Use this function to take an interrupt when the TIMER0 have overflow!
 * @return param true on overflow
 */
bool TMR0_Interrupt();
/*
 * void TMR0_stop();
 * Use this function to stop the TIMER0
 */
void TMR0_stop();
/*
 * void TMR2_start(int Prescaler, int Postscaler)
 * Use this function to start TIMER2
 * @input param int Prescaler: 1,4,16
 * @input param int Postscaler: 1~16
 */
void TMR2_start(int Prescaler, int Postscaler);
/*
 * void TMR2_set(uint8_t value)
 * Use this function to set TIMER2 start value
 * @input param uint8_t valse: value
 */
void TMR2_set(uint8_t value);
/*
 * bool TMR2_Interrupt()
 * Use this function to take an interrupt when the TIMER2 have overflow!
 * @return param true on overflow
 */
bool TMR2_Interrupt();
/*
 * void TMR2_stop();
 * Use this function to stop the TIMER2
 */
void TMR2_stop();
#endif