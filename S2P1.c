#define number 5412
#define MAX_BITS 8

unsigned long v[] = { 0 };

int count = 0;

void convToBinary(unsigned long _number)
{
	unsigned char i = 0;
	for( i = sizeof(unsigned long) * MAX_BITS); i >= 0; i--)
	{
		v[i] = (number >> i) & 1;
		count += (reg[i] & 1);
	}
}