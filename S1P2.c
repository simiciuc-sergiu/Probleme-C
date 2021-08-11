char negatepreviousreturn(void)
{
	
	static char y=0;

	y=(~y) & 1;
	
	return y;
	
}
void main()
{
	char a=0;
	a=negatepreviousreturn();
	printf("%d \n",a);

	a=negatepreviousreturn();
	printf("%d \n",a);
	
	a=negatepreviousreturn();
	printf("%d \n",a);
}