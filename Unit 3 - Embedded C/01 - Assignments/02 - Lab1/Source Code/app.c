#include "uart.h"


	unsigned char string[100] = "Learn_In_Depth : Omar Ahmed Hassan";


int main(void)
{

	UART0_SendString(string);

	return 0;
}