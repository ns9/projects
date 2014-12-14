/* ---------------------------------------------------------------------------
** main.c
** <file description>
**
** Author: Navid Shahrestani
** -------------------------------------------------------------------------*/

#include  <msp430g2553.h>


int main (void){
    
        WDTCTL = WDTPW + WDTHOLD;               // Stop watchdog timer                              
        P1DIR |= 0x01;                          // Set LED0 to output
        P1DIR &= 0x08;                          // Set pusbutton as input
        
        int i = 0;  
  
        while(1)                               
        {
                if (
                P1OUT ^= 0x01;                  // Toggle P1.0
                for(i=0; i< 500; i++);        // Delay Loop
        }

        return 0;
}

