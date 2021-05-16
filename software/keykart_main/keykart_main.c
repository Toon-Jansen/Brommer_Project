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

#define _XTAL_FREQ 1000000
#include <xc.h>
#include "hooftcode/header/Debie_header.h"
#include "hooftcode/header/FUNKSIES_heade.h"
#include "hooftcode/header/Toon_header.h"
#include "hooftcode/header/configerasenbits_pic.h"
//making uart
int Wwoort[6] = {'D','E','B','T','O','N'};
int Wwoort_lente = 6;





void main()
{
  init_clk(3); 
  TRISB0 = 0;//set
  TRISB1 = 0;//cs
    
  
  init_uart(1000000);
  int data_O =0;  
  
  
 
  do
  {    
      PORTB = 1;//enabel cs en zet de setpin hoog
      __delay_us(100);
      for(int teller = 0; teller < 49; teller++)
      {
          if(RCIF == 1) //kijk of er lees dat ontvange is
          {
              data_O = RCREG;
              if(data_O == 'T')
              {
                 uart_schrijf('L');
                 data_O = 0;
                 __delay_ms(1000);
                 if(RCIF == 1 && RCREG == 'O')
                 {
                    data_O = 0;
                    for(int x = 0; x < Wwoort_lente; x++)
                    {
                         uart_schrijf(Wwoort[x]);
                    }
                     
                 }
  
              }
          }
          __delay_us(100);
      }
      PORTB = 3; //disabel cs en zet de setpin hoog
      __delay_ms(100);
    
   
    
  }while(1);
}