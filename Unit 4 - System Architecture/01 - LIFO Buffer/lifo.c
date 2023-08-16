   /*****************************************************************
    *[FILE NAME] 	: lifo.c						  				*
    *											  					*
    *[AUTHOR(S)]    : Omar Ahmed					  	  			*
    *										        				*
    *[DATE CREATED] : Aug 14, 2023						  			*
    * 										  						*
    *[DECRIPTION]   : LIFO Buffer 									*
    *****************************************************************/


#include "Platform_Types.h"
#include "stdio.h"
#include "lifo.h"



LIFO_Status LIFO_Init (LIFO_Buff_t * ptr,usertype * buffer,uint64 length)
{
	if(buffer == (usertype *) NULL_PTR)
		return LIFO_NOT_INIT;

	ptr->base = buffer;
	ptr->head = buffer;
	ptr->length = length;
	ptr->count = 0;

	return LIFO_NO_ERROR;


}

LIFO_Status LIFO_PushElement (LIFO_Buff_t * ptr,usertype* temp)
{
	if(ptr->base == (usertype *)NULL_PTR)
		return LIFO_NOT_INIT;
	if(ptr->count == ptr->length)
		return LIFO_FULL;

	*(ptr->head) = *temp;
	(ptr->count)++;
	(ptr->head)++;

	return LIFO_NO_ERROR;


}

LIFO_Status LIFO_PopElement (LIFO_Buff_t * ptr,usertype* temp)
{
	if(ptr->base == (usertype *)NULL_PTR)
		return LIFO_NOT_INIT;
	if(ptr->count == 0)
		return LIFO_EMPTY;

	*temp = *(--(ptr->head));
	(ptr->count)--;

	return LIFO_NO_ERROR;


}

LIFO_Status LIFO_PrintElements (LIFO_Buff_t * ptr)
{
	printf("\n-----Printing Current LIFO Values-----\n");
	if(ptr->base == (usertype *)NULL_PTR)
		return LIFO_NOT_INIT;
	if(LIFO_Is_Empty(ptr) == LIFO_EMPTY)
	{
		printf("LIFO Is Empty");
		return LIFO_EMPTY;
	}

	usertype i = 0;
	usertype * headtemp = ptr->head;
	for(i = 0; i < ptr->count; i++)
		printf("%lu..",*(--headtemp));
	
}

LIFO_Status LIFO_Is_Empty (LIFO_Buff_t * ptr)
{
	if((ptr->count) == 0)
		return LIFO_EMPTY;
	return LIFO_NO_ERROR;
}
