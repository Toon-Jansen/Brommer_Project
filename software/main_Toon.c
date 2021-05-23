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

typedef unsigned char bool;
#define true    1
#define false   0

bool beweeg(void){
    bool detect = false;
    unsigned int waarde[5] = {0,0,0,0,0};
    unsigned int hoog = 0,buf = 0,laag = 0;
    for(int i = 0; i < 5; i++)
    {
        waarde[i] = lees();
        __delay_ms(1000);
    }
    hoog = waarde[0];
    laag = waarde[1];
    if(hoog < laag){
        buf = hoog;
        hoog = laag;
        laag = buf;
    }
    for(int i = 0; i < 5; i++)
    {
        if(waarde[i] < laag)
        {
            laag = waarde[i];
        }
        if(waarde[i] > hoog){
            hoog = waarde[i];
        }
    }
    buf = hoog - laag;
    if(buf > 600)
    {
        detect = true;
    }
    return detect;
}
void main(void) 
{
    init_clk(4);
    I2C_Initialize(2500); //Initialiseer I2C Master met 125KHz clock
    config_Ac();
    //TRISB = 0x00;
    while(1)
    {
        bool detect = false;
        detect = beweeg();
        if(detect == 1)
        {
            I2C_Begin();
            I2C_Write(0x00);
            I2C_End();
        }else{
            I2C_Begin();
            I2C_Write(0xFF);
            I2C_End();
        }
    }
}