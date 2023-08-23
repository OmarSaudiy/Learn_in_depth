   /*****************************************************************
    *[FILE NAME]    : main.c                                        *
    *                                                               *
    *[AUTHOR(S)]    : OmarAhmed                                     *
    *                                                               *
    *[DATE CREATED] : Mar 21, 2023                                  *
    *                                                               *
    *[DECRIPTION]   : Main                                          *
    *****************************************************************/
#include "stdio.h"
#include "Platform_Types.h"
#include "state.h"
#include "DC_Motor_State.h"
#include "Main_Algorithm.h"
#include "US_Detection.h"


void setup(void);



int main(void)
{
    uint32 volatile delay1,delay;
    setup();

    while(1)
    {
        US_State();
        MA_State();
        DCM_State();
        for(delay1 = 0; delay1 < 5000;delay1++)
        	for(delay = 0; delay < 5000;delay++);
    }

    return 0;
}




void setup(void)
{
    US_State = STATE(US_init);
    MA_State = STATE(MA_Idle);
    DCM_State = STATE(DCM_init);
}
