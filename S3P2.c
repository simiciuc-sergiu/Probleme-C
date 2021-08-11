typedef enum ex_ret_
{
	ex_ret_ok, 
	ex_ret_invalid_param, 
	ex_ret_handler_not_supported, 
	ex_ret_handler_not_available,
	last
}ex_ret;

ex_ret SetRegister(unsigned short *puRegister, unsigned short uFieldStart, unsigned char uFieldSize, unsigned short uFieldValue)
{
	ex_ret eret = ex_ret_ok;
	
	if(puRegister != NULL)
	{
		unsigned short uRegister = *puRegister;
		unsigned int i = 0;
		for(; i < uFieldSize; i++)
		{
			uRegister &= ~(1 << (uFieldStart - i));
		}
		uRegister |= (uFieldValue << (uFieldStart - uFieldSize + 1));
		*puRegister = uRegister;
	}
	else
	{
		eret = ex_ret_invalid_param;
	}
	return eret;
}

ex_ret PrintRegister (const unsigned short *puRegister)
{
	if(puRegister != NULL)
	{
		unsigned char i = MAX_SHORT_BITS - 1;
		for(; i >= 0; i--)
		{
			printf("%d", (*puRegister >> i) & 1);
		}
		printf("\n");
	}
}