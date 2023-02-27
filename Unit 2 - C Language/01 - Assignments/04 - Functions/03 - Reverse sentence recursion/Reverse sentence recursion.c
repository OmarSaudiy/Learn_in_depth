   /*****************************************************************
    *[FILE NAME] 	:  Reverse sentence recursion.c					*
    *											  					*
    *[AUTHOR(S)]    : OmarAhmed					  	  				*
    *										        				*
    *[DATE CREATED] : Feb 27, 2023						  			*
    * 										  						*
    *[DECRIPTION]   :  Reverse sentence recursion					*
    *****************************************************************/


#include <stdio.h>
#include <string.h>

void reverse(unsigned char *,unsigned);


int main(void)
{
	unsigned char length = 0,string[100]={0,};
	gets(string);
	length = strlen(string);
	reverse(string,length);

	return 0;
}

void reverse(unsigned char * base,unsigned length)
{
	printf("%c",base[--length]);
	if(length == 0)
		return;
	reverse(base,length);
}
