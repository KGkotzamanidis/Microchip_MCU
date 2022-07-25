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
 * File: i2c.c  
 * Author: konstantinos gkotzamanidis
 * Comments:
 * Revision history: 
 */
#include "../Libraries/i2c.h"

static void i2c_Wait_for_idle();
static void i2c_Acknowledge();
static void i2c_Not_Acknowledge();

void i2c_Init(){
    SCL_Direction = INPUT;
    SDA_Direction = INPUT;
    
    SSPSTAT |= 0x80;
    SSPCON = 0x28;
    SSPADD = 50;
}

void i2c_Start(){
    SEN = 1;
    while(SEN == 1);
}

void i2c_Restart(){
    RSEN = 1;
    while(RSEN);
}

void i2c_Stop(){
    PEN = 1;
    while(PEN == 1);
}

void i2c_Write(uint8_t data){
    SSPBUF = data;
    while(BF==1);
    i2c_Wait_for_idle();
}

uint8_t i2c_Read(uint8_t ack_Options){
    uint8_t data = 0x00;
    RCEN = 1;
    while(BF == 0);
    data = SSPBUF;
    i2c_Wait_for_idle();
    
    if(ack_Options == 1){
        i2c_Acknowledge();
    }
    else{
        i2c_Not_Acknowledge();
    }
    return data;
}

static void i2c_Wait_for_idle(){
    while((SEN ==1) || (RSEN == 1) || (PEN == 1) || (RCEN == 1) || (R_W == 1));
}

static void i2c_Acknowledge(){
    ACKDT = 0;
    ACKEN = 1;
    while(ACKEN == 1);
}

static void i2c_Not_Acknowledge(){
    ACKDT = 1;
    ACKEN = 1;
    while(ACKEN == 1);
}