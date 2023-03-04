   /*****************************************************************
    *[FILE NAME] 	: main.c						  				*
    *											  					*
    *[AUTHOR(S)]    : OmarAhmed					  	  				*
    *										        				*
    *[DATE CREATED] : Mar 4, 2023						  			*
    * 										  						*
    *[DECRIPTION]   : 03 - Add Two Imaginary numbers 				*
    *****************************************************************/

#include <stdio.h>

struct S_Distance{
	int foot;
	int inch;
}distance[2];

int main(void)
{
	unsigned char i = 0;
	for(i = 0; i < 2; i++)
	{
		printf("Enter Real ,then imaginary of element[%d] = ",i);
		fflush(stdout);
		scanf("%d%d",&distance[i].foot,&distance[i].inch);
	}
	printf("%d + j%d ",(distance[0].foot + distance[1].foot ),(distance[0].inch + distance[1].inch));
	return 0;
}
