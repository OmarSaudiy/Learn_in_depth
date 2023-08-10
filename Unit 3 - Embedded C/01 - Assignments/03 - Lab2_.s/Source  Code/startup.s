



.section .vectors

_vectors:
.word	_stack_top					/*value to be loaded to  SP */
.word	_reset_handler				/*Reset */
.word	_interrupt_handler			/*NMI  	*/
.word	_interrupt_handler			/*2  	*/
.word	_interrupt_handler			/*3  	*/
.word	_interrupt_handler			/*4  	*/
.word	_interrupt_handler			/*5 	*/
.word	_interrupt_handler			/*6  	*/
.word	_interrupt_handler			/*7  	*/
.word	_interrupt_handler			/*8  	*/
.word	_interrupt_handler			/*9  	*/
.word	_interrupt_handler			/*10  	*/
.word	_interrupt_handler			/*11  	*/
.word	_interrupt_handler			/*12  	*/
.word	_interrupt_handler			/*13  	*/




.section .text

_reset_handler:

	bl	main
	b	.

.thumb_func

_interrupt_handler:
	b 	_reset_handler