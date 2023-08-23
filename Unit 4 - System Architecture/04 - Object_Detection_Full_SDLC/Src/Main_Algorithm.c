   /*****************************************************************
    *[FILE NAME] 	: Main_Algorithm.c						  		*
    *											  					*
    *[AUTHOR(S)]    : OmarAhmed					  	  				*
    *										        				*
    *[DATE CREATED] : Mar 21, 2023						  			*
    * 										  						*
    *[DECRIPTION]   : Main_Algorithm   								*
    *****************************************************************/
#include "stdio.h"
#include "Platform_Types.h"
#include "state.h"
#include "Main_Algorithm.h"

/*global Ptr to Function*/   
void (*MA_State)(void);

/*MA Global Variables*/
uint32 MA_distance = 0;
uint32 threshold = 50;
enum{
	OFF,ON
};

STATE_Define(MA_Idle)
{
    /*State ID -> MA_Idle*/
    MA_State_ID = MA_Idle;

    /*Loop Until Receive US_get_Distance Signal */
    MA_State = STATE(MA_Idle);
}


STATE_Define(Check_Distance)
{
    /*State ID -> Check_Distance*/
    MA_State_ID = Check_Distance;

    /*Check Distance*/
	printf ("Check_Distance state : distance=%d \n" ,MA_distance);
    (MA_distance > threshold)?DC_Motor(ON):DC_Motor(OFF);

    /*Back to Idle State*/
    MA_State = STATE(MA_Idle);
}

void US_get_Distance(uint32 distance)
{
    MA_distance = distance;
	printf ("US ---------- distance=%d ----------> MA\n" ,MA_distance);
    MA_State = STATE(Check_Distance);

}
