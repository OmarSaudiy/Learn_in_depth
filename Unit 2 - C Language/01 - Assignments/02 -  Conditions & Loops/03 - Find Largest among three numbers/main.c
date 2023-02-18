   /*****************************************************************
    *[FILE NAME] 	: main.c						  				*
    *											  					*
    *[AUTHOR(S)]    : OmarAhmed					  	  				*
    *										        				*
    *[DATE CREATED] : Feb 18, 2023						  			*
    * 										  						*
    *[DECRIPTION]   : Find Largest among three numbers 				*
    *****************************************************************/

#include <stdio.h>

int main(void)
{
	int num1 = 0,num2 = 0,num3 = 0;
	scanf("%d%d%d",&num1,&num2,&num3);
	int max = num1;
	if(num2 >= max)
	{
		max = num2;
	}
	if(num3 >= max)
	{
		max = num3;
	}
	printf("largest among %d ,%d and %d is  %d",num1,num2,num3,max);
	return(0);
}
