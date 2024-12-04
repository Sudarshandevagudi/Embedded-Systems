#include <reg51.h>

sbit CLK = P3^0;    // Clockwise button

void MSdelay(int n) {
    unsigned int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < 1275; j++);
    }
}

void rotate_45_degrees_clockwise() {
    // Half-step sequence for precise 45° rotation
    P2 = 0x09; // Step 1
    MSdelay(50);
    P2 = 0x08; // Step 2
    MSdelay(50);
    P2 = 0x0C; // Step 3
    MSdelay(50);
    P2 = 0x04; // Step 4
    MSdelay(50);
    P2 = 0x06; // Step 5
    MSdelay(50);
    P2 = 0x02; // Step 6
    MSdelay(50);
    P2 = 0x03; // Step 7
    MSdelay(50);
    P2 = 0x01; // Step 8
    MSdelay(50);
}

void main() {
    while (1) {
        if (CLK == 0) { // Check if the button is pressed
            MSdelay(20); // Debounce delay
            if (CLK == 0) { // Confirm button press
                rotate_45_degrees_clockwise(); // Rotate 45° clockwise
                while (CLK == 0); // Wait for button release
            }
        }
    }
}
