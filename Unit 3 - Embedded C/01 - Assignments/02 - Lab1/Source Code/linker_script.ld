



ENTRY(reset)

MEMORY
{
	MEM (rwx) : ORIGIN = 0x0 , LENGTH = 64M
}

SECTIONS
{
	. = 0x10000;

	.reset . :
	{

		startup.o(.text)

	}	> MEM

	.text :
	{

		*.o(.text)

	}	> MEM

	.data :
	{

		*(.data) *(.rodata)

	}	> MEM

	.bss :
	{

		*(.bss) *(.COMMON)

	}	> MEM

	. = . + 0X1000;

	stack_top = . ;
}