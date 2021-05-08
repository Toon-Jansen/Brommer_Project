/*  regels functie.h:
 * 
 * 
 *!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
 *  -   WANNEER TOEVOEGEN FUNCTIE ALTIJD:
 *      1) VERWIJDER DIT BESTAND FUNCTIES.H UIT PROJECT
 *      2) GA NAAR GITHUB EN KOPIEER FUNKSIES.H NAAR JE PROJECT
 *      3) VOEG FUNCTIE TOE
 *      4) KOPIEER FUNKSIES.H NAAR GITHUB EN UPLOAD DEZE
 *!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
 * 
 * 
 * 
 *  -   Enkel functies inzetten die volledig werken (maken van functies gebeurt 
 *      in testfunksies_debie.h of testfunksies_toon.h
 *  -   Wie zorgt voor een eror in FUNKSIES.H moet de andere fristie 
 *      trakteren
 *  -   beschrijf de stappen van uw functie en hou het ordelijk
 *  -   waneer een functie af is zet men de naam van de functie met korte 
 *      beschrijving in de functie lookup-tabel
 *  -   max lente regel is tot de rode lijn 
 *  -   bij aanpasen van een functie meld aan de andere  
 */

/*  functie lookup-tabel: 
 *  -   init_clk(int) :initializeer klok op intern 31 of 250khz of extern 1Mhz
 *  -   interup_off() :zet alle interrupts af  
 *  -   interupt_poort_B_op(int) :zet de interrupt van meegegeven pin op poort B
 *  -   interupt_poort_B_aff(int) :zet interrupt af van meegegeven pin bij 8 
 *      alle pins van poort B
 *  -   zet_timer1_op() :zet timer1 op + overflow interrupt
 *  -   zet_timer1_aff() :zet timer1 af
 *  -   interupt_Handler() : is van bij welke interupt hem wat moet doe : deze 
 *      moet nog aan gevuld worden als er een interrupt is!!
 */

void init_clk(int);
void interup_off(void);
void interupt_poort_B_op(int);
void interupt_poort_B_aff(int);
void zet_timer1_op(void);
void zet_timer1_aff(void);
void __interrupt() interupt_Handler(void);
 