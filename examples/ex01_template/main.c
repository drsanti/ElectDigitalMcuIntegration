
#include "bsp.h"
#include "rtl.h"
int main(void)
{
	System_Init();

	Uart1_Printf("Welcome to Electronic, Digital, and Microcontroller\r\n");

	System_Start();
}
