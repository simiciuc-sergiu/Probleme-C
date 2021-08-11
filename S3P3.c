void calcul(char *pArr, long *min, long *max, long *sum)
{
	unsigned char i = 1;
	for(; i < pArr[0]; i++)
	{
		if(pArr[i] < *min)
		{
			*min = pArr[i];
		}
		if(pArr[i] > *max)
		{
			*max = pArr[i];
		}
		*sum += pArr[i];
	}
}