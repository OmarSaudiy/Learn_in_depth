/*
 *<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<    main.c    >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
 *
 *  Author : Omar Ahmed Hassan
 *
 */ 

#include "Students_Database_Using_Queue.h"

#define STUDENTS_NUMBER 50

/***********************************************************************************************************************************************/

int main(void)
{
	/**************************************************************************/
	FIFO_Buf_st students_queue;
	FIFO_Node_st students_buffer[STUDENTS_NUMBER];
	
	/**************************************************************************/
	Students_DB_Init(&students_queue, students_buffer, STUDENTS_NUMBER);
	printf("\n================================================================================================================");
	printf("\n================================= Welcome to our Students DataBase =============================================");
	printf("\n================================= Author : Omar Ahmed Hassan     =============================================");
	printf("\n================================================================================================================");
	printf("\n\n");
	printf("\n================================================================================================================");
	printf("\n======================================== Refresh DataBase  =====================================================");
	printf("\n================================================================================================================");
	Add_Student_From_DataBase_File(&students_queue);
	printf("\n\n");
	
	/**************************************************************************/
	while(1)
	{
		printf("================================================================================================================\n");
		printf("\n Choose on of the following options \n");
		printf("\n\t 1:  Add Student Manually.");
		printf("\n\t 2:  Add Student From a Text File.");
		printf("\n\t 3:  Find Student by Roll Number.");
		printf("\n\t 4:  Find Student by First Name.");
		printf("\n\t 5:  Find Student by Course ID.");
		printf("\n\t 6:  Print The Students Number.");
		printf("\n\t 7:  Delete Student by Roll Number.");
		printf("\n\t 8:  Update Student by Roll Number.");
		printf("\n\t 9:  View All Students.");
		printf("\n\t 10: Exit The Program.");
		printf("\n============================================================================");
		printf("\n\n Enter an option number: ");
		
		int Choice;
		scanf("%d",&Choice);
		printf("============================================================================\n");
		switch(Choice)
		{
			case 1: Add_Student_Manualy(&students_queue);
					printf("\n================================================================================================================");
					printf("\n=============================================== Done ===========================================================");
					printf("\n================================================================================================================");
					printf("\n\n");
					break;
			case 2: Add_Student_From_File(&students_queue);
					printf("\n================================================================================================================");
					printf("\n=============================================== Done ===========================================================");
					printf("\n================================================================================================================");
					printf("\n\n");
					break;
			case 3: Find_Student_by_Roll_Number_Number(&students_queue);
					printf("\n================================================================================================================");
					printf("\n=============================================== Done ===========================================================");
					printf("\n================================================================================================================");
					printf("\n\n");
					break;
			case 4: Find_Student_by_FirstName(&students_queue);
					printf("\n================================================================================================================");
					printf("\n=============================================== Done ===========================================================");
					printf("\n================================================================================================================");
					printf("\n\n");
					break;
			case 5: Find_Student_by_Course(&students_queue);
					printf("\n================================================================================================================");
					printf("\n=============================================== Done ===========================================================");
					printf("\n================================================================================================================");
					printf("\n\n");
					break;
			case 6: Print_Students_Count(&students_queue);
					printf("\n================================================================================================================");
					printf("\n=============================================== Done ===========================================================");
					printf("\n================================================================================================================");
					printf("\n\n");
					break;
			case 7: Delete_Student_by_Roll_Number(&students_queue);
					printf("\n================================================================================================================");
					printf("\n=============================================== Done ===========================================================");
					printf("\n================================================================================================================");
					printf("\n\n");
					break;
			case 8: Update_Student_by_Roll_Number(&students_queue);
					printf("\n================================================================================================================");
					printf("\n=============================================== Done ===========================================================");
					printf("\n================================================================================================================");
					printf("\n\n");
					break;
			case 9: Show_Students_Info(&students_queue);
					printf("\n================================================================================================================");
					printf("\n=============================================== Done ===========================================================");
					printf("\n================================================================================================================");
					printf("\n\n");
					break;
			case 10:Update_DataBase_Students(&students_queue);
					printf("\n================================================================================================================");
					printf("\n=============================================== Exit ===========================================================");
					printf("\n================================================================================================================");
					printf("\n\n");
					return 0;
			default:printf("\n Invalid Option ... Try Again ... \n\n");
					break;
		}
	}
	return 0;
}
