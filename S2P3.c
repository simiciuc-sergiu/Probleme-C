

void inv_Bits(unsigned long number)
{
	unsigned long new_number = 0;
	unsigned long mask = 1 << (sizeof(number) * 8 - 1);
	unsinged char i = 0;
	for( i = 0; i < sizeof(nb)*8l i++)
	{
		if (nb & 0x01)
		{
			new_number |= mask;
			number >>= 1;
			mask >>= 1;
		}
	}
}
