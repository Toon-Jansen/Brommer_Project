//configuratsie/////////////////////////////////////////////////////////////////
#pragma config FOSC = XT        // Oscillator Selection bits (HS oscillator: High-speed crystal/resonator on RA6/OSC2/CLKOUT and RA7/OSC1/CLKIN)
#pragma config WDTE = OFF       // Watchdog Timer Enable bit (WDT disabled and can be enabled by SWDTEN bit of the WDTCON register)
#pragma config PWRTE = ON      // Power-up Timer Enable bit (PWRT disabled)
#pragma config MCLRE = ON       // RE3/MCLR pin function select bit (RE3/MCLR pin function is MCLR)
#pragma config CP = OFF         // Code Protection bit (Program memory code protection is disabled)
#pragma config CPD = OFF        // Data Code Protection bit (Data memory code protection is disabled)
#pragma config BOREN = ON       // Brown Out Reset Selection bits (BOR enabled)
#pragma config IESO = ON        // Internal External Switchover bit (Internal/External Switchover mode is enabled)
#pragma config FCMEN = ON       // Fail-Safe Clock Monitor Enabled bit (Fail-Safe Clock Monitor is enabled)
#pragma config LVP = ON         // Low Voltage Programming Enable bit (RB3/PGM pin has PGM function, low voltage programming enabled)

// CONFIG2
#pragma config BOR4V = BOR21V   // Brown-out Reset Selection bit (Brown-out Reset set to 2.1V)
#pragma config WRT = OFF        // Flash Program Memory Self Write Enable bits (Write protection off)
////////////////////////////////////////////////////////////////////////////////

//clok snelhijd/////////////////////////////////////////////////////////////////
#define _XTAL_FREQ 1000000
////////////////////////////////////////////////////////////////////////////////

//funksie benamingen////////////////////////////////////////////////////////////
typedef unsigned char bool;
#define true    1
#define false   0

void init_Alarmboard(void); //inisializeert de pinnen, klok,exetra
bool beweeg(void);/////////////////////////////////////////////////////////////////////////////////////////////////////
int keykard(void);//////////////////////////////////////////////////////////////////////////////////////////////////////
void SLOT_op(void);//hbrug werkt moet enkel nog meer getestworden
void SLOT_aff(void);
void init_alarm(void);
void alarm(short);
void I2C_initialize(const unsigned long);
void I2C_Hold(void);
void I2C_Begin(void);
void I2C_Write(unsigned);
unsigned short I2C_Read(unsigned short);
void config_AC(void);
unsigned int lees(void);
////////////////////////////////////////////////////////////////////////////////