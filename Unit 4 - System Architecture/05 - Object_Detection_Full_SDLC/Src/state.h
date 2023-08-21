   /*****************************************************************
    *[FILE NAME] 	: state.h						  		        *
    *											  					*
    *[AUTHOR(S)]    : OmarAhmed					  	  				*
    *										        				*
    *[DATE CREATED] : Mar 21, 2023						  			*
    * 										  						*
    *[DECRIPTION]   : State 								        *
    *****************************************************************/
#ifndef _state_H_
#define _state_H_
    


#define STATE_Define(_STATE_)   void ST_##_STATE_(void)
#define STATE(_STATE_)    ST_##_STATE_




/*Connection Between BSW Modules*/

void US_get_Distance(uint32 distance);
void DC_Motor(uint32 DC_State);


    
#endif
