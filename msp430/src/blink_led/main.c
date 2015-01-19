/* ---------------------------------------------------------------------------
** main.c
** <file description>
**
** Author: Navid Shahrestani
** -------------------------------------------------------------------------*/

#include  <msp430g2553.h>

#define BUTTON  0x08


int main (void){
    
        WDTCTL = WDTPW + WDTHOLD;               // Stop watchdog timer                              
        P1DIR |= 0x41;                          // Set LED0 and LED1 to output
        P1DIR &= 0xF7;                          // Set pushbutton as input 
  
        while(1){
                if ((P1IN & BUTTON) == BUTTON){
                        P1OUT |= 0x01;                  // LED0 on
                        P1OUT &= 0xBF;                  // LED1 off
                }
                else{
                        P1OUT &= 0xFE;                  // LED0 off
                        P1OUT |= 0x40;                  // LED on
                }        
        }
        return 0;
}

