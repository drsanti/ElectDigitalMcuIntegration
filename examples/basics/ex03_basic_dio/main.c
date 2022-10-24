
#include <bsp.h>
#include <rtl.h>

int main()
{
	System_Init();

	Dout0_Clr();
	while(1) 
	{
		/*
		Dout0_Set();
		Delay_mS(500);

		Dout0_Clr();
		Delay_mS(500);
		*/

		uint8_t psw0 = Dinp0_Get();
		if(psw0 == 0)
		{
			Dout0_Set();		
		}
		else 
		{
			Dout0_Clr();	
		}

	}
}
