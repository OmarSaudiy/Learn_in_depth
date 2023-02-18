   /*****************************************************************
    *[FILE NAME] 	: main.c						  				*
    *											  					*
    *[AUTHOR(S)]    : OmarAhmed					  	  				*
    *										        				*
    *[DATE CREATED] : Feb 18, 2023						  			*
    * 										  						*
    *[DECRIPTION]   : Positive or Negative Check 					*
    *****************************************************************/

#include <stdio.h>

int main(void)
{
	int num = 0;
	scanf("%d",&num);
	/*Method 1*/
	((num) > (num * -1))?printf("Positive\n"):printf("Negative\n");
	/*Method 2*/
	(num >> 31)?printf("Negative"):printf("Positive"); /* General form : 31 --> (sizeof(num)*8 - 1)*/
	return(0);
}
