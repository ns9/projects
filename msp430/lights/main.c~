/* ---------------------------------------------------------------------------
** main.c
** <file description>
**
** Author: Navid Shahrestani
** -------------------------------------------------------------------------*/

#include  <stdio.h>

#include  <msp430g2553.h>


int main (void){
    
        WDTCTL = WDTPW + WDTHOLD;               // Stop watchdog timer                              
        P1DIR |= 0x01;                          // Set Direction Register to OUT
        int i = 0;  
  
        for (;;)                                  
        {
                P1OUT ^= 0x01;                  // Toggle P1.0
                for(i=0; i< 20000; i++);        // Delay Loop
        }

        return 0;
}

