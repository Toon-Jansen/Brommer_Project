/*
#include "header_hooftbord.h"
#include "hooftcode/header/FUNKSIES_heade.h"
#include <xc.h>







void main()
{  
    //config klok
    init_clk(3);
    //rf config rf module
   
    init_uart(1000000);
    TRISB = 0;
    
   int data = 0;
   TRISC3 = 0;
   RC3 = 1;
    
  do
  { 
     PORTB = 1; 
      //keykart
     
     
      
      int a = uart_lees();
      
             __delay_ms(10);
             uart_schrijf(a);
             __delay_ms(10);
             
         
      
      
      //hooftbort
      /*
       uart_schrijf(84);
       __delay_ms(1000);
      if(RCIF == 1)
      {
         data = RCREG;
         if(data == 76)
         {
             __delay_ms(10);
            
             
         }
      }
       
          
  }while(1);
}


*/