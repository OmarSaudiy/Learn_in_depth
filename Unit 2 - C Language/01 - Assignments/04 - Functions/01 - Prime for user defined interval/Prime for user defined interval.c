   /*****************************************************************
    *[FILE NAME] 	: Prime for user defined interval.c				*
    *											  					*
    *[AUTHOR(S)]    : OmarAhmed					  	  				*
    *										        				*
    *[DATE CREATED] : Feb 26, 2023						  			*
    * 										  						*
    *[DECRIPTION]   : Prime for user defined interval				*
    *****************************************************************/


#include <stdio.h>
#include <math.h>

void prime(int,int);

int main(void)
{
	unsigned int first = 0,last = 0; /*Prime cant be negative */
	scanf("%d%d",&first ,&last);
	prime(first,last);
	return 0;
}

void prime(int first,int last)
{
	unsigned int i = 0;
	if(first > last)				 /* grantee that first < second */
	{
		first = first ^ last;
		last  = first ^ last;
		first = first ^ last;
	}
	if(first == 2)
		printf("2 ");
	for(  ; first <= last ; first++)
	{
		int root = pow(first,0.5) + 1; /* added one because the minimum possible value of pow = 1 so i need to grantee the following loop will iterate*/
		for( i = 2 ; i <= root ; i++)
		{
			if(first % i == 0)
				break;
			if(i == root)
				printf("%d ",first);
		}
	}
}

