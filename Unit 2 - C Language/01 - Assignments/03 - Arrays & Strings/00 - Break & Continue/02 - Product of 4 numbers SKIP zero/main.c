   /*****************************************************************
    *[FILE NAME] 	: main.c						  				*
    *											  					*
    *[AUTHOR(S)]    : OmarAhmed					  	  				*
    *										        				*
    *[DATE CREATED] : Feb 24, 2023						  			*
    * 										  						*
    *[DECRIPTION]   : Product of 4 numbers SKIP zero 				*
    *****************************************************************/

#include <stdio.h>

int main(void)
{
	char unsigned i = 0;
	int num[4] = {0,};
	long long product = 1;
	for( i = 0; i < 4; i++)
	{
	scanf("%d",(num + i));
	if(num[i] == 0)
		continue;
	product *= num[i];
	}
	printf("%ld",product);

	return 0;
}
