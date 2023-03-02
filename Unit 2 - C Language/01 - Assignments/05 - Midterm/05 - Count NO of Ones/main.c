   /*****************************************************************
    *[FILE NAME] 	: main.c						  				*
    *											  					*
    *[AUTHOR(S)]    : OmarAhmed					  	  				*
    *										        				*
    *[DATE CREATED] : Mar 2, 2023						  			*
    * 										  						*
    *[DECRIPTION]   : 05 - Count NO of Ones 						*
    *****************************************************************/

#include <stdio.h>

int main(void)
{
	unsigned char i = 0,count = 0;
	short x = 0;
	scanf("%hi",&x);
	for(;i<32;i++)
	{
		if(1 & (x>>i))
			count++;
	}
	printf("%d",count);
	return 0;
}
