/* ---------------------------------------------------------------------------
** init_lib.c
** Useful intilization helper functions
**
** Author: Navid Shahrestani
** -------------------------------------------------------------------------*/

#include  <msp430g2553.h>


/* ---------------------------------------------------------------------------
** init_watchdog
** 		Inputs  : None
**		Returns : Void
**		Description : Disables watchdog timer (will add settin watchdog timer later)
** -------------------------------------------------------------------------*/

void init_watchdog(void){
	WDTCTL = WDTPW + WDTHOLD;               // Stop watchdog timer                              
}
/* ---------------------------------------------------------------------------
** init_leds
** 		Inputs  : None
**		Returns : Void
**		Description : Configures LED0 and LED1 as outputs on launchpad
** -------------------------------------------------------------------------*/

void init_leds(void){                         
   
    P1DIR |= 0x41;                          // Set LED0 and LED1 to output
}
/* ---------------------------------------------------------------------------
** init_pushbutton
** 		Inputs  : None
**		Returns : Void
**		Description : Configures pushbutton as input on launchpad
** -------------------------------------------------------------------------*/

void init_pushbutton(void){                          
 	P1DIR &= 0xF7;                          // Set pushbutton as input 
}
/* ---------------------------------------------------------------------------
** init_uart
** 		Inputs  : Baud rate
				  Num of start bits
				  Num end bits
				  parity( 0 = No parity, 1 = Even, 2 = Odd)
**		Returns : Void
**		Description : Configures UART on launchpad
** -------------------------------------------------------------------------*/
void init_uart(baud_rate,start_bits,end_bits,parity){                          
 	
	UCA0CTL0 |= UCSWRST;	//Software reset enable

	

	UCA0CTL0 |= UCSWRST;	//Software reset disable



}