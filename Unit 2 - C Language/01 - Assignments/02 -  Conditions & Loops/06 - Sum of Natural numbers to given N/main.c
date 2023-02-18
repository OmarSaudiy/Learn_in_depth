   /*****************************************************************
    *[FILE NAME] 	: main.c						  				*
    *											  					*
    *[AUTHOR(S)]    : OmarAhmed					  	  				*
    *										        				*
    *[DATE CREATED] : Feb 18, 2023						  			*
    * 										  						*
    *[DECRIPTION]   : Sum of Natural numbers to given N 			*
    *****************************************************************/

#include <stdio.h>

int main(void)
{
	unsigned char N = 0, i = 0; /* N has to be of interval [0 : 255] --> 1 Byte*/
	unsigned long   sum = 0 ;
	scanf("%d",&N);
	/*Method 1 */
	printf("Sum of Natural numbers for interval [0 :%d] = %d\n",N,(( N * ( N + 1 ) ) / 2 ));
	/*Method 2 */
	for( i = 1;i <= N;i++ )
	{
		sum+=i;
	}
	printf("Sum of Natural numbers for interval [0 :%d] = %ld",N,sum);

	return(0);
}
