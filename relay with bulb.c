#include <reg51.h>

void delay_ms(unsigned int k)
{
    unsigned int i, j;
    for (i = 0; i <= k; i++)
    {
        for (j = 0; j < 110; j++);
    }
}

void main()
{
    P2 = 0x00;
    while (1)
    {
        P2 = ~P2;
        delay_ms(100);
    }
}