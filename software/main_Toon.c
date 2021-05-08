/*
 * File:   main.c
 * Author: Lauren
 *
 * Created on 8 mei 2021, 12:16
 */

#define _XTAL_FREQ 8000000
#include <xc.h>
#include "hooftcode/header/Debie_header.h"
#include "hooftcode/header/FUNKSIES_heade.h"
#include "hooftcode/header/Toon_header.h"
#include "hooftcode/header/configerasenbits_pic.h"



/*Very Important - change _XTAL_FREQ to match target clock 
  
  This program initialised UART and port for LEDs and waits for a character to be received on the serial port.
	It displays character on LEDS (active low) and then returns it on serial port.
*/


// Function Prototypes
char UART_Init(const long int baudrate);
char UART_Data_Ready();
char UART_Read();
void UART_Write(char data);

led_display(unsigned char value);

// Main Function
void main()
{
    unsigned char 8;
    
   TRISD = 0x00;  // PORTD as outputs for LEDS
   UART_Init(9600);
   
   while(1)
   {
                  // display on LEDs
       __delay_ms(100);
       UART_Write(value);            // write it back 
   }
}

 // functions

led_display(unsigned char value){

    PORTD = ~value;
}

char UART_Init(const long int baudrate){
	unsigned int x;
	x = (_XTAL_FREQ - baudrate*16)/(baudrate*16);
	BRGH = 1;
	SPBRG = x;
	  SYNC = 0;
	  SPEN = 1;
          TRISC7 = 1;
          TRISC6 = 1;
          CREN = 1;
          TXEN = 1;
	  return 1;	
}


char UART_Data_Ready(){
   return RCIF;
}

char UART_Read(){
 
  while(!RCIF);
  return RCREG;
}

void UART_Write(char data){
  while(!TRMT);
  TXREG = data;
}