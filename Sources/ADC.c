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
 */
 
 #include "ADC.h"
 #include "Delay.h"
 
 /*
  * Initiallize Analog to Digital Convert
  * ADCON0 = 0x00 -> Set the sampling freq in osc_freq/2.
  * ADCON1 = 0x80 -> Set all analog port as Input with 10bit resolution.
  */
 void ADC_Init(){
	 ADCON0 = 0x00;
	 ADCON1 = 0x80;
 }
 
 /*
  * Create method like Arduino "Analog_read"
  * for more info about how it works read the
  * data sheet for Pic16f887 in ADC chapter
  */
 uint16_t Analog_Read(uint8_t InputChannel){
	 ADCON0 = (InputChannel<<3);
	 ADON = 1;
	 Delay_us(10);
	 GO = 1;
	 while(GO_DONE == 1){
		 return ((ADRESH<<8)+ADRESL);
	 }
 }
