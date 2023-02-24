   /*****************************************************************
    *[FILE NAME] 	: main.c						  				*
    *											  					*
    *[AUTHOR(S)]    : OmarAhmed					  	  				*
    *										        				*
    *[DATE CREATED] : Feb 18, 2023						  			*
    * 										  						*
    *[DECRIPTION]   : Even or Odd Check 							*
    *****************************************************************/

#include <stdio.h>

int main(void)
{
	int num = 0;
	scanf("%d",&num);
	((num / 2.0)==(num / 2))?printf("%d is even",num):printf("%d is odd",num);

	return(0);
}
