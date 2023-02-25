   /*****************************************************************
    *[FILE NAME] 	: main.c							  			*
    *											  					*
    *[AUTHOR(S)]    : OmarAhmed					  	  				*
    *										        				*
    *[DATE CREATED] : 24,feb						  				*
    * 										  						*
    *[DECRIPTION]   : Average of ONLY Positive n numbers 			*
    *****************************************************************/

#include <stdio.h>

int main(void)
{
	unsigned char count = 0 , i = 0 ;
	float num = 0;
	double average = 0;
	printf("Enter Count n :");
	fflush(stdout);
	scanf("%d",&count);
	for(i = 0; i < count; i++)
	{
		scanf("%f", &num);
		if(num < 0)
			break;
		average += num;
	}
	printf("average = %lf",average);
	return 0;
}
