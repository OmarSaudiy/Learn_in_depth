MEMORY
{
	flash(RX) : ORIGIN = 0X08000000, LENGTH = 128K
	sram(RWX) : ORIGIN = 0X20000000, LENGTH = 20K
}

SECTIONS
{
	.potato :
	{
		*(.vectors*)
		*(.text*)

		. = ALIGN(4);
	} > flash

	.data :
	{
		*(.data)
	} > flash

	.bss :
	{
		*(.bss)
	} > sram

	. = . + 0x1000;
	_stack_top = .;
}