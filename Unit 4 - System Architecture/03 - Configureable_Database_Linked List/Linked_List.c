   /*****************************************************************
    *[FILE NAME]    : Student_Database_Linked_list.c                *
    *                                                               *
    *[AUTHOR(S)]    : Omar Ahmed                                    *
    *                                                               *
    *[DATE CREATED] : Aug 15, 2023                                  *
    *                                                               *
    *[DECRIPTION]   : Student Database Linked list                  *
    *****************************************************************/

#include "stdio.h"
#include "stdlib.h"
#include "conio.h"
#include "string.h"
#include "Platform_Types.h"
#include "Linked_list.h"
#include "Linked_List_Config.h"


#define DPRINTF(...)  	{fflush(stdout);\
						 fflush(stdin);\
						printf(__VA_ARGS__);\
						fflush(stdout);\
						 fflush(stdin);}



struct Node * Head = NULL_PTR;


static void Fill_Data_To_Node(struct Node * NewNode);

void Add_Node(void)
{
    struct Node * Temp = Head;
    struct Node * NewNode = (struct Node *) malloc(sizeof(struct Node));
    if(!NewNode)
    {
        DPRINTF("\nHeap Segmentaion Error");
        return;
    }
    if(!Head)
    {
        Head = NewNode;
        NewNode->NxNode = NULL_PTR;
        Fill_Data_To_Node(NewNode);

    }
    else
    {
        while(Temp->NxNode)
        {
            Temp = Temp->NxNode;
        }
        Temp->NxNode = NewNode;
        NewNode->NxNode = NULL_PTR;
        Fill_Data_To_Node(NewNode);

    }

}

void Delete_Node(void)
{
    uint32 D_ID;
    DPRINTF("\nEnter Student ID to be deleted :");
    scanf("%d",&D_ID);
    if(!Head)
    {
        DPRINTF("\nList Is Already Empty");
        return;
    }
    else
    {
        struct Node * Temp = Head;
        struct Node * Previous = NULL_PTR;
        if(Head->Data.ID == D_ID)
        {
        	free(Head);
        	Head = NULL_PTR;
        	return;
        }
        while(Temp->Data.ID != D_ID)
        {
            if(!Temp->NxNode)
            {
                DPRINTF("\nNo Student With ID : %d",D_ID);
                return;
            }
            Previous = Temp;
            Temp = Temp->NxNode;
        }

        Previous->NxNode = Temp->NxNode;
        free(Temp);

    }
}

void View_Nodes(void)
{
	uint32 counter = 1;
    struct Node * Temp = Head;
    if(!Head)
    {
        DPRINTF("\nList Is Already Empty");
    	return;
    }
    while(Temp)
    {
    	DPRINTF("\n------------------------------------\n");
        DPRINTF("\nNode[%d] Student ID : %d",counter,Temp->Data.ID);
        DPRINTF("\nNode[%d] Student Name : %s",counter,Temp->Data.Name);
        DPRINTF("\nNode[%d] Student Height : %.2f",counter,Temp->Data.Height);
    	DPRINTF("\n------------------------------------\n");
    	Temp = Temp->NxNode;
        counter++;
    }
}

void Get_Nth_Node(void)
{
    if(!Head)
    {
        DPRINTF("\nList Is Already Empty");
    	return;
    }
    uint32 Node,Counter = 1;
    struct Node * Temp = Head;
    DPRINTF("\nEnter Student Node Number :");
    scanf("%d",&Node);
    while(Counter != Node)
    {
    	if(!Temp)
    	{
            DPRINTF("\nList Is Smaller that %d",Node);
        	return;
    	}
    	Temp = Temp->NxNode;
    	Counter++;
    }
	DPRINTF("\n------------------------------------\n");
    DPRINTF("\nNode[%d] Student ID : %d",Counter,Temp->Data.ID);
    DPRINTF("\nNode[%d] Student Name : %s",Counter,Temp->Data.Name);
    DPRINTF("\nNode[%d] Student Height : %.2f",Counter,Temp->Data.Height);
	DPRINTF("\n------------------------------------\n");
} 

void Get_Length_Recursive(struct Node * Head)
{
	struct Node * Temp = Head;
    uint32 static Counter = 0;
    if(!Head && !Counter)
    {
        DPRINTF("\nList Is Already Empty");
    	return;
    }
    if(!Head && Counter )
    {
    	DPRINTF("\nList has %d Nodes",Counter);
    	return;
    }
    Counter++;
    Temp = Temp->NxNode;
    Get_Length_Recursive(Temp);
}

void Get_Nth_Node_From_End(void)
{
    if(Head == NULL_PTR)
    {
        DPRINTF("\nList Is Already Empty");
    	return;
    }
    struct Node * Temp = Head;
    struct Node * PreviousByNth = Head;
    uint32 NodeFromEnd = 0,Counter = 0;
    DPRINTF("\nEnter Node Needed From End :");
    scanf("%d",&NodeFromEnd);
    while(Temp)
    {
    	Counter++;
    	Temp = Temp->NxNode;
    	if(Counter >= NodeFromEnd+1)
    		PreviousByNth = PreviousByNth->NxNode;
    }
    if(!Temp && Counter < NodeFromEnd)
    {
        DPRINTF("\nList Is Smaller that %d",NodeFromEnd);
    	return;
    }
	DPRINTF("\n------------------------------------\n");
    DPRINTF("\nNode[%d] Student ID : %d",Counter-NodeFromEnd+1,PreviousByNth->Data.ID);
    DPRINTF("\nNode[%d] Student Name : %s",Counter-NodeFromEnd+1,PreviousByNth->Data.Name);
    DPRINTF("\nNode[%d] Student Height : %.2f",Counter-NodeFromEnd+1,PreviousByNth->Data.Height);
	DPRINTF("\n------------------------------------\n");

}

void Get_Middle_Node(void)
{
    if(Head == NULL_PTR)
    {
        DPRINTF("\nList Is Already Empty");
    	return;
    }
    struct Node * Temp = Head;
    struct Node * MiddleNode = Head;
    uint32 Counter = 1;
    while(Temp)
    {
    	if(!(Temp->NxNode))
        	break;
    	Counter++;
    	Temp=Temp->NxNode->NxNode;
    	MiddleNode=MiddleNode->NxNode;
    }
	DPRINTF("\n------------------------------------\n");
    DPRINTF("\nNode[%d] Student ID : %d",Counter,MiddleNode->Data.ID);
    DPRINTF("\nNode[%d] Student Name : %s",Counter,MiddleNode->Data.Name);
    DPRINTF("\nNode[%d] Student Height : %.2f",Counter,MiddleNode->Data.Height);
	DPRINTF("\n------------------------------------\n");
}

void Reverse_List(void)
{

}

void Delete_AllNodes(void)
{
	if(Head == NULL_PTR)
	{
		DPRINTF("\nList Is Already Empty");
		return;
	}
	if(Head->NxNode == NULL_PTR)
	{
		free(Head);
		return;
	}
    struct Node * Temp = Head;
	while(Temp != NULL_PTR)
	{
		struct Node * Temp2 = Temp;
		Temp = Temp->NxNode;
		free(Temp2);
	}
	Head = Temp;
} 



static void Fill_Data_To_Node(struct Node * NewNode)
{
	uint8 temp[20];
    DPRINTF("\nEnter Student ID :");
    gets(temp);
    NewNode->Data.ID = atoi(temp);
    DPRINTF("\nEnter Student Name :");
    NewNode->Data.Name[0]= 'O';
    gets(NewNode->Data.Name);
    DPRINTF("\nEnter Student Height :");
    gets(temp);
    NewNode->Data.Height = atof(temp);
}
