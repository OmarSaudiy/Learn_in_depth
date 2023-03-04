   /*****************************************************************
    *[FILE NAME] 	: main.c						  				*
    *											  					*
    *[AUTHOR(S)]    : OmarAhmed					  	  				*
    *										        				*
    *[DATE CREATED] : Mar 4, 2023						  			*
    * 										  						*
    *[DECRIPTION]   : 04 - Area of a circle using Macros 			*
    *****************************************************************/

#include<stdio.h>

#define PI 3.14

int main(void)
{
	unsigned short rad = 0;
	double  area = 0;
	printf("Enter Radius of the circle");
	fflush(stdout);
	scanf("%hu",&rad);
	area = PI * rad * rad ;
	printf("%lf",area);

	return 0;
}
