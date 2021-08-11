void main()
{
	char x=43;
	int a,b,c,d,e,f,g,h;
	a=x&1;

	b=(x>>1)&1;

	c=(x>>2)&1;

	d=(x>>3)&1;

	e=(x>>4)&1;
	
	f=(x>>5)&1;

	g=(x>>6)&1;
	
	h=(x>>7)&1;
	printf("%d",h);
	printf("%d",g);
	printf("%d",f);
	printf("%d",e);
	printf("%d",d);
	printf("%d",c);
	printf("%d",b);
	printf("%d\n",a);
}