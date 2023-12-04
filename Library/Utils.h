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
#ifndef _UTILS_H
#define _UTILS_H

#pragma warning disable 520 

#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include <xc.h>

#define _XTAL_FREQ 8000000
#define GetBitMask(bit)         (1<<(bit))
#define BitSet(x,bit)           ((x) |=  GetBitMask(bit))
#define BitClear(x,bit)         ((x) &= ~GetBitMask(bit))
#define BitToggle(x,bit)        ((x) ^=  GetBitMask(bit))
#define UpdateBit(x,bit,val)    ((val)? BitSet(x,bit): BitClear(x,bit))
#define GetBitStatus(x,bit)     (((x)&(GetBitMask(bit)))!=0)
#define isBitSet(x,bit)         (((x)&(GetBitMask(bit)))!=0)

#endif