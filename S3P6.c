static void swap(unsigned int *xp, unsigned int *yp)
{
	//inainte de a extrage valoarea trb sa testam daca adresa e valida
	if(xp != NULL && yp != NULL)
	{
		int temp = *xp;
		*xp = *yp;
		*yp = temp;
	}
}

static void bubbleSort(unsigned int vect[], int n, int m)
{
	unsigned int i = 0; 
	unsigned int j = 0;
   for (i = 0; i < n; i++)     
       for (j = 0; j < m-i-1; j++)
           if (vect[j] > vect[j+1])
              swap(&vect[j], &vect[j+1]);
}

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

void sort(unsigned int *matrix, int n, int m)
{
	unsigned int i = 0;
	for(i = 0; i < n;i++)
	{
		unsigned int *pLin = matrix + i * m;
		bubbleSort(pLin, n, m);
	}
}