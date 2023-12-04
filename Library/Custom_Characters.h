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
#ifndef _CUSTOM_CHARACTERS_H
#define _CUSTOM_CHARACTERS_H

#include "Utils.h"
uint8_t locked[] = {
    0x0E,
    0x11,
    0x11,
    0x11,
    0x1F,
    0x15,
    0x11,
    0x1F
};

uint8_t unlocked[] = {
     0x0E,
  0x11,
  0x01,
  0x01,
  0x1F,
  0x15,
  0x11,
  0x1F
};

uint8_t battery0[] = {
      0x04,
  0x0E,
  0x11,
  0x11,
  0x11,
  0x11,
  0x11,
  0x1F
};

uint8_t battery20[] = {
      0x04,
  0x0E,
  0x11,
  0x11,
  0x11,
  0x11,
  0x1F,
  0x1F
};

uint8_t battery40[] = {
    0x04,
  0x0E,
  0x11,
  0x11,
  0x11,
  0x1F,
  0x1F,
  0x1F
};

uint8_t battery60[] = {
    0x04,
  0x0E,
  0x11,
  0x11,
  0x1F,
  0x1F,
  0x1F,
  0x1F
};

uint8_t battery80[] = {
    0x04,
  0x0E,
  0x11,
  0x1F,
  0x1F,
  0x1F,
  0x1F,
  0x1F
};

uint8_t battery100[] = {
      0x04,
  0x0E,
  0x1F,
  0x1F,
  0x1F,
  0x1F,
  0x1F,
  0x1F
};

uint8_t antena[] = {
     0x1F,
  0x0E,
  0x04,
  0x04,
  0x04,
  0x04,
  0x04,
  0x04
};

uint8_t stickman[] = {
 0x0E,
  0x0E,
  0x15,
  0x0E,
  0x04,
  0x04,
  0x0E,
  0x11
};

uint8_t ring[] = {
    0x00,
  0x00,
  0x04,
  0x0E,
  0x0E,
  0x0E,
  0x1F,
  0x04
};

uint8_t calcius[] = {
     0x1C,
  0x14,
  0x1C,
  0x00,
  0x00,
  0x00,
  0x00,
  0x00
};

uint8_t plugin[] = {
  0x0A,
  0x0A,
  0x0E,
  0x11,
  0x11,
  0x0E,
  0x04,
  0x04
};
#endif