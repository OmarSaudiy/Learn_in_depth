   /*****************************************************************
    *[FILE NAME] 	: fifo.c						  				*
    *											  					*
    *[AUTHOR(S)]    : Omar Ahmed					  	  			*
    *										        				*
    *[DATE CREATED] : Aug 15, 2023						  			*
    * 										  						*
    *[DECRIPTION]   : Circulator FIFO Buffer 						*
    *****************************************************************/


#include "Platform_Types.h"
#include "stdio.h"
#include "fifo.h"



FIFO_Status FIFO_Init (FIFO_Buff_t * ptr,usertype * buffer,uint64 length)
{
	if(buffer == (usertype *) NULL_PTR)
		return FIFO_NOT_INIT;

	ptr->base = buffer;
	ptr->head = buffer;
	ptr->tail = buffer;
	ptr->length = length;
	ptr->count = 0;

	return FIFO_NO_ERROR;


}

FIFO_Status FIFO_PushElement (FIFO_Buff_t * ptr,usertype* temp)
{
	if(ptr->base == (usertype *)NULL_PTR)
		return FIFO_NOT_INIT;
	if(ptr->count == ptr->length)
		return FIFO_FULL;

	*(ptr->head) = *temp;
	(ptr->count)++;
	if(ptr->head == ptr->base + ptr->length)
		ptr->head = ptr->base;
	else
		(ptr->head)++;

	return FIFO_NO_ERROR;


}

FIFO_Status FIFO_PopElement (FIFO_Buff_t * ptr,usertype* temp)
{
	if(ptr->base == (usertype *)NULL_PTR)
		return FIFO_NOT_INIT;
	if(ptr->count == 0)
		return FIFO_EMPTY;

	*temp = *((ptr->tail)++);
	if(ptr->tail == ptr->base + ptr->length + 1)
		ptr->tail = ptr->base;
	(ptr->count)--;

	return FIFO_NO_ERROR;


}

FIFO_Status FIFO_PrintElements (FIFO_Buff_t * ptr)
{	
	printf("\n-----Printing Current FIFO Values-----\n");
	if(ptr->base == (usertype *)NULL_PTR)
		return FIFO_NOT_INIT;
	if(FIFO_Is_Empty(ptr) == FIFO_EMPTY)
	{
		printf("FIFO Is Empty");
		return FIFO_EMPTY;
	}

	usertype i = 0;
	usertype * tailtemp = ptr->tail;
	for(i = 0; i < ptr->count; i++)
		printf("%lu..",*(tailtemp++));
	
}

FIFO_Status FIFO_Is_Empty (FIFO_Buff_t * ptr)
{
	if((ptr->count) == 0)
		return FIFO_EMPTY;
	return FIFO_NO_ERROR;
}
