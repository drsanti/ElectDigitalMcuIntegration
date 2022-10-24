
#include <bsp.h>
#include <rtl.h>

void u1_rx(void *e) 
{
	uart_event_t *evt = (uart_event_t *)e;
	int8_t rxd = evt->byte;

	Uart1_Printf("received: %c\r\n", rxd);

	if(rxd == '0')
	{
		Dout0_Clr();
	}
	else if(rxd == '1')
	{
		Dout0_Set();
	}

}

int main()
{
	System_Init();

	Uart1_SetRxIsrCallback(u1_rx);

	while (1)
	{
	}
	
}
