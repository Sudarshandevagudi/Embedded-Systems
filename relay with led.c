#include <reg51.h>

// Assuming you're using P2.0 to control the relay (valid pin in Port 2)
sbit relay = P2^0;

void delay();

void main() {
    while (1) {
        relay = 1;  // Turn relay on
        delay();    // Wait
        relay = 0;  // Turn relay off
        delay();    // Wait
    }
}

void delay() {
    int i, j;
    for (i = 0; i < 500; i++)  // Outer loop for delay
        for (j = 0; j < 1275; j++);  // Inner loop for delay
}
