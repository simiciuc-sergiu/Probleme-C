void fibo(unsigned long poz)
{
	unsigned long a = 0;
	unsigned long b = 1;
	unsigned long sum = 0;
	unsigned char i = 0;
	
	for(i = 0; i < poz-1; i++)
	{
		sum = a+b;
		a = b;
		b = sum;
	}
}