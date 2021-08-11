#include <stdio.h>
unsigned char n=23;
char get(int pozitie)
{
	return (n>>pozitie) & 1;
}

void set_bit(unsigned char index, unsigned char value)
{
	n = n | (1 << index);
	
}


void main()
{
	char a=0;
	a=get(0);
	printf("get: %d \n",a);
}