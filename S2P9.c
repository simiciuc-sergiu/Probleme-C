unsigned char pozArr(unsigned char v[], unsigned char element, unsigned char n)
{
	unsigned char poz = 0;
	unsigned char i = 0;
	for(i = 0; i < n; i++)
	{
		if(v[i] == element)
		{
			return i;
		}
	}
	return -1;
}
