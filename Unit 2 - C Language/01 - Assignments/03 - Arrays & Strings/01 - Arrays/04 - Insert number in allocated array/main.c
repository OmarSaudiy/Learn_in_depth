   /*****************************************************************
    *[FILE NAME] 	: main.c						  				*
    *											  					*
    *[AUTHOR(S)]    : OmarAhmed					  	  				*
    *										        				*
    *[DATE CREATED] : Feb 25, 2023						  			*
    * 										  						*
    *[DECRIPTION]   : Insert number in allocated array 				*
    *****************************************************************/

#include <stdio.h>

int main(void)
{
	unsigned char i = 0;
	int arr[10] = {0,} ,value = 0,location = 0, N =0;
	printf("Enter N");
	fflush(stdout);
	scanf("%d",&N);
	for(i = 0; i < N; i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter Element value then location");
	fflush(stdout);
	scanf("%d %d",&value,&location);
	for(i = N; i >= location; i--)
	{
		arr[i] = arr[i-1];
	}
	arr[location - 1] = value;
	for(i = 0; i < N+1; i++)
	{
		printf("%d",arr[i]);

	}
	return 0;
}
