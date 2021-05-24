
#include "header_hooftbord.h"
#include "hooftcode/header/FUNKSIES_heade.h"
#include <xc.h>






void fuuking_schrijf(int data)
{
  while(TRMT == 0) //kijk dat de pic nog bezig is met verzende data
  {   
  }
  TXREG = data; //schrijf daata naar het rigister dat de data verstuurt
}
int fukking_lees(void)
{
  if(RCIF == 0) //kijk of er lees dat ontvange is
  {
      return 0;
  }
  else
  {
      int lees =0;
      while(RCIF ==1)
      {
          lees = RCREG;
      }
      return lees; //return de geleze data
  }
  
}
void main()
{ 
    TRISC3 = 0;
    //inuit uart
    //zet poorten
    init_clk(3);
    TRISB = 0;
    PORTB = 1;
    ANSEL = 0;
    ANSELH = 0;
    //zet opasingroon transmit op
    TXEN = 1;
    CREN = 1;
    SYNC = 0;
    SPEN = 1;
    //boutrate
    SPBRG = 25; //zet bautrate juist
    RC3 = 1;
    
    
  
    BRG16 = 1;//Enables Transmission   
    BRGH = 1;
       
    while(1)
    {
      //  fuuking_schrijf(84);
        if(fukking_lees()==84)
        {
            RC3 = 0;
        }
        __delay_ms(100);
        
    }
    return ;
}


