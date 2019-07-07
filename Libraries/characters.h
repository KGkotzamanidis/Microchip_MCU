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
 * File: characters.h   
 * Author: konstantinos gkotzamanidis 
 * Comments:
 * Revision history: 
 */
#ifndef _CHARACTERS_H
#define _CHARACTERS_H

#include "macros.h"

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