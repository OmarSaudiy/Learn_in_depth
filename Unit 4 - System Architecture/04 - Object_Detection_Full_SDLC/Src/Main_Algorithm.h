   /*****************************************************************
    *[FILE NAME]    : Main_Algorithm.h                              *
    *                                                               *
    *[AUTHOR(S)]    : OmarAhmed                                     *
    *                                                               *
    *[DATE CREATED] : Mar 21, 2023                                  *
    *                                                               *
    *[DECRIPTION]   : Main_Algorithm                                *
    *****************************************************************/
#ifndef _Main_Algorithm_H_
#define _Main_Algorithm_H_


/*extern global Ptr to Function*/   
extern void (*MA_State)(void);


/*MA State ID enum*/
enum
{
   MA_Idle,Check_Distance 
}MA_State_ID;

/*State APIs Declaration*/
STATE_Define(MA_Idle);
STATE_Define(Check_Distance);



    
#endif