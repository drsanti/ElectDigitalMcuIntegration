
#include <bsp.h>
#include <rtl.h>

int main()
{
	System_Init();

	Uart1_Printf("Hello, World!\r\n");

	System_Start();
}
