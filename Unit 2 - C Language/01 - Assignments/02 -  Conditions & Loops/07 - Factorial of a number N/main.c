   /*****************************************************************
    *[FILE NAME] 	: main.c						  				*
    *											  					*
    *[AUTHOR(S)]    : OmarAhmed					  	  				*
    *										        				*
    *[DATE CREATED] : Feb 18, 2023						  			*
    * 										  						*
    *[DECRIPTION]   : Factorial of a number N 						*
    *****************************************************************/

#include <stdio.h>

int main(void)
{
	short n = 0, i = 1;
	long long fac = 1 ;
	scanf("%hi",&n);
	if(n > 0)
	{
		for(; i <= n; i++)
		{
			fac *= i;
		}
		printf("Factorial of '%hi' = %ld",n,fac);
	}
	else
	{
		(n == 0)?printf("Factorial of '0' = 1"):(printf("Error Negative Number"));
	}
	return(0);
}
