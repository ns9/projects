/* ---------------------------------------------------------------------------
** main.c
** USB UART Communication
**
** Author: Navid Shahrestani
** -------------------------------------------------------------------------*/

#include  <msp430g2553.h>
#include  "../../lib/func_lib.h"

//Constants
#define BUTTON  0x08

int main (void){
    
        init_watchdog();
        init_leds();
        init_pushbutton();

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

