#include <reg51.h>

sbit sw1 = P1^0;
sbit sw2 = P1^1;
sbit sw3 = P1^2;

sbit LED1 = P2^0;
sbit LED2 = P2^3;
sbit LED3 = P2^6;

void main() {
    P1 = 0x00; // Initialize port P1 to 0
    P2 = 0x00; // Initialize port P2 to 0

    while (1) {
        // Check the state of sw1 and control LED1
        if (sw1 == 1) {
            LED1 = 1;
        } else {
            LED1 = 0;
        }

        // Check the state of sw2 and control LED2
        if (sw2 == 1) {
            LED2 = 1;
        } else {
            LED2 = 0;
        }

        // Check the state of sw3 and control LED3
        if (sw3 == 1) {
            LED3 = 1;
        } else {
            LED3 = 0;
        }
    }
}