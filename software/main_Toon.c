/*
 * File:   main_Toon.c
 * Author: Toon
 *
 * Created on 8 mei 2021, 12:16
 */

#define _XTAL_FREQ 1000000
#include <xc.h>
#include "hooftcode/header/Toon_header.h"
#include "hooftcode/header/Debie_header.h"
#include "hooftcode/header/FUNKSIES_heade.h"
#include "hooftcode/header/configerasenbits_pic.h"

void I2C_Initialize(const unsigned long feq_K) //Begin IIC as master
{
  TRISC3 = 1;  TRISC4 = 1;  //Set SDA and SCL pins as input pins

  SSPCON  = 0b00101000;    //pg84/234
  SSPCON2 = 0b00000000;    //pg85/234

  SSPADD = (_XTAL_FREQ/(4*feq_K*100))-1; //Setting Clock Speed pg99/234
  SSPSTAT = 0b00000000;    //pg83/234
}

void I2C_Hold()
{
    while (   (SSPCON2 & 0b00011111)    ||    (SSPSTAT & 0b00000100)   ) ; //check the this on registers to make sure the IIC is not in progress
}

void I2C_Begin()
{
  I2C_Hold();  //Hold the program is I2C is busy 
  SEN = 1;     //Begin IIC pg85/234
}
void I2C_End()
{
  I2C_Hold(); //Hold the program is I2C is busy 
  PEN = 1;    //End IIC pg85/234
}

void I2C_Write(unsigned data)
{
  I2C_Hold(); //Hold the program is I2C is busy
  SSPBUF = data;         //pg82/234
}

unsigned short I2C_Read(unsigned short ack)
{
  unsigned short incoming;
  I2C_Hold();
  RCEN = 1;

  I2C_Hold();
  incoming = SSPBUF;      //get the data saved in SSPBUF

  I2C_Hold();
  ACKDT = (ack)?0:1;    //check if ack bit received 
  ACKEN = 1;          //pg 85/234

  return incoming;
}
void config_Ac(void){
    I2C_Begin();
    I2C_Write(0xD0); //Schrijf adres van accel
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
    I2C_Write(0x37); //interrupt config register
    I2C_Write(0x20); //zorg dat interrupt pin hoog blijft tot ik int reg lees
    I2C_Write(0x01); //genereer int als data klaar staat
    I2C_End();
    I2C_Begin();
    I2C_Write(0xD0);
    I2C_Write(0x1C); //configure accelerometer
    I2C_Write(0x18); //selecteer scale van +-16g
    I2C_End();
}
void main(void) 
{
    init_clk(4);
    TRISB0 = 0;
    I2C_Initialize(2500); //Initialiseer I2C Master met 95KHz clock
    unsigned short I2C_D = 0; //var voor de ontvangen data
    config_Ac();
    

while(1)
  {
   /*I2C_Begin(); //I2C startconditie op SDA zetten
   I2C_Write(0xD0); //Adres slave = 1101 000x (0xDx) met R/not(W)
   I2C_Write(0x6B); //Adres in slave 6B = power con register 1
   I2C_Begin(); //Opnieuw start zodat pointer juist staat voor lezen
   I2C_Write(0xD1); //Slave adres met read
   I2C_D = I2C_Read(0); //lees data en NACK zodat slave geen data meer zend
   I2C_End();
   I2C_Begin();
   I2C_Write(I2C_D);
   I2C_End(); //I2C stopconditie op SDA zetten
   if(I2C_D == 0x40)
   {
       RB0 = 1;
   }else
   {
       RB0 = 0;
   }
    */
    I2C_Begin();
    I2C_Write(0xD0);
    I2C_Write(0x3F);
    I2C_Begin();
    I2C_Write(0xD1);
    I2C_Read(1);
    I2C_Read(0);
    I2C_End();
   __delay_ms(1000);

}
}