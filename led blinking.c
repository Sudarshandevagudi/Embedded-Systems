#include <reg51.h> // Header file for 8051 microcontroller

sbit LED = P1^0; // Define LED pin as P1.0

void delay(unsigned int time) {
    unsigned int i, j;
    for (i = 0; i < time; i++)
        for (j = 0; j < 1275; j++); // Delay loop
}

void main() {
    while (1) {
        LED = 1;     // Turn ON LED
        delay(500);  // Delay of ~500 ms
        LED = 0;     // Turn OFF LED
        delay(500);  // Delay of ~500 ms
    }
}