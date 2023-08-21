   /*****************************************************************
    *[FILE NAME] 	: US_Detection.c						  		*
    *											  					*
    *[AUTHOR(S)]    : OmarAhmed					  	  				*
    *										        				*
    *[DATE CREATED] : Mar 21, 2023						  			*
    * 										  						*
    *[DECRIPTION]   : US_Detection 								    *
    *****************************************************************/
#include "stdio.h"
#include "Platform_Types.h"
#include "state.h"
#include "US_Detection.h"

/*global Ptr to Function*/   
void(*US_State)(void);

/*US Global Variables*/
uint32 US_distance;


STATE_Define(US_init)
{
    /*State ID -> US_init*/
    US_State_ID = US_init;

    /*Init Driver Module*/
    printf("Ultrasonic Initialized\n");

    /*go to Measuring_Distance State*/
    US_State = STATE(Measuring_Distance);
}

STATE_Define(Measuring_Distance)
{
    /*State ID -> Measuring_Distance*/
    US_State_ID = Measuring_Distance;

    /*Measure Distance*/
    US_distance = US_Get_Distance_Random(40,60,10);
    printf ("US_busy state : distance=%d \n" ,US_distance);

    /*Send US_get_Distance Signal*/
    US_get_Distance(US_distance);

    /*go to Measuring_Distance State*/
    US_State = STATE(Measuring_Distance);

}

int US_Get_Distance_Random (int l , int r , int count)
{
    /* Generate one(count) random number in the range [l:r] */
    int i,rand_num;
    for (i=0 ; i<count ; i++)
    {
        rand_num = (rand() % (r - l + 1 )) + l ;
    }
    return rand_num;
}
