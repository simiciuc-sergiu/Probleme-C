
#define DIM_TABLOU 10
#define LUNGIME_N 5
#define LUNGIME_PP 3
#define LUNGIME_NPP 4
#define LUNGIME_NN 3

static int numarPrim(int numar)
{
	int i;
	int ret = 0;
    if(numar < 2)
        ret = 0;
    if(numar == 2)
        ret = 1;
   
    for(i = 2; i <=( numar / 2); i++) 
        if((numar % i) == 0) 
            ret = 0;
    return ret;
}

void fill_arrays(long tab_numere[LUNGIME_N], unsigned long tab_nrPrimePozitive[LUNGIME_PP], unsigned long tab_nrNonPrimePozitive[LUNGIME_NPP], long tab_nrNegative[LUNGIME_NN])
{
	int i;
	int contorneg = 0, contorprim = 0, contorpoz = 0;
	for(i=0;i<LUNGIME_N;i++)
	{
		if(	tab_numere[i] < 0)
		{
			tab_nrNegative[contorneg++] = tab_numere[i];
			
		}
		else
		{
			if(numarPrim(tab_numere[i]) == 1)
			{
				tab_nrPrimePozitive[contorprim++] = tab_numere[i];
				
			}
			else
			{
				tab_nrNonPrimePozitive[contorpoz++] = tab_numere[i];
				
			}
		}
		if(i == LUNGIME_N || contorneg == LUNGIME_NN || contorprim == LUNGIME_PP || contorpoz == LUNGIME_NPP)
		{
			break;
		}
	}

}

void main()
{
	int i=0;
	long tab_numere[LUNGIME_N]={2,-15,35,4,12};
	unsigned long tab_nrPrimePozitive[LUNGIME_PP] = {0};
	unsigned long tab_nrNonPrimePozitive[LUNGIME_NPP] = {0};
	long tab_nrNegative[LUNGIME_NN] = {0};

	fill_arrays(tab_numere, tab_nrPrimePozitive, tab_nrNonPrimePozitive, tab_nrNegative);
	printf("Tab Numere \n");
	for(i = 0; i<LUNGIME_N ; i++)
	{
		printf("%ld ",tab_numere[i]);
	}
	printf("\n");
	printf("Tab Numere Prime pozitive \n");
	for(i = 0; i<LUNGIME_PP ; i++)
	{
		printf("%ld ",tab_nrPrimePozitive[i]);
	}
	printf("\n");
	printf("Tab Numere NonPrime pozitive \n");
	for(i = 0; i<LUNGIME_NPP ; i++)
	{
		printf("%ld ",tab_nrNonPrimePozitive[i]);
	}
	printf("\n");
	printf("Tab Numere Negative \n");
	for(i = 0; i<LUNGIME_N ; i++)
	{
		printf("%ld ",tab_nrNegative[i]);
	}
	printf("\n");
}
