#include <reg51.h>

sbit CLK = P3^0;    // Clockwise button (button connected to P3^0)
sbit ACLK = P3^1;   // (Optional second button, can be used for anti-clockwise rotation)

void MSdelay(int n) {
    unsigned int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < 1275; j++);
    }
}

void rotate_90_degrees_clockwise() {
    // Stepper motor control sequence for 90° rotation (2 steps)
    P2 = 0x66;  // Step 1 (22.5°)
    MSdelay(50);
    P2 = 0xCC;  // Step 2 (45°)
    MSdelay(50);
    P2 = 0x99;  // Step 3 (67.5°)
    MSdelay(50);
    P2 = 0x33;  // Step 4 (90°)
    MSdelay(50);
}

void main() {
    while (1) {
        if (CLK == 0) {  // If the button is pressed
            MSdelay(20);  // Debounce delay to avoid multiple triggers
            if (CLK == 0) {  // Confirm button press
                rotate_90_degrees_clockwise();  // Rotate the motor 90° clockwise
                while (CLK == 0);  // Wait for the button to be released
            }
        }
    }
}
