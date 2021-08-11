unsigned int rightrot(unsigned int a, unsigned char n)
{
	return (a >> n) | (n << (32 - n));
}

void main()
{
	unsigned int a=16;
	unsigned char n=2;
	printf("%d \n",rightrot(a,n));
}