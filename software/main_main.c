/*
 * File:   main.c
 * Author: Lauren
 *
 * Created on 8 mei 2021, 12:16
 */

#define _XTAL_FREQ 250000
#include <xc.h>
#include "hooftcode/header/Debie_header.h"
#include "hooftcode/header/FUNKSIES_heade.h"
#include "hooftcode/header/Toon_header.h"
#include "hooftcode/header/configerasenbits_pic.h"





void main(void) 
{
    init_clk(1);
    TRISB0 = 0;
    while(1)
    {
        __delay_ms(100);
        RB0 = 1;
        
        __delay_ms(100);
        RB0 = 1;
        
    }
    return;
}
