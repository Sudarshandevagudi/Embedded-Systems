#include <reg51.h>  // Include header for 8051 microcontroller

void delay() {
    unsigned char r4, r3;
    for (r4 = 188; r4 > 0; r4--) {  // Outer loop for delay
        for (r3 = 255; r3 > 0; r3--);  // Inner loop for delay
    }
}

void main() {
    while (1) {
        P2 = 0x00;  // Turn all LEDs OFF
        delay();

        P2 = 0xFF;  // Turn all LEDs ON
        delay();
    }
}