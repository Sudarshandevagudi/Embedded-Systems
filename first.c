#include<reg51.h>
sbit port1_0 = P1^0;
void delay(){
int j;
for( j=0;j<=30000;j++)
{
}
} 
void main(){
while(1){
port1_0 = 0;
delay();
port1_0 = 1;
delay();
}
} 