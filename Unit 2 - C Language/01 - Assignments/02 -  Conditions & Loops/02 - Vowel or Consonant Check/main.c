   /*****************************************************************
    *[FILE NAME] 	: main.c						  				*
    *											  					*
    *[AUTHOR(S)]    : OmarAhmed					  	  				*
    *										        				*
    *[DATE CREATED] : Feb 18, 2023						  			*
    * 										  						*
    *[DECRIPTION]   : Vowel or Consonant Check 						*
    *****************************************************************/

#include <stdio.h>

int main(void)
{
	char alphabet = 0;
	scanf("%c", &alphabet);
	if(( 'A' <= alphabet &&  alphabet <= 'Z') || ( 'a' <= alphabet && alphabet <= 'z'))
	{
		if((alphabet == 'a')|| (alphabet == 'A') || (alphabet == 'i') || (alphabet == 'I') || (alphabet == 'e') || (alphabet == 'E') || (alphabet == 'o') || (alphabet == 'O') || (alphabet == 'u') || (alphabet == 'U'))
		{
			printf("%c is Vowel", alphabet);
		}
		else
		{
			printf("%c is consonant", alphabet);
		}
	}
	else
	{
		printf("Non-alphabet Character");
	}
	return(0);
}
