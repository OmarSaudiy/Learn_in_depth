   /*****************************************************************
    *[FILE NAME] 	: main.c						  				*
    *											  					*
    *[AUTHOR(S)]    : OmarAhmed					  	  				*
    *										        				*
    *[DATE CREATED] : Feb 18, 2023						  			*
    * 										  						*
    *[DECRIPTION]   : Calculator of 4 Operations 					*
    *****************************************************************/

#include <stdio.h>

int main(void)
{
	char op = 0;
	int num1 = 0 , num2 = 0 ;
	printf("Enter + , - , * or /\n");
	fflush(stdout);
	scanf("%c",&op);
	printf("Enter 2 Operands");
	scanf("%d%d",&num1,&num2);
	switch(op)
	{
	case '+' : printf(" %d + %d = %d",num1,num2,(num1 + num2));break;
	case '-' : printf(" %d - %d = %d",num1,num2,(num1 - num2));break;
	case '*' : printf(" %d * %d = %d",num1,num2,(num1 * num2));break;
	case '/' : printf(" %d / %d = %f",num1,num2,((float)num1 / num2));break;
	default  : printf(" Wrong Operation Symbol");

	}


	switch(op)
	return(0);
}
