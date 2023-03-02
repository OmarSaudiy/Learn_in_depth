   /*****************************************************************
    *[FILE NAME] 	: main.c						  				*
    *											  					*
    *[AUTHOR(S)]    : OmarAhmed					  	  				*
    *										        				*
    *[DATE CREATED] : Mar 2, 2023						  			*
    * 										  						*
    *[DECRIPTION]   : 07 - Sum of natural numbers between  Interval *
    *****************************************************************/

#include <stdio.h>

int main(void)
{
	int x =0 ,y = 0;
	printf("Enter Interval lowest ,highest:");
	fflush(stdout);
	scanf("%d%d",&x,&y);

	printf("%d",((y*(y+1)/2)-(x*(x+1)/2))+x);
	return 0;
}
