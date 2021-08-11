#define NUMBER_RUNNING_PROGRAM 20

typedef enum _Stare
{
	normal = 0,
	SCM,
	SCB,
	Stare_Last
}Stare;


typedef struct _Port
{
	unsigned char In;
	unsigned char Out;
	unsigned char s;
}Port;

static void _Normal(unsigned char in, unsigned char out, Stare *_Stare)
{

	Stare m[2][2] = {normal, SCM, SCB, normal};
	*_Stare = m[in][out];
#if 0
	if(in == 0 && out == 0)
	{
		*_Stare = normal;
	}
	if(in == 1 && out == 1)
	{
		*_Stare = normal;
	}
	if(in == 0 && out == 1)
	{
		*_Stare = SCM;
	}
	if(in == 1 && out == 0)
	{
		*_Stare = SCB;
	}
#endif
}

static void _SCM(unsigned char in, unsigned char out, Stare *_Stare)
{
	Stare m[2][2] = {SCM, SCM, SCB, normal};
	*_Stare = m[in][out];

#if 0
	if(in == 0 && out == 1)
	{
		*_Stare = SCM;
	}
	if(in == 0 && out == 0)
	{
		*_Stare = SCM;
	}
	if(in == 1 && out == 1)
	{
		*_Stare = normal;
	}
	if(in == 1 && out == 0)
	{
		*_Stare = SCB;
	}
#endif
}

static void _SCB(unsigned char in, unsigned char out, Stare *_Stare)
{
	Stare m[2][2] = {normal, SCM, SCB, SCB};
	*_Stare = m[in][out];

#if 0 
	if(in == 1 && out == 0)
	{
		*_Stare = SCB;
	}
	if(in == 1 && out == 1)
	{
		*_Stare = SCB;
	}
	if(in == 0 && out == 1)
	{
		*_Stare = SCM;
	}
	if(in == 0 && out == 0)
	{
		*_Stare = normal;
	}
#endif
}

void SetPort(Port p, Stare *s)
{
	switch(p.s)
	{
	case(normal):
		 _Normal(p.In, p.Out, s);
		break;

	case(SCM):
		_SCM(p.In, p.Out, s);
		break;

	case(SCB):
		_SCB(p.In, p.Out, s);
		break;
	default:
		printf("Unknown state %d", p.s);
		break;
	}
}

void main()
{
	Port p = {0,0,normal};
	Stare stare = normal;
	uint8 i = 0;
	for(;i < NUMBER_RUNNING_PROGRAM; i++)
	{
		p.In = (rand() % 2);
		p.Out = (rand() % 2);
		SetPort(p, &stare);
		p.s = stare;
		printf("\nOUT: %d \n", p.Out);
		printf("IN: %d \n", p.In);
		printf("\n Starea: %d \n", stare);
	}
}
