   /*****************************************************************
    *[FILE NAME]    : main.c                                        *
    *                                                               *
    *[AUTHOR(S)]    : Omar Ahmed                                    *
    *                                                               *
    *[DATE CREATED] : Aug 15, 2023                                  *
    *                                                               *
    *[DECRIPTION]   : Main for testing SDLL                         *
    *****************************************************************/

#include "stdio.h"
#include "string.h"
#include "stdlib.h"
#include "conio.h"
#include "Platform_Types.h"
#include "Linked_list.h"
#include "Linked_List_Config.h"

#define DPRINTF(...)  	{fflush(stdout);\
						 fflush(stdin);\
						printf(__VA_ARGS__);\
						fflush(stdout);\
						 fflush(stdin);}

extern struct Node *Head;


int main(void)
{

    uint8 choice[2] ;
    while(1)
    {
    	DPRINTF("\n------------------------------------\n");
		DPRINTF("Choose One of the following Options :- \n");
    	DPRINTF(" 1 --> Add_Node");
    	DPRINTF("\n 2 --> Delete_Node");
    	DPRINTF("\n 3 --> View_Nodes");
    	DPRINTF("\n 4 --> Get_Nth_Node");
    	DPRINTF("\n 5 --> Get_Length_Recursive");
    	DPRINTF("\n 6 --> Get_Nth_Node_From_End");
    	DPRINTF("\n 7 --> Get_Middle_Node");
    	DPRINTF("\n 8 --> Reverse_List");
    	DPRINTF("\n 9 --> Delete_AllNodes");
    	DPRINTF("\n 10--> Exit");
    	DPRINTF("\n------------------------------------\n");

        gets(choice);
        switch(atoi(choice))
        {
        case 1: Add_Node(); break;
        case 2: Delete_Node(); break;
        case 3: View_Nodes(); break;
        case 4: Get_Nth_Node(); break;
        case 5: Get_Length_Recursive(Head);break;
        case 6: Get_Nth_Node_From_End(); break;
        case 7: Get_Middle_Node(); break;
        case 8: Reverse_List(); break;
        case 9: Delete_AllNodes(); break;
        case 10:exit(0);
        default:DPRINTF("\nWrong Choice..Try Again!");break;
        }
    }

    return  0;
}
