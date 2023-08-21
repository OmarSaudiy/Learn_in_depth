   /*****************************************************************
    *[FILE NAME]    : Student_Database_Linked_list.h                *
    *                                                               *
    *[AUTHOR(S)]    : Omar Ahmed                                    *
    *                                                               *
    *[DATE CREATED] : Aug 15, 2023                                  *
    *                                                               *
    *[DECRIPTION]   : Student Database Linked list                  *
    *****************************************************************/
extern struct Node *Head;

#ifndef _Linked_list_H_
#define _Linked_list_H_

void Add_Node(void);

void Delete_Node(void);

void View_Nodes(void);

void Get_Nth_Node(void);

void Get_Length_Recursive(struct Node *Head);

void Get_Nth_Node_From_End(void);

void Get_Middle_Node(void);

void Reverse_List(void);

void Delete_AllNodes(void);

#endif
