#define SETBIT(POZITIEBIT, VAR) ((VAR) | (1 << ((POZITIEBIT) - 1)))
#define CLEARBIT(POZITIEBIT, VAR) ((VAR) & (~1 << ((POZITIEBIT) - 1)))