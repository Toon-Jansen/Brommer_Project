
#include <xc.h>
#include <pic16f886.h>

#include "hooftcode/header/FUNKSIES_heade.h"

#define _XTAL_FREQ 1000000

typedef unsigned char bool;
#define true    1
#define false   0

//inisialisatsie////////////////////////////////////////////////////////////////
void init_Alarmboard(void)
{
    // zet klok
    init_clk(2);
    //druknoppern
    TRISA1 = 1; //zet input (is slot knop)
    TRISA2 = 1; //zet input

    ANS1 = 0; // zet op digital input
    ANS2 = 0; // zet op digital input
    
    //solinoide
    TRISB2 = 0; //zet als output
    
    //bromer moterr meganisme
    TRISC5 = 1; //zet input
    TRISC2 = 0; //zet output    
    
    //hbrug
    
    TRISA0 = 0; //zet output
    TRISA3 = 0; //zet output
    TRISA4 = 0; //zet output
    
    I2C_Initialize(2500);
    config_Ac();
}
////////////////////////////////////////////////////////////////////////////////

//kijken of de brommer beweegt /////////////////////////////////////////////////
bool beweeg(void){
    bool detect = false;
    unsigned int waarde[5] = {0,0,0,0,0};
    unsigned int hoog = 0,buf = 0,laag = 0;
    for(int i = 0; i < 5; i++)
    {
        waarde[i] = lees();
        __delay_ms(1000);
    }
    hoog = waarde[0];
    laag = waarde[1];
    if(hoog < laag){
        buf = hoog;
        hoog = laag;
        laag = buf;
    }
    for(int i = 0; i < 5; i++)
    {
        if(waarde[i] < laag)
        {
            laag = waarde[i];
        }
        if(waarde[i] > hoog){
            hoog = waarde[i];
        }
    }
    buf = hoog - laag;
    if(buf > 600)
    {
        detect = true;
    }
    return detect;
}
////////////////////////////////////////////////////////////////////////////////
//kijk of keykart in de buurt is////////////////////////////////////////////////
int keykard(void)
{
    //moet "1" stuuren waneer inbeweging en een "0" waaneer stilstaat
    
    // debie das aan u
    return 1;
}
////////////////////////////////////////////////////////////////////////////////

//zet slot op //////////////////////////////////////////////////////////////////
void SLOT_op(void)
{
     RC2 = 1;
    PORTB = 0b000000100;
    __delay_ms(500);
    while(RA1 == 0)
    {
        RA0 = 1;
        __delay_us(200);
        RA0 = 0;
        __delay_us(600); 
    }
    __delay_ms(500);
    PORTA = 0x00;
    PORTB = 0;
}
////////////////////////////////////////////////////////////////////////////////

//zet slot af //////////////////////////////////////////////////////////////////
void SLOT_aff(void)
{
    RC2 = 0;
       PORTB = 0b000000100;
    __delay_ms(500);
    while(RA1 == 1)
    {
         PORTA = 0b00010001;
        __delay_us(200);
        PORTA = 0b00010000;
        __delay_us(600); 
    }
    __delay_ms(500);
    PORTB = 0;
    
}
////////////////////////////////////////////////////////////////////////////////
//alarm/////////////////////////////////////////////////////////////////////////
void init_alarm(void){
    TRISB4 = 0;
    TRISB5 = 0;
    RB4 = 0;
    RB5 = 0;
}
////////////////////////////////////////////////////////////////////////////////
void alarm(short s){
    RB4 = 0;
    RB5 = 0;
    if(s == 1){
        for(short j = 0; j < 3; j++){
            for(short i = 301; i>0; i--){
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
    }
    if(s == 2){
        for(short j = 0; j < 3; j++){
            for(short i = 1101; i>0; i--){
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
}
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
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