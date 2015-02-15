/* ---------------------------------------------------------------------------
** uart_lib.c
** Useful uart helper functions
**
** Author: Navid Shahrestani
** -------------------------------------------------------------------------*/

#include  <msp430g2553.h>

#define TXLED BIT0
#define RXLED BIT6
#define TXD   BIT2
#define RXD   BIT1

char TxByte;

//Functions


/* ---------------------------------------------------------------------------
** send_char
** 		Inputs  : None
**		Returns : Void
**		Description : Disables watchdog timer (will add settin watchdog timer later)
** -------------------------------------------------------------------------*/

void uartPolledWrite(unsigned char byte)
    {
        while (!(IFG2 & UCA0TXIFG));
        UCA0TXBUF = byte;
    }

void uartWrite(unsigned char byte)
    {
        TxByte = byte;
        UC0IE |= UCA0TXIE; // Enable USCI_A0 TX interrupt
    }




//UART TX Interrupt
__attribute__((interrupt(USCIAB0TX_VECTOR)))
void USCI0TX_ISR(void){
   UCA0TXBUF = TxByte; // TX next character
   UC0IE &= ~UCA0TXIE; // Disable USCI_A0 TX interrupt
}

//UART RX Interrupt
__attribute__((interrupt(USCIAB0RX_VECTOR)))
void USCI0RX_ISR(void){
   
   if (UCA0RXBUF == 'S')
        P1OUT |= RXLED;
   else  
        P1OUT &= ~RXLED;
}

