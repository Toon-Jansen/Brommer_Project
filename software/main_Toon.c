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

void main(void) 
{
    //I2C_Initialize(2500); //Initialiseer I2C Master met 125KHz clock
    init_clk(4);
    TRISB = 0x00;
    init_piep();
    while(1)
    {
       __delay_ms(1);
       piep(1);
       __delay_ms(2000);
    }
}