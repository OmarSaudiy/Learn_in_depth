   /*****************************************************************
    *[FILE NAME] 	: US_Detection.h						  		*
    *											  					*
    *[AUTHOR(S)]    : OmarAhmed					  	  				*
    *										        				*
    *[DATE CREATED] : Mar 21, 2023						  			*
    * 										  						*
    *[DECRIPTION]   : US_Detection 								    *
    *****************************************************************/
#ifndef _US_Detection_H_
#define _US_Detection_H_

/*extern global Ptr to Function*/   
extern void(*US_State)(void);

/*US State ID enum*/
enum
{
   US_init,Measuring_Distance 
}US_State_ID;

/*State APIs Declaration*/
STATE_Define(US_init);
STATE_Define(Measuring_Distance);


#endif