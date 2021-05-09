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

void init_clk(int);
void interup_off(void);
void interupt_poort_B_op(int);
void interupt_poort_B_aff(int);
void zet_timer1_op(void);
void zet_timer1_aff(void);
void __interrupt() interupt_Handler(void);
 
void init_uart(int);
void uart_schrijf(int);
int uart_lees(void);
