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
/**//*
#include "hooftcode/header/configerasenbits_pic.h"
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
{  init_pinout();
   
    init_clk(3);
    TRISC3 = 0;
    init_uart(1000000);
    TRISB = 0;
    PORTB = 1;
    RC3 = 1;
    
  do
  { /*
     //key-kart
     PORTB = 1;
      for(int x=0; x<1000; x++)
      {
          if(uart_kut() == 84)
          {
              for(long y =0; y< 10000;y++)
              {
                  uart_schrijf(76);
              }
           }
              
                  
              __delay_us(1);
        }
      
          
      
      PORTB = 3;
      __delay_ms(50);    */
     //hooft bort
  /*   for(int x =0; x<10;x++)
      {
        uart_schrijf(84);
        

          
      }
      for(int y = 0; y< 50; y++)
      {
          
          if(uart_kut() == 76)
          {
              RC3 = 0;
          }
            __delay_us(100); 
      }
   
      
       
      
  }while(1);
}
int uart_kut(void) //NOTE kijk eers na dat er data is want anders gaat deze in 
                     //een loob
{
 
  if(RCIF == 0) //kijk of er lees dat ontvange is
  {
      return 0;
  }
  else
  {
      
      return RCREG; //return de geleze data
  }
  
}

*/