#include <reg51.h>

sbit Switch = P1^4;  // Define switch pin connected to P1.4
sbit Buzzer = P3^2;  // Define buzzer pin connected to P3.2

void delay() {
    unsigned char i, j;
    for (i = 255; i > 0; i--) {
        for (j = 255; j > 0; j--);
    }
}

void main() {
    Buzzer = 0;  // Initially, turn OFF the buzzer

    while (1) {
        while (Switch == 1); // Wait for the switch to be pressed (Switch is active low)
        Buzzer = 1;          // Turn ON the buzzer
        delay();             // Wait for a small delay

        while (Switch == 0); // Wait for the switch to be released
        Buzzer = 0;          // Turn OFF the buzzer
    }
}