#include <reg51.h>

void delay() {
    int i, j;
    for (i = 0; i < 1000; i++)
        for (j = 0; j < 100; j++);
}

void main() {
    unsigned char numbers[] = {0x3F, 0x06, 0x5B, 0x4F, 0x66, 0x6D, 0x7D, 0x07, 0x7F, 0x6F}; 
    // Hex values for digits 0-9 in Common Cathode
    
    while (1) {
        int i;
        for (i = 0; i < 10; i++) {
            P2 = numbers[i]; // Send the number to Port 2
            delay();
        }
    }
}