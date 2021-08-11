
#define TRUE 1
#define FALSE 0


typedef enum _Type 
{
	uint8, 
	uint16,
	uint32,
	BOOL,
	ufloat32,
	Type_Last
}type;

typedef union _Value
{
	unsigned char uint8;
	unsigned short uint16;
	unsigned int uint32;
	unsigned char boolean;
	double ufloat32;
}value;

typedef struct _Param
{
	unsigned char nume[32];
	type Tip;
	value Valoare;
}param;

void Init_param()
{
	char array[] = "Param_1";
	memcpy(p[0].nume,array,sizeof(array));
	p[0].Tip = uint8;
	p[0].Valoare.uint8 = 231;

	memcpy(p[1].nume,"Param_2",8);
	p[1].Tip = uint16;
	p[1].Valoare.uint16 = 25584;

	memcpy(p[2].nume,"Param_3",8);
	p[2].Tip = uint32;
	p[2].Valoare.uint32 = 425621;

	memcpy(p[3].nume,"Param_4",8);
	p[3].Tip = BOOL;
	p[3].Valoare.boolean = TRUE;

	memcpy(p[4].nume,"Param_5",8);
	p[4].Tip = ufloat32;
	p[4].Valoare.ufloat32 = (float)8.1;
}

void Print()
{
	unsigned int i = 0;
	for(; i < 5; i++)
	{
		switch(p[i].Tip)
		{
		case(uint8):
			printf("\n Parametrul %d:\n Nume: %s  \n Tip: %d \n Valoare: %d \n",i,p[i].nume,p[i].Tip, p[i].Valoare);
			break;
		case(uint16):
			printf("\n Parametrul %d:\n Nume: %s  \n Tip: %d \n Valoare: %d \n",i,p[i].nume,p[i].Tip, p[i].Valoare);
			break;
		case(uint32):
			printf("\n Parametrul %d:\n Nume: %s  \n Tip: %d \n Valoare: %d \n",i,p[i].nume,p[i].Tip, p[i].Valoare);
			break;
		case(BOOL):
			printf("\n Parametrul %d:\n Nume: %s  \n Tip: %d \n Valoare: %d \n",i,p[i].nume,p[i].Tip, p[i].Valoare);
			break;
		case(ufloat32):
			printf("\n Parametrul %d:\n Nume: %s  \n Tip: %d \n Valoare: %.2f \n",i,p[i].nume,p[i].Tip, p[i].Valoare);
			break;
		}
		
	}
}

void main()
{
	Init_param();
	Print();
}