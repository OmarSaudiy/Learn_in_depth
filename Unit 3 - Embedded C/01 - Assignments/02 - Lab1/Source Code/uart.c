

#define UART0_DR  		*((volatile unsigned long *)((unsigned long *)0x101F1000))


void UART0_SendString(unsigned char * string)
{
	while(*string != '\0')
	{
		UART0_DR = (unsigned long )*string;
		string++;
	}


}
