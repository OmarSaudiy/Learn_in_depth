   /*****************************************************************
    *[FILE NAME] 	: main.c						  				*
    *											  					*
    *[AUTHOR(S)]    : OmarAhmed					  	  				*
    *										        				*
    *[DATE CREATED] : Feb 24, 2023						  			*
    * 										  						*
    *[DECRIPTION]   : Average of N numbers using arrays 			*
    *****************************************************************/

#include <stdio.h>

int main(void)
{
	unsigned char i = 0, N = 0;
	int arr[10] = {0,};
	float average = 0;
	printf("Enter N : ");
	fflush(stdout);
	scanf("%d",&N);
	for(i = 0; i < N; i++)
	{
		printf("Enter num%d :",i+1);
		fflush(stdout);
		scanf("%d",arr+i);
		average += *(arr+i);
	}
	printf("%f",average/N);
	return 0;
}
