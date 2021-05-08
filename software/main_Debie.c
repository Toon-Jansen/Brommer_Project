#define _XTAL_FREQ 1000000
#include <xc.h>
#include "hooftcode/header/Debie_header.h"
#include "hooftcode/header/FUNKSIES_heade.h"
#include "hooftcode/header/Toon_header.h"
#include "hooftcode/header/configerasenbits_pic.h"
//making uart
void init_uart(void)
{ 
    //berekenen bautrate ///////////////////////////////////////////////////////
    SPBRG = (_XTAL_FREQ - 9600*64)/(9600*64); //zet bautrate juist
    SYNC = 0; //zet eusart op asinchroon
    SPEN = 1; //enabel de serieele poort
    TRISC7 = 1; //zet pin 7 van c poort(rx) in input
    TRISC6 = 0; //zet pin 6 van c poort(tx) in output
    CREN = 1; //eabel voorduurent recive
    TXEN = 1; //enabel vorduurent verzenden                                     //Enables Transmission                                       //Returns 0 to indicate UART initialization failed
}


void uart_schrijf(int data)
{
   
  while(TRMT == 0) //kijk dat de pic nog bezig is met verzende data
  {   
  }
  TXREG = data; //schrijf daata naar het rigister dat de data verstuurt
}


char uart_lees(void) //NOTE kijk eers na dat er data is want anders gaat deze in 
                     //een loob
{
  while(RCIF == 0) //kijk of er lees dat ontvange is
  {
  }
  return RCREG; //return de geleze data
}

void main()
{
  init_clk(3);  
  
  init_uart();

  do
  {
    uart_schrijf(5);
    __delay_ms(100);
  }while(1);
}