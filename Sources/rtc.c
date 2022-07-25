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
 * File: rtc.c   
 * Author: konstantinos gkotzamanidis 
 * Comments:
 * Revision history: 
 */
#include "../Libraries/rtc.h"
#include "../Libraries/i2c.h"

/*
 * void rtc_Init(void)
 * In this void initiallize rtc with i2c connection.
 */
void rtc_Init(void){
    i2c_Init();
    i2c_Start();
    i2c_Write(WriteMode);
    i2c_Write(ControlRegAddress);
    i2c_Write(0x00);
    i2c_Stop();
}

/*
 * void rtc_SetDateTime(rtc_struct *rtc)
 * In this void write rtc values into memory address.
 */
void rtc_SetDateTime(rtc_struct *rtc){
    i2c_Start();
    
    i2c_Write(WriteMode);
    i2c_Write(SecondRegAddress);
    
    i2c_Write(rtc->sec);
    i2c_Write(rtc->min);
    i2c_Write(rtc->hour);
    i2c_Write(rtc->weekday);
    i2c_Write(rtc->date);
    i2c_Write(rtc->month);
    i2c_Write(rtc->year);
    
    i2c_Stop();
}

/*
 * void rtc_GetDateTime(rtc_struct *rtc)
 * In this void read rtc values from memory address.
 */
void rtc_GetDateTime(rtc_struct *rtc){
    i2c_Start();
    
    i2c_Write(WriteMode);
    i2c_Write(SecondRegAddress);
    
    i2c_Stop();
    
    i2c_Start();
    i2c_Write(ReadMode);
    
    rtc->sec = i2c_Read(1);
    rtc->min = i2c_Read(1);
    rtc->hour = i2c_Read(1);
    rtc->weekday = i2c_Read(1);
    rtc->date = i2c_Read(1);
    rtc->month = i2c_Read(1);
    rtc->year = i2c_Read(1);
    
    i2c_Stop();
}