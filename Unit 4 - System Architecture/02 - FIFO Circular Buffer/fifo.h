   /*****************************************************************
    *[FILE NAME] 	: fifo.h						  				*
    *											  					*
    *[AUTHOR(S)]    : Omar Ahmed					  	  			*
    *										        				*
    *[DATE CREATED] : Aug 15, 2023						  			*
    * 										  						*
    *[DECRIPTION]   : Circulator FIFO Buffer 						*
    *****************************************************************/


#ifndef _FIFO_H_
#define _FIFO_H_

/*Select prefered size element [ Xint8,Xint16,Xint32 or Xint64    X  = [u,vu and s ]]*/
#define usertype uint32



typedef struct{

    usertype * base;
    usertype * head;
    usertype * tail;
    uint32 length;
    uint32 count;


}FIFO_Buff_t;

typedef enum 
{
    FIFO_NOT_INIT = 0,
    FIFO_NO_ERROR,
    FIFO_FULL,
    FIFO_EMPTY  
}FIFO_Status;


FIFO_Status FIFO_Init (FIFO_Buff_t * ptr,usertype * buffer,uint64 length);
FIFO_Status FIFO_PushElement (FIFO_Buff_t * ptr,usertype* temp);
FIFO_Status FIFO_PopElement (FIFO_Buff_t * ptr,usertype* temp);
FIFO_Status FIFO_PrintElements (FIFO_Buff_t * ptr);
FIFO_Status FIFO_Is_Empty (FIFO_Buff_t * ptr);


#endif