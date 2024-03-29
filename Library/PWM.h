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
#ifndef _PWM_H
#define _PWM_H

#include "GPIO.h"

/*
 * void PWM_Init(PWM_GPIO channel, int Postscaler , int Prescaler)
 * Use this function to create a PWM signal into a PWM pin of MCU.
 * @input param PWM_GPIO: P1A~P1D.
 * @input param int Postscaler: 1,4,16
 * @input param int Prescaler: 1~16
 */
void PWM_Init(PWM_GPIO channel, int Postscaler , int Prescaler);
/*
 * void PWM_Stop(PWM_GPIO channel)
 * Use this function to stop the PWM signal.
 */
void PWM_Stop(PWM_GPIO channel);
/*
 * void PWM_DutyCycle(PWM_GPIO channel, unsigned int DutyCycle)
 * Use this function to create DutyCycle of PWM signal.
 * @input param PWM_GPIO channel: P1A~P1D
 * @input param unsigned int DutyCycle: 0~1023
 */
void PWM_DutyCycle(PWM_GPIO channel, unsigned int DutyCycle);
#endif