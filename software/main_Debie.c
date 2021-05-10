#define _XTAL_FREQ 1000000
#include <xc.h>
#include "hooftcode/header/Debie_header.h"
#include "hooftcode/header/FUNKSIES_heade.h"
#include "hooftcode/header/Toon_header.h"
#include "hooftcode/header/configerasenbits_pic.h"
//making uart







void main()
{
  init_clk(3); 
  TRISB0 = 0;
  
  init_uart(1000000);
  RB0 = 0;

  do
  {
      if(uart_lees() == 0x31)
      {
          
              RB0 = 1;
              __delay_ms(1000);
              RB0 = 0;
              __delay_ms(1000);
              RB0 = 1;
              __delay_ms(1000);
              RB0 = 0;
              __delay_ms(1000);
              
              
          
          
      }
  }while(1);
}