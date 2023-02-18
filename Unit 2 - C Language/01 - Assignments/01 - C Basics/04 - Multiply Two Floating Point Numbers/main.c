   /*****************************************************************
    *[FILE NAME] 	: main.c						  				*
    *											  					*
    *[AUTHOR(S)]    : OmarAhmed					  	  				*
    *										        				*
    *[DATE CREATED] : Feb 18, 2023						  			*
    * 										  						*
    *[DECRIPTION]   : Multiply Two Floating Point Numbers 			*
    *****************************************************************/

#include <stdio.h>

int main(void)
{
	float num1 = 20.5, num2 = 20.5;
	double result = num1 * num2;
	printf("%.2f * %.2f = %.3lf", num1, num2, result);

	return(0);
}
