void PrintByte(unsigned long *x)
{
	unsigned char i = 0;
	printf("Valoare in hexa: %x\n", *x);
	for(; i < sizeof(unsigned long); i++)
	{
		printf("Valoare in hexa: %x\n", (char*)(x + i));
	}
}