   /*****************************************************************
    *[FILE NAME] 	: main.c						  				*
    *											  					*
    *[AUTHOR(S)]    : OmarAhmed					  	  				*
    *										        				*
    *[DATE CREATED] : Feb 25, 2023						  			*
    * 										  						*
    *[DECRIPTION]   : Search element in array 						*
    *****************************************************************/

#include<stdio.h>

int main(void)
{
	char unsigned i = 0;
	int arr[10] = {1,2,3,4,5,6,7,8,9,10} , n = 0;

	printf("Enter element to search");
	fflush(stdout);
	scanf("%d",&n);
	for(i = 0; i < 10; i++)
	{
		if(arr[i] == n)
		{
			printf("Found in location : %d",i+1);
			return 0;
		}
	}
	printf("Not Found");
	return 0;
}
