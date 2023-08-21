   /*****************************************************************
    *[FILE NAME] 	: DC_Motor_State.c						  		*
    *											  					*
    *[AUTHOR(S)]    : OmarAhmed					  	  				*
    *										        				*
    *[DATE CREATED] : Mar 21, 2023						  			*
    * 										  						*
    *[DECRIPTION]   : DC_Motor_State   								*
    *****************************************************************/
#include "stdio.h"
#include "Platform_Types.h"
#include "state.h"
#include "DC_Motor_State.h"

/*global Ptr to Function*/   
void (*DCM_State)(void);

/*MA Global Variables*/
uint32 DCM_speed = 0;
uint32 DC_Motor_State;


STATE_Define(DCM_init)
{
    /*State ID -> DCM_init*/
    DCM_State_ID = DCM_init;
	printf ("DC_Init\n");

    /*go to DCM_Idle State*/
    DCM_State = STATE(DCM_Idle);
}

STATE_Define(DCM_Idle)
{
    /*State ID -> DCM_Idle*/
    DCM_State_ID = DCM_Idle;

    /*Loop Until Receive DC_Motor Signal */
    DCM_State = STATE(DCM_Idle);
}

STATE_Define(Modify_Speed)
{
    /*State ID -> Check_Distance*/
    DCM_State_ID = Modify_Speed;

    /*Check Distance*/
    (DC_Motor_State == 1)?(DCM_speed = 30):(DCM_speed = 0);
	printf ("Modify_Speed state : speed=%d \n",DCM_speed );

    /*Back to Idle State*/
    DCM_State = STATE(DCM_Idle);
}

void DC_Motor(uint32 DC_State)
{
    DC_Motor_State = DC_State;
	printf ("MA----> DCM : DC_State=%d \n",DC_Motor_State );
    DCM_State = STATE(Modify_Speed);

}
