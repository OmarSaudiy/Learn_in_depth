   /*****************************************************************
    *[FILE NAME]    : Linked_List_Config.h                          *
    *                                                               *
    *[AUTHOR(S)]    : Omar Ahmed                                    *
    *                                                               *
    *[DATE CREATED] : Aug 15, 2023                                  *
    *                                                               *
    *[DECRIPTION]   : Node Configuration for Linked List            *
    *****************************************************************/

#ifndef _Linked_List_Config_H_
#define _Linked_List_Config_H_

/*User can  configure his Data Node As Prefered*/

struct Node{

	struct{

		uint32 ID;
		uint8 Name[40];
		float32 Height;
	}Data;

	struct Node * NxNode;
};


#endif