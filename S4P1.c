typedef enum _SIU_PCR_e
{
WPS = 0,
WPE,
HYS,
ODE,
DSC,
SIU_PCR_Last
}SIU_PCR_e;

typedef union _SIU_PCR_u
{
	struct _SIU_PCR_s
	{
		unsigned char WPS : 1;
		unsigned char WPE : 1;
		unsigned char res : 2;
		unsigned char HYS : 1;
		unsigned char ODE : 1;
		unsigned char DSC : 2;

	}SIU_PCR_s;

	unsigned char SIU_PCR;

} SIU_PCR_u;


void SetField (unsigned char *p, SIU_PCR_e field, unsigned char val)
{
	SIU_PCR_u *SIU_PCR = (SIU_PCR_u*)p;
	if(p != NULL)
	{
		
		switch(field)
		{
		case WPS:
			SIU_PCR->SIU_PCR_s.WPS = val;
			break;
		case WPE:
			SIU_PCR->SIU_PCR_s.WPE = val;
			break;
		case HYS:
			SIU_PCR->SIU_PCR_s.HYS = val;
			break;
		case ODE:
			SIU_PCR->SIU_PCR_s.ODE = val;
			break;
		case DSC:
			SIU_PCR->SIU_PCR_s.DSC = val;
			break;
		}	
	}
	
}

void SetRegister (unsigned char *reg, const unsigned char val)
{
	SIU_PCR_u *SIU_PCR_a = (SIU_PCR_u*)reg;
	SIU_PCR_a->SIU_PCR = val;
}

void PrintFields ( unsigned char SIU_PCR)
{
	int i = 8;
	SIU_PCR_u *SIU_PCR_p = (SIU_PCR_u*)&SIU_PCR;
	printf("%u \n", SIU_PCR_p);
	printf("%u %u %u %u %u %u\n", SIU_PCR_p->SIU_PCR_s.WPS, SIU_PCR_p->SIU_PCR_s.WPE, SIU_PCR_p->SIU_PCR_s.res, SIU_PCR_p->SIU_PCR_s.HYS, SIU_PCR_p->SIU_PCR_s.ODE, SIU_PCR_p->SIU_PCR_s.DSC);
}

void main()
{
	SIU_PCR_u SIU_PCR;
	SetField(&SIU_PCR.SIU_PCR,WPE,1);
	PrintFields(SIU_PCR.SIU_PCR);
}