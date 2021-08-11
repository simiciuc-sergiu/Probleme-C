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

char* mystrcat(char *string1, const char *string2, uint_32 sizeS1, uint_32 sizeS2)
{
	uint_32 i = 0;
	char *p = string1;
	if( (string1 == NULL) && (string2 == NULL))
	{
		return NULL;
	}
	
	for(;*p != '\0'; i++)
	{
		*p++;
	}
	

	while( *string2 != '\0')
	{
		*p++ = *string2++;
	}
	*p = '\0';

	return string1;
}


void main()
{
	char s1[50] = "Afara este ";
	char s2[] = "foarte frumos";
	uint_32 sizes1 = mystrlen(s1);
	uint_32 sizes2 = mystrlen(s2);
	mystrcat(s1,s2,sizes1,sizes2);
	printf("Dimensiunea primului sir: %d \n",sizes1);
	printf("Dimensiunea sirului 2: %d \n",sizes2);
	printf("%s \n", s1);
	printf("Dimensiunea primului sir: %d \n",mystrlen(s1));
}