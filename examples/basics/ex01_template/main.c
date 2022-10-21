
#include <bsp.h>
#include <rtl.h>

void read_analog_0() {
	float adc0 = Adc_GetVoltage(0);
	Uart1_Printf("ADC0: %f\r\n", adc0);
	if(adc0 > 1.5) {
		Uart1_Printf("Danger!!\r\n");
	}
}

int main()
{
	System_Init();

	Adc_Init();
	
	Timer_Create(1000, read_analog_0);

	System_Start();
}
