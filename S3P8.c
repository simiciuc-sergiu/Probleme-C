uint_32 mystrlen(const char *s)
{
	uint_32 i = 0;
		
	while(*s != '\0')
		{
			i++;
			s++;
		}
	return i;
}

static uint_32 delim(char *s)
{
	
		uint_32 i = 0;
		uint_32 ok = 0;
		while((*s != '\0') || (*s != ' ') || (*s != '\n'))
		{
		
			ok = 1;	
			s++;
		}
	return ok;
}

static uint_32 alternativecase(char *s, char* alternative)
{
	uint_32 i = 0;
	uint_32 ok = 0;

	while(*s != '\0')
	{
		if((*s >= 'A') && (*s <= 'Z'))
			{
				ok = 1;
				*alternative = (*s  + 32);
			}
		if((*s >= 'a') && (*s <= 'z'))
		{
			ok = 1;
			*alternative = (*s - 32);
		}
		s++;
	}
	return ok;
}

char strRow1[] = "C is a general purpose programming language initially";
	char strRow2[] = "developed by Dennis Ritchie between";
	char strRow3[] = "1969 and 1973 at Bell Labs";
	char* Arr[] = {strRow1, strRow2, strRow3};
	printf("%d \n",mystrlen(Arr[0]));
	if(alternativecase(strRow1[0]) == 1)
	{
		printf("Este uppercase");
	}