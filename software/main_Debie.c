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
  TRISB0 = 0;//set
  TRISB1 = 0;//cs
    TRISB2 = 0;//cs
  
  init_uart(1000000);
  RB0 = 1;
    RB1 = 0;

  do
  {


     RB2 = 0;
    uart_schrijf(49);
              
    __delay_ms(100);
     RB2 = 1;
    __delay_ms(100);
      
  }while(1);
}