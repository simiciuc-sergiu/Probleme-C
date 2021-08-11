void ascii(unsigned long x)
{
	 unsigned int i,n = 0;
	 int v[32];
	 while(x>0)
	 {
		 v[n]=(x%10)+48;
		 x=x/10;
		 n++;
	 }

	
	 for(i=n-1;i>=0;i--)
	 {
		 printf("%d ",v[i]);
	 }
}

void main
{
	unsigned long x=12345678;
	ascii(x);
}