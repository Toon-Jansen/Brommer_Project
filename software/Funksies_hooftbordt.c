
#include <pic16f886.h>
#define _XTAL_FREQ 1000000

#include <xc.h>

#include "hooftcode/header/FUNKSIES_heade.h"

//inisialisatsie////////////////////////////////////////////////////////////////
void init_Alarmboard(void)
{
    // zet klok
    init_clk(2);
    //druknoppern
    TRISA1 = 1; //zet input (is slot knop)
    TRISA2 = 1; //zet input

    ANS1 = 0; // zet op digital input
    ANS2 = 0; // zet op digital input
    
    //solinoide
    TRISB2 = 0; //zet als output
    
    //bromer moterr meganisme
    TRISC5 = 1; //zet input
    TRISC2 = 0; //zet output    
    
    //hbrug
    
    TRISA0 = 0; //zet output
    TRISA3 = 0; //zet output
    TRISA4 = 0; //zet output
    
    
}
////////////////////////////////////////////////////////////////////////////////

//kijken of de brommer beweegt /////////////////////////////////////////////////
int beweging(void)
{
    //moet "1" stuuren waneer inbeweging en een "0" waaneer stilstaat
    
    //toon das aan u
    return 1;
}
////////////////////////////////////////////////////////////////////////////////

//kijk of keykart in de buurt is////////////////////////////////////////////////
int keykard(void)
{
    //moet "1" stuuren waneer inbeweging en een "0" waaneer stilstaat
    
    // debie das aan u
    return 1;
}
////////////////////////////////////////////////////////////////////////////////

//zet slot op //////////////////////////////////////////////////////////////////
void SLOT_op(void)
{
     RC2 = 1;
    PORTB = 0b000000100;
    __delay_ms(500);
    while(RA1 == 0)
    {
         PORTA = 0b00001001;
        __delay_us(200);
        PORTA = 0b00001000;
        __delay_us(600); 
    }
    __delay_ms(500);
    PORTB = 0;
}
////////////////////////////////////////////////////////////////////////////////

//zet slot af //////////////////////////////////////////////////////////////////
void SLOT_aff(void)
{
    RC2 = 0;
       PORTB = 0b000000100;
    __delay_ms(500);
    while(RA1 == 1)
    {
         PORTA = 0b00010001;
        __delay_us(200);
        PORTA = 0b00010000;
        __delay_us(600); 
    }
    __delay_ms(500);
    PORTB = 0;
    
}
////////////////////////////////////////////////////////////////////////////////
//alarm/////////////////////////////////////////////////////////////////////////
void alarm(void)
{
    //luit de sireene maar
}
////////////////////////////////////////////////////////////////////////////////µ