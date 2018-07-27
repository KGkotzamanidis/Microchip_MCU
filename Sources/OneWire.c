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

#include "OneWire.h"

/*
 * Temperature Conversion Time:
 * 9bit     resolution:93.75    ms
 * 10bit    resolution:187.5    ms
 * 11bit    resolution:375      ms
 * 12bit    resolution:750      ms
 * More info in Datasheet note 12.
 */
void selectResolution(int val_Resolution){
    if(val_Resolution<=12 && val_Resolution >= 9){
        switch(val_Resolution){
            //9bit - Resolution
            case 9:
                resolutionTime = 93.75;
                cmd_resolution = 0x1F;
                break;
                //10bit - Resolution
            case 10:
                resolutionTime = 187.5;
                cmd_resolution = 0x3F;
                break;
                //11bit - Resolution
            case 11:
                resolutionTime = 375;
                cmd_resolution = 0x5F;
                break;
                //12bit - Resolution
            case 12:
                resolutionTime = 750;
                cmd_resolution = 0x7F;
                break;
        }
    }
}

/*
 * Start Initialization Timing and check if the
 * 1-wire is in presence or NOT presence
 */
unsigned short DS_Reset(Pic_IO_Ports enm_Channel){
    
    Pic_IO_Mode(enm_Channel,OUTPUT);
    Pic_IO_Write(enm_Channel,LOW);
    Delay_us(480);
    Pic_IO_Mode(enm_Channel,INPUT);
    Delay_us(60);
    
    if(Pic_IO_Read(enm_Channel) == LOW){
        Delay_us(480);
        return 0;
    }
    else{
        Delay_us(480);
        return 1;
    }
}

/*
 * One Wire Write data for sensor
 */
unsigned short DS_Write(Pic_IO_Ports enm_Channel, unsigned short value){
    short i,CMD;
    Pic_IO_Mode(enm_Channel,OUTPUT);
    CMD = value;
    
    for(i=0;i<8;i++){
        if((CMD & (1<<i)) !=0){
            Pic_IO_Mode(enm_Channel,OUTPUT);
            Pic_IO_Write(enm_Channel,LOW);
            Delay_us(1);
            Pic_IO_Mode(enm_Channel,INPUT);
            Delay_us(60);
        }
        else{
            Pic_IO_Mode(enm_Channel,OUTPUT);
            Pic_IO_Write(enm_Channel,LOW);
            Delay_us(60);
            Pic_IO_Mode(enm_Channel,INPUT);
        }
    }
}

/*
 * One Wire Read data form sensor
 */
unsigned short DS_Read(Pic_IO_Ports enm_Channel){
    short i,result = 0;
    Pic_IO_Mode(enm_Channel,INPUT);
    
    for(i=0;i<8;i++){
        Pic_IO_Mode(enm_Channel,OUTPUT);
        Delay_us(2);
        Pic_IO_Mode(enm_Channel,INPUT);
        
        if(Pic_IO_Read(enm_Channel) != LOW){
            result |= 1<<i;
            Delay_us(60);
        }
    }
    return result;
}

/*
 * One Wire Convert the 16bit into Temperature
 */
char Display_Temperature(Pic_IO_Ports enm_Channel, int Resolution_Var){
    char Sensor_Tem[16];
    unsigned char tempL,tempH;
    float C,remain,temp;
    unsigned char degr = 223;
    
    selectResolution(Resolution_Var);
    
    if(!DS_Reset(enm_Channel)){
        DS_Write(enm_Channel,Skip_ROM);
        DS_Write(enm_Channel,Convert_T);
        Delay_ms(resolutionTime);
        
        DS_Reset(enm_Channel);
        DS_Write(enm_Channel,Skip_ROM);
        DS_Write(enm_Channel,Read_Scartchpad);
        
        tempL = DS_Read(enm_Channel);
        tempH = DS_Read(enm_Channel);
        
        for(int x=0;x<3;x++){
			DS_Read(enm_Channel);
		}
		    
        remain = DS_Read(enm_Channel);
        C = DS_Read(enm_Channel);
        temp = 0;
        temp += tempL >>1;
        if(tempH & 128){
            temp = - (128 - temp);
        }
        temp = temp + (0.25 + (C - remain) / C);
        
        sprintf(Sensor_Tem,"Temp:%5.2f%c",temp,degr);
    }
    return Sensor_Tem;
}
