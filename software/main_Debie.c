//kode kaykart//////////////////////////////////////////////////////////////////
/*
 * beschrijving:
 * 
 * 1) de kykart gaat geduurende 5ms kijken of hij de leter "T" aankrijgt
 * 
 * a) zo ja gaat deze de leter "L" antwoorden warop deze 100ms wacht 
 *    op het antwoort is dit antwoort de letter "O" gaat deze het wachtwoort 
 *    doorstuuren zoniet kijkt deze trug verder dat deze de letter "T" ontvagt 
 *    of stopt met kijken voor 100ms
 * b) zo nee gaat deze voor 100ms stoppe met kijken
 * 
 */
/*#include "hooftcode/header/configerasenbits_pic.h"
#define _XTAL_FREQ 1000000
#include <xc.h>

#include "hooftcode/header/FUNKSIES_heade.h"

//#include "hooftcode/header/Debie_header.h"
//#include "hooftcode/header/FUNKSIES_heade.h"
//#include "hooftcode/header/Toon_header.h"

//making uart
void init_pinout(void)
{
    //rf
    TRISB0 = 0;
    TRISB1 = 0;
    //buttens
    TRISA1 = 1; 
    TRISA2 = 1; 
    
    ANS1 = 0; 
    ANS2 = 0; 
    
    //moter onderbreking
    TRISC2 = 0;
    TRISC5 = 1; //te testen
    //solinoide
    TRISB = 0;//problrrm
    //buzzer
    //i2c
    TRISC3 = 0;//probleem
    TRISC4 = 0;
}





void main()
{ 
    init_pinout();
    init_clk(3); 
   

   // interup_off();
    //init_uart(1000000);
    RC3 = 1 ;
  
    
  do
  {    
      if(RA1==1)
      {
           TRISB = 0;
          RB1 = 1;
          
          __delay_ms(1000);
          
          
      }
      else
      {
          TRISB = 0;
          RB2 = 1;
          
      }
      //RB0 = RA1;
      //RB1 = RA1;
       //RB2 = RA1;
      //RC3 = RA1 ;
      //RC4 = RA1 ;
      //RB4 = RA1 ;
      
  }while(1);
}
//funksie returnt 1 bij de juiste keykart en 0 bij geen of de fuite keykart
/*int ask_KeyKart(void)
{
    for(int teller = 0; teller < 2000; teller++) //dient om 2 secont te zoekken 
                                                 //naar de keykart
    {
        
        if(RCIF == 1 && RCREG == 'L')
        {
            int wwachtwoort[6];
            int corr = 0;
            uart_schrijf('O');
            for(int x = 0; x< Wwoort_lente;x++)
            {
               wwachtwoort[x] = uart_lees();
            }
            
            for(int x = 0; x< Wwoort_lente;x++)
            {
               if(wwachtwoort[x] != Wwoort[x])
               {
                   corr = 1;
               }
            }
            if(corr == 0)
            {
                return 1;    
            }
            
            
        }
        uart_schrijf('T');
        __delay_ms(1);
        
    }
    return 0;
    
    
    
}*/