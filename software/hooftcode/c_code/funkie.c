#include <xc.h>
#define _XTAL_FREQ 1000000
/*  regels funksie.h:
 * 
 * 
 *!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
 *  -   WANEER TOEVOEGEN FUNKSIE ALTIJT:
 *      1) VERWIJDER DIT BESTANT FUNKSIES.H UIT PROJECT
 *      2) GA NAAR GITUP EN KOPJEER FUNKSIES.H NAAR JE PROJECT
 *      3) VOEG FUNCTIE TOE
 *      4) KOPIEER FUNKSIES.H NAAR GITHUP EN UPLOWD DEZE
 *!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
 * 
 * 
 * 
 *  -   enkel funksies inzetten die voledig werken (maaken van funksies gebeurt 
 *      in testfunksies_debie.h of testfunksies_toon.h
 *
 *  -   wie een wie zorgt voor een eror in FUNKSIES.H moet de andere fristie 
 *      trakteeren
 * 
 *  -   Beloftes die gemaakt zijn tijden momenten van wanhopigheid moeten
 *      nageleefd worden.
 
 *  -   beschrijf de stappen van uw funksie en houw het ordelijk
 *
 *  -   waneer een funksie af is zet men de naam van de funksie met korte 
 *      beschrijving in de funksie lookuptabel
 *  -   max lente regel is tot de rode lijn 
 *
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
         
           
        OSTS = 0; // run van externe osilator
        HTS = 1; //zet HFinitOSc stabiel
        LTS = 1; //zet LFinitOSc stabiel
        SCS = 1; //zet externe osilator als sisteem osilator
    break;
    ////////////////////////////////////////////////////////////////////////////
    
    //zet interne klok 250Mhz///////////////////////////////////////////////////
    case 1:
        //zet interne osilator op250kHz
        IRCF0 = 0;
        IRCF1 = 1;
        IRCF2 = 0;
         
          OSTS = 0; // run van externe osilator
        HTS = 1; //zet HFinitOSc stabiel
        LTS = 1; //zet LFinitOSc stabiel
        SCS = 1; //zet externe osilator als sisteem osilator
        
    break;
    ////////////////////////////////////////////////////////////////////////////
    
    //zet externe klok 1Mhz/////////////////////////////////////////////////////
    case 2:
        //zet interne osilator op1MkHz
        IRCF0 = 0;
        IRCF1 = 0;
        IRCF2 = 1;
         
        OSTS = 1; // run van inwendige osilator
        HTS = 1; //zet HFinitOSc stabiel
        LTS = 0; //zet LFinitOSc stabiel
        SCS = 0; //zet inwendige osilator als sisteem osilator
    break;
    ////////////////////////////////////////////////////////////////////////////
    
    //zet interne klok 1Mhz/////////////////////////////////////////////////////
    case 3: //ben niet zeker dat deze al goet werkt
        IRCF0 = 0;
        IRCF1 = 0;
        IRCF2 = 1;
         
        OSTS = 0; // run van externe osilator
        HTS = 1; //zet HFinitOSc stabiel
        LTS = 1; //zet LFinitOSc stabiel
        SCS = 1; //zet externe osilator als sisteem osilator
    break;
    ////////////////////////////////////////////////////////////////////////////
    
    //zet interne klok 1Mhz/////////////////////////////////////////////////////
    case 4: //ben niet zeker dat deze al goet werkt
        IRCF0 = 0;
        IRCF1 = 0;
        IRCF2 = 1;
         
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
       //plaats functie dat in dit geval moet gebeuren
        INTF = 0;
    }
     if(RBIF = 1) //bij interupt van poort b 
    {
        // voor de tweede wele pin raad ik aan om creatief te zijn dus ueh succes!
         zet_timer1_op();
         SLEEP();

        //plaats functie dat in dit geval moet gebeuren
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

void I2C_Initialize(const unsigned long feq_K) //Begin I2C com als Master
{
  TRISC3 = 1;  TRISC4 = 1;  //Maak RC3 en RC4, SDA en SCL, input pins
  TRISC0 = 1; //interrupt pin 

  SSPCON  = 0b00101000;    //enable serial port en gebruik SDA & SCL
                           //master mode speed = FOSC/(4*(SSPADD+1))
  SSPCON2 = 0b00000000;    //Idle mode aanzetten 

  SSPADD = (_XTAL_FREQ/(4*feq_K*100))-1; //user bepaalde snelheid van I2C bus
  SSPSTAT = 0b00000000;    //Info van de bus leegmaken
}

void I2C_Hold()
{
    while (   (SSPCON2 & 0b00011111)    ||    (SSPSTAT & 0b00000100)   ) ; 
                           //check dat de I2C bus niet langer in gebruik is
}

void I2C_Begin()
{
  I2C_Hold();  //Wacht tot bus beschikbaar is
  SEN = 1;     //Stuur start conditie
}

void I2C_End()
{
  I2C_Hold(); //Wacht tot bus beschikbaar is
  PEN = 1;    //Stuur stop conditie
}

void I2C_Write(unsigned data)
{
  I2C_Hold(); //Wacht tot bus beschikbaar is
  SSPBUF = data;         //stuur data in buffer op I2C bus
}

unsigned short I2C_Read(unsigned short ack)
{
  unsigned short incoming; //var voor aangekregen data
  I2C_Hold(); //Wacht tot bus beschikbaar is
  RCEN = 1;   //Klaar zetten voor data te ontvangen

  I2C_Hold(); //Wacht tot bus beschikbaar is
  incoming = SSPBUF;      //zet aangekregen data van buffer naar var

  I2C_Hold(); //Wacht tot bus beschikbaar is
  ACKDT = (ack)?0:1;    //check if ack bit received 
  ACKEN = 1;          //lees Ack bit in

  return incoming; //stuur aagekregen data terug
}

void config_Ac(void){
    I2C_Begin();
    I2C_Write(0xD0); //Schrijf adres van accel (68+R/not(W))
    I2C_Write(0x6B); //power mngmt 1
    I2C_Write(0x80); //Voer reset uit
    I2C_End();
    __delay_ms(100);
    I2C_Begin();
    I2C_Write(0xD0);
    I2C_Write(0x68); //sig reset register
    I2C_Write(0x07); //reset meters
    I2C_End();
    __delay_ms(100);
    I2C_Begin();
    I2C_Write(0xD0);
    I2C_Write(0x6B); //open power mngmt 1 opnieuw
    I2C_Write(0x2D); //zet lowpowermode aan en gebruikt ext 19.2MHz
    I2C_Write(0x47); //(schrijft door naar 6C) 5Hz wake up cycle en gyro standby
    I2C_End();
    I2C_Begin();
    I2C_Write(0xD0);
    I2C_Write(0xB7); //interrupt config register
    I2C_Write(0x30); //zorg dat interrupt pin hoog blijft tot ik reg lees
    I2C_Write(0x01); //genereer int als data klaar staat
    I2C_End();
    I2C_Begin();
    I2C_Write(0xD0);
    I2C_Write(0x1C); //configure accelerometer
    I2C_Write(0x00); //selecteer scale van +-16g
    I2C_End();
}

unsigned int lees(void){
    signed char I2C_DH = 0; //var voor de ontvangen data in High reg
    unsigned char I2C_DL = 0; //var voor de ontvangen data in Low reg
    unsigned int rek = 0;
    unsigned char ref = 0xff;
    unsigned int tot = 0;//var voor de totale waarde van accel
    I2C_Begin();
    I2C_Write(0xD0);
    I2C_Write(0x3D);
    I2C_Begin();
    I2C_Write(0xD1);
    I2C_DH = I2C_Read(1);
    I2C_DL = I2C_Read(0);
    I2C_End();
    for(int i = 0; i < 4; i++){
        //while(RC0 == 1); //wacht tot data klaar staat om gelezen te worden
        I2C_Begin();
        I2C_Write(0xD0);
        I2C_Write(0x3D);
        I2C_Begin();
        I2C_Write(0xD1);
        I2C_DH = I2C_Read(1);
        I2C_DL = I2C_Read(0);
        I2C_End();
        if(I2C_DH < 0){
            I2C_DH = ref - I2C_DH;
            I2C_DH += 1;
        }
        rek = I2C_DH;
        rek = rek<<8;
        rek = rek | I2C_DL;
        rek = rek>>2;
        tot += rek;
        rek = 0;
    }
    return tot;
    }

void init_alarm(void){
    TRISB4 = 0;
    TRISB5 = 0;
    RB4 = 0;
    RB5 = 0;
}
void alarm(int s){
    int i;
    TRISB = 0x00;
    RB4 = 0;
    RB5 = 0;
    if(s == 1){
        //for(j = 3; j>0; j--) ma die telt nie af!!!!!
        i = 301;
        while(i>0)
        {
            i = i - 1;
            RB5 = 0;
            __delay_us(1);
            RB4 = 1;
            __delay_us(249);
            RB4 = 0;
            __delay_us(1);
            RB5 = 1;
            __delay_us(249);
            RB5 = 0;
        }
        __delay_ms(175);
    }
    if(s == 2){
        i = 1101;
            while(i>0)
            {
                i = i - 1;
                RB5 = 0;
                __delay_us(1);
                RB4 = 1;
                __delay_us(249);
                RB4 = 0;
                __delay_us(1);
                RB5 = 1;
                __delay_us(249);
                RB5 = 0;
            }
            __delay_ms(550);
        }
}

void init_uart(int freq)
{ 
    //berekenen bautrate ///////////////////////////////////////////////////////
    SPBRG = 25; //zet bautrate juist
    SYNC = 0; //zet eusart op asinchroon
    SPEN = 1; //enabel de serieele poort
    TRISC7 = 1; //zet pin 7 van c poort(rx) in input
    TRISC6 = 0; //zet pin 6 van c poort(tx) in output
    CREN = 1; //eabel voorduurent recive
    TXEN = 1; //enabel vorduurent verzenden    
    BRG16 = 1;//Enables Transmission   
    BRGH = 1;//Returns 0 to indicate UART initialization failed
    
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
