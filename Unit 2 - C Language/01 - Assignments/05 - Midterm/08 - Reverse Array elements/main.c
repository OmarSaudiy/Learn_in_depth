   /*****************************************************************
    *[FILE NAME] 	: main.c						  				*
    *											  					*
    *[AUTHOR(S)]    : OmarAhmed					  	  				*
    *										        				*
    *[DATE CREATED] : Mar 2, 2023						  			*
    * 										  						*
    *[DECRIPTION]   : 08 - Reverse Array elements 					*
    *****************************************************************/

#include<stdio.h>

int main(void)
{
	unsigned char i = 0, j = 0,n=0;
	printf("Enter Number of elements ");
	fflush(stdout);
	scanf("%d",&n);
	int arr[n],temp;
	printf("Enter elements of array\n");
	fflush(stdout);
	for(i =0; i<n;i++)
		scanf("%d",arr+i);
	for(i=0,j=n-1;(i < n/2);i++,j--)
	{
		temp   = arr[i];
		arr[i] = arr[j];
		arr[j] = temp  ;
	}
	for(i =0; i<n;i++)
		printf("%d ",arr[i]);

	return 0;
}
