   /*****************************************************************
    *[FILE NAME] 	: main.c						  				*
    *											  					*
    *[AUTHOR(S)]    : OmarAhmed					  	  				*
    *										        				*
    *[DATE CREATED] : Feb 25, 2023						  			*
    * 										  						*
    *[DECRIPTION]   : Length of string manually 					*
    *****************************************************************/

#include <stdio.h>

int main(void)
{
	char string[100] = {0,} , i = 0;
	puts("Enter String");
	fflush(stdout);
	gets(string);
	while(string[i] != '\0')
	i++;
	printf("%d",i);
	return 0;
}
