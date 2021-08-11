void printmatrix(unsigned int *matrix, int n, int m)
{
    unsigned int i = 0;
	unsigned int j = 0;

    for (i = 0; i < n; i++) 
	{
        
        for (j = 0; j < m; j++) 
		{
             printf("%d ", matrix[i*m+j]);
        }
		printf("\n");
    }
	printf("\n");
}

void increment(unsigned int *matrix, int n)
{
	unsigned int i = 0;
	unsigned int j = 0;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (i == j)
			{
				*(matrix + n * i + i) = *(matrix + n * i + i) + 1;
			}
		}
	}
}

void interschimbare(unsigned int *matrix, int n)
{
	unsigned int i = 0;
	unsigned int j = 0;
	
	if(matrix != NULL)
	{
		for (i = 0; i < n; i++)
		{
			unsigned int *pLin = matrix + i * n;
			
			for (j = 0; j < n; j++)
			{ 
				
				if ( i == j)
				{
					unsigned int *pLin2 = pLin + n;
					swap((pLin + j + 1), (pLin2 + j));
				}
			}
		}
	}
}