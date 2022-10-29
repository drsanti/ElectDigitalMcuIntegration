
#include <bsp.h>
#include <rtl.h>


void KeyChanged()
{
	// Inputs
	// PSW0 => InputA
	// PSW1 => InputB
	bool A = Dinp0_Get();
	bool B = Dinp1_Get();

	// NOT GATE
	// InputA		OuputQ(LED0)
	//   0             1
	//   1             0
	/*
	bool Q = !A;
	Uart1_Printf("A=%d, Q=%d\r\n", A, Q);
	*/


	// 2-INPUT AND GATE
	// InputA	InputB	OuputQ(LED0)
	//   0    	  0        0
	//   0     	  1        0
	//   1    	  0        0
	//   1     	  1        1
	//
	/*
	bool Q = A & B;
	Uart1_Printf("A=%d, B=%d, Q=%d\r\n", A, B, Q);
	*/


	// 2-INPUT OR GATE
	// InputA	InputB	OuputQ(LED0)
	//   0    	  0        0
	//   0     	  1        1
	//   1    	  0        1
	//   1     	  1        1
	//
	/*
	bool Q = A | B;
	Uart1_Printf("A=%d, B=%d, Q=%d\r\n", A, B, Q);
	*/


	// 2-INPUT NAND GATE
	// InputA	InputB	OuputQ(LED0)
	//   0    	  0        1
	//   0     	  1        1
	//   1    	  0        1
	//   1     	  1        0
	//
	/*
	bool Q = !(A & B);
	Uart1_Printf("A=%d, B=%d, Q=%d\r\n", A, B, Q);
	*/


	// 2-INPUT NOR GATE
	// InputA	InputB	OuputQ(LED0)
	//   0    	  0        1
	//   0     	  1        0
	//   1    	  0        0
	//   1     	  1        0
	//
	/*
	bool Q = !(A | B);
	Uart1_Printf("A=%d, B=%d, Q=%d\r\n", A, B, Q);
	*/

	// 2-INPUT XOR GATE
	// InputA	InputB	OuputQ(LED0)
	//   0    	  0        0
	//   0     	  1        1
	//   1    	  0        1
	//   1     	  1        0
	//
	/*
	bool Q = A ^ B; 
	Uart1_Printf("A=%d, B=%d, Q=%d\r\n", A, B, Q);
	*/

	// 2-INPUT XNOR GATE
	// InputA	InputB	OuputQ(LED0)
	//   0    	  0        1
	//   0     	  1        0
	//   1    	  0        0
	//   1     	  1        1
	//
	
	bool Q = !(A ^ B); 
	Uart1_Printf("A=%d, B=%d, Q=%d\r\n", A, B, Q);
	

	// Update Q (LED0)
	if(Q==1)
	{
		Dout0_Set();
	}
	else
	{
		Dout0_Clr();
	}
}

int main()
{
	System_Init();

	Psw_SetKeyDownCallback(PSW_ID_0, KeyChanged);
	Psw_SetKeyUpCallback(PSW_ID_0, KeyChanged);

	Psw_SetKeyDownCallback(PSW_ID_1, KeyChanged);
	Psw_SetKeyUpCallback(PSW_ID_1, KeyChanged);

	Dout0_Clr();
	Dout1_Clr();
	Dout2_Clr();
	Dout3_Clr();
	KeyChanged();
	System_Start();
	
}
