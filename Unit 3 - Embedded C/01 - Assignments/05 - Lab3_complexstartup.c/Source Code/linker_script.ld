ENTRY(vectors)

MEMORY
{
	flash(RX) : ORIGIN = 0X00000000, LENGTH = 500M
	sram(RW) : ORIGIN = 0X20000000, LENGTH = 500M
}

SECTIONS
{
	.text :
	{
		*(.vectors)
		*(.text)
		. = ALIGN(4);
		_E_text = . ;
	} > flash

	.data :
	{
		_S_data = . ;
		*(.data)
		. = ALIGN(4);
		_E_data = . ;

	} > sram AT> flash

	.bss :
	{
		_S_bss = . ;
		*(.bss)
		. = ALIGN(4);
		_E_bss = . ;
	} > sram

}