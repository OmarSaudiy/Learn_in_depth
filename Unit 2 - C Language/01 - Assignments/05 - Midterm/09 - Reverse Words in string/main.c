   /*****************************************************************
    *[FILE NAME] 	: main.c						  				*
    *											  					*
    *[AUTHOR(S)]    : OmarAhmed					  	  				*
    *										        				*
    *[DATE CREATED] : Mar 2, 2023						  			*
    * 										  						*
    *[DECRIPTION]   : 09 - Reverse Words in string 					*
    *****************************************************************/

#include<stdio.h>
#include<string.h>
#define SPACE 32
int main(void)
{
	char string[100], last = 0,i,spaceloc ;
	gets(string);
	spaceloc = strlen(string);
	last = spaceloc-1;
	while(spaceloc != 0)
	{
		if(string[spaceloc] == SPACE)
		{
			for(i = spaceloc+1 ;i <= last ; i++)
				printf("%c",string[i]);
			printf(" ");
			last = spaceloc - 1;

		}
		spaceloc--;
	}
	for(i = 0;i <= last;i++)
		printf("%c",string[i]);
	return 0;
}
