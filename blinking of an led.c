#include <reg51.h>  // Header file for 8051 microcontroller

#define LED_PORT P2  // Define Port 2 as the LED output port

// Function to generate delay in milliseconds
void delay_ms(unsigned int ms) {
    unsigned int i, j;
    for (i = 0; i < ms; i++) {
        for (j = 0; j < 120; j++);  // Roughly 1ms delay for a 12 MHz clock
    }
}

// Main function
void main() {
    while (1) {               // Infinite loop
        LED_PORT = 0xFF;      // Turn ON all 8 LEDs (Set Port 2 high)
        delay_ms(500);        // Delay for 500 milliseconds
        LED_PORT = 0x00;      // Turn OFF all 8 LEDs (Set Port 2 low)
        delay_ms(500);        // Delay for 500 milliseconds
    }
}