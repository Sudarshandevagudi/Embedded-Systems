#include <reg51.h>

void delay_ms(unsigned int k)

{ unsigned int i,j;

for(i=0;i<=k; i++)

for(j=0;j<110;j++);

}

void main(void)

{

unsigned int digits [12]={0x3F , 0x06, 0x5B,0x4F, 0x66, 0x60, 0xFD,0x07,0xff, 0xEF};
P2=0x00;

while(1)
{
unsigned int i;

for(i=0;i<=9;i++)

{
P2 = digits[i];
delay_ms(250);
}
}
}