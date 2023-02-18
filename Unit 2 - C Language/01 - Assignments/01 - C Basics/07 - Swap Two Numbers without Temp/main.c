   /*****************************************************************
    *[FILE NAME] 	: main.c						  				*
    *											  					*
    *[AUTHOR(S)]    : OmarAhmed					  	  				*
    *										        				*
    *[DATE CREATED] : Feb 18, 2023						  			*
    * 										  						*
    *[DECRIPTION]   : Swap Two Numbers without Temp 				*
    *****************************************************************/

#include <stdio.h>

int main(void)
{
	int num1 = 10, num2 = 20;
	printf("x = %d , y = %d \n", num1 , num2);
	num1 = num1 ^ num2;
	num2 = num1 ^ num2;
	num1 = num1 ^ num2;
	printf("x = %d , y = %d \n", num1 , num2);

	return(0);
}
