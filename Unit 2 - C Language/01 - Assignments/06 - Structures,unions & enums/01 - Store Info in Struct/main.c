   /*****************************************************************
    *[FILE NAME] 	: main.c						  				*
    *											  					*
    *[AUTHOR(S)]    : OmarAhmed					  	  				*
    *										        				*
    *[DATE CREATED] : Mar 4, 2023						  			*
    * 										  						*
    *[DECRIPTION]   : 01 - Store Info in Struct 					*
    *****************************************************************/

#include <stdio.h>
#include <string.h>
struct Students{
	unsigned char name[20];
	unsigned int roll;
	unsigned int marks;
}student;

int main(void)
{

	printf("Enter Student Name : ");
	fflush(stdout);
	gets(student.name);
	printf("Enter Student roll and marks : ");
	fflush(stdout);
	scanf("%d%d",&student.roll,&student.marks);
	fflush(stdout);
	printf("Student Name : %s  \nroll : %d  \nmarks : %d",student.name,student.roll,student.marks);


	return 0;
}
