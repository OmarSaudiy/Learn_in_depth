   /*****************************************************************
    *[FILE NAME] 	: Calculate power recursion.c					*
    *											  					*
    *[AUTHOR(S)]    : OmarAhmed					  	  				*
    *										        				*
    *[DATE CREATED] : Feb 27, 2023						  			*
    * 										  						*
    *[DECRIPTION]   : Calculate power recursion						*
    *****************************************************************/


#include <stdio.h>
double pow (float,int);
int main(void)
{
	int power = 0;
	float base = 0;
	scanf("%f %d",&base,&power);
	printf("%f ^ %d = %lf",base,power,pow(base,power));

	return 0;
}

double pow (float base,int power)
{
	if (power == 0)
		return 1;
	return base * pow(base,--power);
}
