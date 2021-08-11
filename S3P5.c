typedef void (*handler_type)(unsigned int *v, unsigned int n);

void arraymin(unsigned int *v, unsigned int n)
{
	unsigned int i = 0;
	unsigned int min = v[0];
	for (i = 0; i < n; i++)
	{
		if(v[i] < min)
		{
			min = v[i];
		}
	}
	printf("Minimul este: %d \n", min);
		
}

void arraymax(unsigned int *v, unsigned int n)
{
	unsigned int i = 0;
	unsigned int max = v[0];
	for (i = 0; i < n; i++)
	{
		if(v[i] > max)
		{
			max = v[i];
		}
	}
	printf("Maximul este: %d \n", max);
	
void main()
{
unsigned int v[] = {4, 2, 5, 1, 0, 2};
	unsigned int n = 6;
	handler_type handler;
	handler = arraymax;
	
	handler(v, n);
	handler = &arraymin;
	handler(v, n);
}