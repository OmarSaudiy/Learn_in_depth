   /*****************************************************************
    *[FILE NAME] 	: main.c						  				*
    *											  					*
    *[AUTHOR(S)]    : OmarAhmed					  	  				*
    *										        				*
    *[DATE CREATED] : Feb 25, 2023						  			*
    * 										  						*
    *[DECRIPTION]   : Frequency of a character in a string			*
    *****************************************************************/

#include <stdio.h>

int main(void)
{
	char string[20] , character = 0, count = 0 , i = 0;
	printf("Enter String\n");
	fflush(stdout);
	gets(string);
	scanf("%c",&character);
	for(i = 0; string[i] != '\0';i++)
	{
		if(string[i] == character)
		{
			count++;
		}

	}
	printf("Letter %c  count = %d ",character,count);
	return 0;
}
