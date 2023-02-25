   /*****************************************************************
    *[FILE NAME] 	: main.c						  				*
    *											  					*
    *[AUTHOR(S)]    : OmarAhmed					  	  				*
    *										        				*
    *[DATE CREATED] : Feb 25, 2023						  			*
    * 										  						*
    *[DECRIPTION]   : Reverse String 								*
    *****************************************************************/

#include <stdio.h>

int main(void)
{
	char string[100] = {0,} , length = 0,len = 0, i = 0 ,temp = 0;
	puts("Enter String");
	fflush(stdout);
	gets(string);
	while(string[length] != '\0')
		length++;
	len = length;
	for(i = 0, length--; i < length/2; i++,length--)
	{
		temp = string[i];
		string[i] = string[length];
		string[length] = temp;
	}
	string[len] = '\0';
	printf("%s",string);
	return 0;
}

