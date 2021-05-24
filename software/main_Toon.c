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
    int waarde = 0;
    init_clk(2);
    init_alarm();
    while(1)
    {
        for(int j = 0; j < 3; j++)
        {
            alarm(1);
        }
        __delay_ms(50);
        for(int j = 0; j < 3; j++)
        {
            alarm(2);
        }
    }
}