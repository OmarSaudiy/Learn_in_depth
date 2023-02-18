   /*****************************************************************
    *[FILE NAME] 	: main.c						  				*
    *											  					*
    *[AUTHOR(S)]    : OmarAhmed					  	  				*
    *										        				*
    *[DATE CREATED] : Feb 18, 2023						  			*
    * 										  						*
    *[DECRIPTION]   : Swap Two Numbers 								*
    *****************************************************************/

#include <stdio.h>

int main(void)
{
	int num1 = 10, num2 = 20, temp = 0;
	printf("x = %d , y = %d \n", num1 , num2);
	temp = num1;
	num1 = num2;
	num2 = temp;
	printf("x = %d , y = %d \n", num1 , num2);

	return(0);
}
