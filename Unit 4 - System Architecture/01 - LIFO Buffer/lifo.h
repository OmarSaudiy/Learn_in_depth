   /*****************************************************************
    *[FILE NAME] 	: lifo.h						  				*
    *											  					*
    *[AUTHOR(S)]    : Omar Ahmed					  	  			*
    *										        				*
    *[DATE CREATED] : Aug 14, 2023						  			*
    * 										  						*
    *[DECRIPTION]   : LIFO Buffer 									*
    *****************************************************************/


#ifndef _LIFO_H_
#define _LIFO_H_

/*Select prefered size element [ Xint8,Xint16,Xint32 or Xint64    X  = [u,vu and s ]]*/
#define usertype uint32



typedef struct{

    usertype * base;
    usertype * head;
    uint32 length;
    uint32 count;


}LIFO_Buff_t;

typedef enum 
{
    LIFO_NOT_INIT = 0,
    LIFO_NO_ERROR,
    LIFO_FULL,
    LIFO_EMPTY  
}LIFO_Status;


LIFO_Status LIFO_Init (LIFO_Buff_t * ptr,usertype * buffer,uint64 length);
LIFO_Status LIFO_PushElement (LIFO_Buff_t * ptr,usertype* temp);
LIFO_Status LIFO_PopElement (LIFO_Buff_t * ptr,usertype* temp);
LIFO_Status LIFO_PrintElements (LIFO_Buff_t * ptr);
LIFO_Status LIFO_Is_Empty (LIFO_Buff_t * ptr);


#endif