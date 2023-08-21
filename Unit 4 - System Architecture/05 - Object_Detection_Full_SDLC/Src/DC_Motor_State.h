   /*****************************************************************
    *[FILE NAME] 	: DC_Motor_State.h						  		*
    *											  					*
    *[AUTHOR(S)]    : OmarAhmed					  	  				*
    *										        				*
    *[DATE CREATED] : Mar 21, 2023						  			*
    * 										  						*
    *[DECRIPTION]   : DC_Motor_State   								*
    *****************************************************************/
#ifndef _DC_Motor_State_H_
#define _DC_Motor_State_H_
    
/*extern global Ptr to Function*/   
extern void (*DCM_State)(void);


/*MA State ID enum*/
enum
{
   DCM_init,DCM_Idle,Modify_Speed 
}DCM_State_ID;

/*State APIs Declaration*/
STATE_Define(DCM_init);
STATE_Define(DCM_Idle);
STATE_Define(Modify_Speed);



    
#endif