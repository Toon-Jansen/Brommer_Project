/*
 * File:   main_hooft_bort.c
 * Author: Lauren Debie en Toon Jansen 
 *
 * Created: once upon a time
 */
/*
#include "header_hooftbord.h"
#include <xc.h>
//maak nog slot open interupt
void main(void) 
{
    
   ///variabele main////////////////////////////////////////////////////////////
    int Tijd_brommer_af1 = 0;
    int Tijd_brommer_af2 = 0;
    int sleutel = 1;
    ////////////////////////////////////////////////////////////////////////////
    //RC2 = RA1;
    
    //inisialisatsie ///////////////////////////////////////////////////////////
    init_Alarmboard();
    ////////////////////////////////////////////////////////////////////////////
    while(1)
    {
        if(sleutel == 1) //kijk of slutel inzet
        {
            SLOT_aff();
            while(sleutel == 1)
            {
                
            }
            
        }
        else
        {
            //kijk brommer staat af
            if(RC5 == 0) 
            {
                //zo ja kijk dat de bromer al een tijt stilstaat
                if(Tijd_brommer_af1 == 0 && Tijd_brommer_af2 == 0) //kijk sataat de bromer al 10sec stil
                {
                    //zo ja kijk of slot op staat
                    if(RA1 == 0)
                    {
                        //kijk of keykart in de buurt is
                        if(keykard() == 1){SLOT_aff();}//zo ja zet slot af
                       else
                       {
                            if(beweging() == 1)
                            {
                                alarm();

                            }
                       }

                    }

                    else
                    {
                        //zo nee kijk of key-kart in de buurt is
                        if(keykard() == 1);
                        else{ SLOT_op();}// zo nee zet slot op

                    }


                }
                else
                {
                    //zo nee kijk of de brommer stilstaat
                    if(beweging() ==1);//kijk staat de brommer stil
                    else 
                    {
                        Tijd_brommer_af1 = Tijd_brommer_af1 -1;
                        if(Tijd_brommer_af1 == 0)
                        {
                            Tijd_brommer_af1 = 255;
                           Tijd_brommer_af2 = Tijd_brommer_af2 -1;
                        }
                    }
                }

            }

            else
            {
                Tijd_brommer_af1 = 255;
                Tijd_brommer_af1 = 40;
                __delay_ms(1); //wacht een seconde
            }

        }
    }
    
     
    return;
}
*/