   /*****************************************************************
    *[FILE NAME] 	: Factorial recursion.c						  	*
    *											  					*
    *[AUTHOR(S)]    : OmarAhmed					  	  				*
    *										        				*
    *[DATE CREATED] : Feb 27, 2023						  			*
    * 										  						*
    *[DECRIPTION]   : Factorial recursion							*
    *****************************************************************/


#include <stdio.h>
long long fac (int);
int main(void)
{
	unsigned int N = 0;
	scanf("%d",&N);
	printf("%ld",fac(N));

	return 0;
}

long long fac (int N)
{
	if(N == 1)
		return 1;
	return N * fac(N-1);
}
