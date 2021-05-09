#include <xc.h>²
/*  regels funksie.h:
 * 
 * 
 *!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
 *  -   WANEER TOEVOEGEN FUNKSIE ALTIJT:
 *      1) VERWIJDER DIT BESTANT FUNKSIES.H UIT PROJECT
 *      2) GA NAAR GITUP EN KOPJEER FUNKSIES.H NAAR JE PROJECT
 *      3) VOEG FUNKSIE TOE
 *      4) COPJEER FUNKSIES.H NAAR GITHUP EN UPLOWD DA
 *!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
 * 
 * 
 * 
 *  -   enkel funksies inzetten die voledig werken (maaken van funksies gebeurt 
 *      in testfunksies_debie.h of testfunksies_toon.h
 *  -   wie een wie zorgt voor een eror in FUNKSIES.H moet de andere fristie 
 *      trakteeren
 *  -   beschrijf de stappen van uw funksie en houw het ordelijk
 *  -   waneer een funksie af is zet men de naam van de funksie met korte 
 *      beschrijving in de funksie lookuptabel
 *  -   max lente regel is tot de rode lijn 
 *  -   bij anpasen van een funksie meld de andere  
 */

/*  funksie lookup tabel: 
 *  -   init_clk(int) :inisializeert vlok op intern 31 of 250khz of extern 1Mhz
 *  -   interup_off() :zet alle interupts af  
 *  -   interupt_poort_B_op(int) :zet de interupt van megegeven pin op poort B
 *  -   interupt_poort_B_aff(int) :zet interupt af van megegeven pin bij 8 
 *      allepine van poort B
 *  -   zet_timer1_op() :zet timer1 op + overflow interupt
 *  -   zet_timer1_aff() :zet timer1 af
 *  -   interupt_Handler() : is van bij welke interupt hem wat moet doe : deze 
 *      moet nog aan gevult worden als ge een interupt hebt!!
 */

void init_clk(int Frek)
{
    switch(Frek) {
    //zet klok interneklok 32khz////////////////////////////////////////////////
    case 0:
        //zet interne osilator op31kHz
        IRCF0 = 0;
        IRCF1 = 0;
        IRCF2 = 0;
         
        OSTS = 0; // run van inwendige osilator
        HTS = 1; //zet HFinitOSc stabiel
        LTS = 1; //zet LFinitOSc stabiel
        SCS = 1; //zet inwendige osilator als sisteem osilator
    break;
    ////////////////////////////////////////////////////////////////////////////
    
    //zet interne klok 250Mhz///////////////////////////////////////////////////
    case 1:
        //zet interne osilator op250kHz
        IRCF0 = 0;
        IRCF1 = 1;
        IRCF2 = 0;
         
        OSTS = 1; // run van externe osilator
        HTS = 1; //zet HFinitOSc stabiel
        LTS = 1; //zet LFinitOSc stabiel
        SCS = 0; //zet externe osilator als sisteem osilator
        
    break;
    ////////////////////////////////////////////////////////////////////////////
    
    //zet externe klok 1Mhz/////////////////////////////////////////////////////
    case 2: //ben niet zeker dat deze al goet werkt
        //zet interne osilator op1MkHz
        IRCF0 = 1;
        IRCF1 = 0;
        IRCF2 = 0;
         
        OSTS = 0; // run van inwendige osilator
        HTS = 1; //zet HFinitOSc stabiel
        LTS = 1; //zet LFinitOSc stabiel
        SCS = 1; //zet inwendige osilator als sisteem osilator
    break;
    ////////////////////////////////////////////////////////////////////////////
    
    //zet interne klok 1Mhz/////////////////////////////////////////////////////
    case 3: //ben niet zeker dat deze al goet werkt
        IRCF0 = 1;
        IRCF1 = 0;
        IRCF2 = 0;
         
        OSTS = 1; // run van externe osilator
        HTS = 1; //zet HFinitOSc stabiel
        LTS = 1; //zet LFinitOSc stabiel
        SCS = 0; //zet externe osilator als sisteem osilator
    break;
    ////////////////////////////////////////////////////////////////////////////
    }
    
    
}

void interup_off(void)
{   
    //opzetten interupt volgens datacheet p31///////////////////////////////////
    IOCB = 0; //zet interupt van b register aff
    INTCON = 0; //zet alle interupts op
    PIE1 = 0; //dis abel alle Peripheral Interrup
    PIE2 = 0; ////dis abel alle Peripheral Interrup
    ////////////////////////////////////////////////////////////////////////////
}
void interupt_poort_B_op(int pin)
{
    switch(pin) {
        
    case 0:
        TRISB0 = 1; //maak pin Input
        IOCB0 = 1; //zet interupt van pin b6 op
    break;
    
    case 1:
        TRISB1 = 1; //maak pin Input
        IOCB1 = 1; //zet interupt van pin b6 op
    break;
    
    case 2:
        TRISB2 = 1; //maak pin Input
        IOCB2 = 1; //zet interupt van pin b6 op
    break;
    
    case 3:
        TRISB3 = 1; //maak pin Input
        IOCB3 = 1; //zet interupt van pin b6 op
    break;
    
    case 4:
        TRISB4 = 1; //maak pin Input
        IOCB4 = 1; //zet interupt van pin b6 op
    break;
    
    case 5:
        TRISB5 = 1; //maak pin Input
        IOCB5 = 1; //zet interupt van pin b6 op
    break;
    
    case 6:
        TRISB6 = 1; //maak pin Input
        IOCB6 = 1; //zet interupt van pin b6 op
    break;
    
    case 7:
        TRISB7 = 1; //maak pin Input
        IOCB7 = 1; //zet interupt van pin b6 op
    break;
  
    }
    RBIF = 0; //clear interupt flag poort B
        RBIE = 1; // enabel inetupts van poort B
        GIE = 1; // enabel interupts naar cpu
}
void interupt_poort_B_aff(int pin)
{
    switch(pin) {
        
    case 0:
        IOCB0 = 0; //zet interupt van pin b6 af
    break;
    
    case 1:
        IOCB1 = 0; //zet interupt van pin b6 af
    break;
    
    case 2:
        IOCB2 = 0; //zet interupt van pin b6 af
    break;
    
    case 3:
        IOCB3 = 0; //zet interupt van pin b6 af
    break;
    
    case 4:
        IOCB4 = 0; //zet interupt van pin b6 af
    break;
    
    case 5:
        IOCB5 = 0; //zet interupt van pin b6 af
    break;
    
    case 6:
        IOCB6 = 0; //zet interupt van pin b6 af
    break;
    
    case 7:
        IOCB7 = 0; //zet interupt van pin b6 af
    break;
  
    
    case 8:
        IOCB = 0; //zet alle interupten van poort b af
        RBIF = 0; //clear interupt flag poort B
        RBIE = 0; // disbel inetupts van poort B
        
    break;
    }
   
}
void zet_timer1_op(void)
{
    //opzetten timer////////////////////////////////////////////////////////////
    //T1CON rigister =  TIMER1 CONTROL REGISTER
    T1GINV = 0; //timer is high actif (als 1 overflow reset moet 1 zijn)
    TMR1GE = 1; //Timer1 Gate Enable 
    T1CKPS0 = 1; //zet prescaal valu op 8
    T1CKPS1 = 1; //  //
    T1OSCEN = 0; //zet low pas osilator off
    T1SYNC = 0; //timer 1 gebruikt enternal clok
    TMR1CS = 0; //seleksie welke externe pin ma wort geniggrt
    TMR1ON = 1; //zet timer 1 op
    ////////////////////////////////////////////////////////////////////////////
    
    // inter enabel/////////////////////////////////////////////////////////////
    GIE = 1; //enabelt alle interupts
    PEIE = 1; // enabels  peripheral interrupts
    TMR1IE = 1; //timer 1 overflow interupt
    PIR1 = 0; //(PIR1bits_t.TMR1IF is interupt vlag van de timer)
    ////////////////////////////////////////////////////////////////////////////
    
    // prescalen timer /////////////////////////////////////////////////////////
   TMR1H = 0xff; //eerste preescaler bits
    TMR1L = 0; // laatste prescaler bits
    ////////////////////////////////////////////////////////////////////////////
}
void zet_timer1_aff(void)
{
    //opzetten timer////////////////////////////////////////////////////////////
    //T1CON rigister =  TIMER1 CONTROL REGISTER
   
    TMR1GE = 0; //Timer1 Gate Enable 
    TMR1ON = 0; //zet timer 1 op
    ////////////////////////////////////////////////////////////////////////////
    
    // inter enabel/////////////////////////////////////////////////////////////
    TMR1IE = 0; //timer 1 overflow interupt
    TMR1IF = 0; //(PIR1bits_t.TMR1IF is interupt vlag van de timer)
    ////////////////////////////////////////////////////////////////////////////
    
    // prescalen timer /////////////////////////////////////////////////////////
    //TMR1H = 0; //eerste preescaler bits
    //TMR1L = 0; // laatste prescaler bits
    ////////////////////////////////////////////////////////////////////////////
}
void __interrupt() interupt_Handler(void)
{
   //directe interupts
    if(T0IF = 1) //timer0 overflow interupt
    {
        //plaats funksie xat er in dit geval gebeurt moet worden
        T0IF = 0;
    }
     if(INTF = 1) //bij externe interupt
    {
       //plaats funksie xat er in dit geval gebeurt moet worden
        INTF = 0;
    }
     if(RBIF = 1) //bij interupt van poort b 
    {
        // coor te weete wele pin raat ik aan om kreatief te zijn dus ui sukses!
         zet_timer1_op();
         SLEEP();

        //plaats funksie xat er in dit geval gebeurt moet worden
        RBIF = 0;
    }
    if(TMR1IF = 1) //interupt va timer
    {
        //plaats funksie xat er in dit geval gebeurt moet worden
        TMR1IF = 0;
        
    }
    
    ////////////////////////////////////////////////////////////////////////////
    // meer interupt redenen kan men trugvinden in het PERIPHERAL 
    //INTERRUPT rigister 1 en 2 (PIR1 en PIR2)
    ////////////////////////////////////////////////////////////////////////////
   
   
}
void init_uart(int freq)
{ 
    //berekenen bautrate ///////////////////////////////////////////////////////
    SPBRG = (freq - (9600*64))/(9600*64); //zet bautrate juist
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

int uart_lees(void) //NOTE kijk eers na dat er data is want anders gaat deze in 
                     //een loob
{
  while(RCIF == 0) //kijk of er lees dat ontvange is
  {
  }
  return RCREG; //return de geleze data
}
