   /*****************************************************************
    *[FILE NAME] 	: main.c						  				*
    *											  					*
    *[AUTHOR(S)]    : OmarAhmed					  	  				*
    *										        				*
    *[DATE CREATED] : Mar 2, 2023						  			*
    * 										  						*
    *[DECRIPTION]   : Sum of digits 								*
    *****************************************************************/

#include<stdio.h>
 int sumdigit(unsigned short x)
{
	static int sum = 0;
	unsigned short rem = 0;
	if(x != 0)
	{
		rem = x%10;
		sum += rem;
		sumdigit(x/10);
	}
	else
		return 0;
	return sum;
}
int main(void)
{
	unsigned short x = 0;
	int y =0;
	scanf("%hu",&x);
	y = sumdigit(x);
	printf("%d",y);

	return 0;
}
