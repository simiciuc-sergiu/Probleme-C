#define ARRAY_LENGTH 20

unsigned char SpeedInterval(unsigned long SpeedVal, unsigned long ArrInt[])
{
	unsigned char i = 0;
	for(; i < ARRAY_LENGTH; i++)
	{
		if(SpeedVal <= ArrInt[i])
		{
			if(SpeedVal >= ArrInt[i])
			{
				i++;
				return i;
			}
			return i;
		}
	}
}