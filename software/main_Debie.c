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
  
  init_uart(1000000);

  do
  {
    uart_schrijf(0b01010101);
    __delay_ms(100);
  }while(1);
}