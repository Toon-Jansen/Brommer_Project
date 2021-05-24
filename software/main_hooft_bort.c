/*
 * File:   main_hooft_bort.c
 * Author: Lauren Debie en Toon Jansen 
 *
 * Created: once upon a time
 */

#include "header_hooftbord.h"
#include <xc.h>
#include "hooftcode/header/FUNKSIES_heade.h"


//maak nog slot open interupt
void main(void) 
{
    
   ///variabele main////////////////////////////////////////////////////////////
    int Tijd_brommer_af1 = 0;
    int Tijd_brommer_af2 = 0;
   

    ////////////////////////////////////////////////////////////////////////////
    //RC2 = RA1;
    
    //inisialisatsie ///////////////////////////////////////////////////////////
    init_Alarmboard();

    ////////////////////////////////////////////////////////////////////////////
    while(1)
    {
        if(RA0 == 1) //kijk of slutel inzet
        {
            SLOT_aff();
            while(RA0 == 1)
            {
                
            }
        }
        else
        {
           while(RA0 == 0)
            {
               if(RC5 == 1)
               {
                  if(RA1 == 1)
                   {
                       //moter staat op en sleutel af
                       while(RA1 == 1)
                       {
                           
                            PORTA = PORTA | 0b00001000;
                            alarm(2);
                       }
                       PORTA = PORTA & 0b11110111;
                       
                   }
               }
               //moter staat af en sleutel af
               else
               {
                   if(RA1 == 1)//slot op
                   {
                       if(beweeg() == 1)
                       {
                            if(RA2 == 1)//ja
                            {
                                SLOT_aff();
                            }
                            else
                            {
                                for(int x = 0; x<4; x++)
                                {
                                    alarm(2);
                                }
                               
                            }

                     }
                      
                       
                   }
                   else//slot af
                   {
                       //kijk keykrt
                       if(RA2 == 1)//ja
                       {
                           __delay_ms(5000);
                       }
                       else
                       {
                           SLOT_op();
                       }
                           
                   }
                  
                       
                       
                   
                   
                   
               }
                
            }
        }
        
    }
    
     
    return;
}
