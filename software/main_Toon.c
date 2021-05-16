/*
 * File:   main_Toon.c
 * Author: Toon
 *
 * Created on 8 mei 2021, 12:16
 */

#define _XTAL_FREQ 1000000
#include <xc.h>
#include "hooftcode/header/Toon_header.h"
#include "hooftcode/header/Debie_header.h"
#include "hooftcode/header/FUNKSIES_heade.h"
#include "hooftcode/header/configerasenbits_pic.h"
unsigned int lees(void){
    signed char I2C_DH = 0; //var voor de ontvangen data in High reg
    unsigned char I2C_DL = 0; //var voor de ontvangen data in Low reg
    unsigned int rek = 0;
    unsigned char ref = 0xff;
    unsigned int tot = 0;//var voor de totale waarde van accel
    I2C_Begin();
    I2C_Write(0xD0);
    I2C_Write(0x3D);
    I2C_Begin();
    I2C_Write(0xD1);
    I2C_DH = I2C_Read(1);
    I2C_DL = I2C_Read(0);
    I2C_End();
    for(int i = 0; i < 4; i++){
        //while(RC0 == 0); //wacht tot data klaar staat om gelezen te worden
        I2C_Begin();
        I2C_Write(0xD0);
        I2C_Write(0x3D);
        I2C_Begin();
        I2C_Write(0xD1);
        I2C_DH = I2C_Read(1);
        I2C_DL = I2C_Read(0);
        I2C_End();
        if(I2C_DH < 0){
            I2C_DH = ref - I2C_DH;
            I2C_DH += 1;
        }
        rek = I2C_DH;
        rek = rek<<8;
        rek = rek | I2C_DL;
        rek = rek>>2;
        tot += rek;
        rek = 0;
    }
    return tot;
    }
void main(void) 
{
    init_clk(4);
    TRISB0 = 0;
    I2C_Initialize(2500); //Initialiseer I2C Master met 125KHz clock
    
    unsigned int I2C_D = 0;
    config_Ac();
while(1)
  {
    I2C_D = lees();
   __delay_ms(1000);
}
}