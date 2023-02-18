   /*****************************************************************
    *[FILE NAME] 	: main.c						  				*
    *											  					*
    *[AUTHOR(S)]    : OmarAhmed					  	  				*
    *										        				*
    *[DATE CREATED] : Feb 18, 2023						  			*
    * 										  						*
    *[DECRIPTION]   : Character is Alphabet Check 					*
    *****************************************************************/

#include <stdio.h>

int main(void)
{
	char alphabet = 0;
	scanf("%c", &alphabet);
	if(( 'A' <= alphabet &&  alphabet <= 'Z') || ( 'a' <= alphabet && alphabet <= 'z'))
	{
		printf("Alphabet Character");
	}
	else
	{
		printf("Non-alphabet Character");
	}
	return(0);
}
