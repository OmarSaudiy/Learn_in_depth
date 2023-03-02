   /*****************************************************************
    *[FILE NAME] 	: main.c						  				*
    *											  					*
    *[AUTHOR(S)]    : OmarAhmed					  	  				*
    *										        				*
    *[DATE CREATED] : Mar 2, 2023						  			*
    * 										  						*
    *[DECRIPTION]   : 04 - Reverse Digits 							*
    *****************************************************************/

#include <stdio.h>
#define FAILURE -1

int sumdigit(unsigned short x)
{
	unsigned short rem = 0;
	if(x != 0)
	{
		rem = x%10;
		printf("%hu",rem);
		sumdigit(x/10);
	}
	else
		return 0;
	return FAILURE;
}

int main(void)
{
	unsigned short x = 0;
	scanf("%hu",&x);
	sumdigit(x);
	return 0;
}
