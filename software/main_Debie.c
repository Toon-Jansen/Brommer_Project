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
#include "hooftcode/header/configerasenbits_pic.h"
#define _XTAL_FREQ 1000000
#include <xc.h>

#include "hooftcode/header/FUNKSIES_heade.h"

//#include "hooftcode/header/Debie_header.h"
//#include "hooftcode/header/FUNKSIES_heade.h"
//#include "hooftcode/header/Toon_header.h"

//making uart






void main()
{ 
        TRISB1 =0; //cs
        TRISC3 = 0;
          TRISC4 = 0;

    TRISB0 =0; //set
    TRISA1 = 1;
    ANS1 = 0;
    
   
   
    init_clk(3); 
   // interup_off();
    init_uart(1000000);
    RB0=0;
    RB1=1;
     RC3 = 1;
     RC4 = 0;
  
    int a;
  do
  {    
      
      uart_schrijf(49);
      __delay_ms(100);
      /*
      if(RCIF)
      {
          RC3 = 1;
           a = uart_lees();
          
          
      }
      else
      {
          RC3 = 0;
         
      }
        
      if(a ==49)
      {
          RC4 == 1;
          
          
      }*/
    

    
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