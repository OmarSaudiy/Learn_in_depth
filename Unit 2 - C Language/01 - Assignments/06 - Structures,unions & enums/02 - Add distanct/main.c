   /*****************************************************************
    *[FILE NAME] 	: main.c						  				*
    *											  					*
    *[AUTHOR(S)]    : OmarAhmed					  	  				*
    *										        				*
    *[DATE CREATED] : Mar 4, 2023						  			*
    * 										  						*
    *[DECRIPTION]   : 02 - Add distanct 							*
    *****************************************************************/

#include <stdio.h>

struct S_Distance{
	int foot;
	int inch;
}distance[2];

int main(void)
{
	unsigned char i = 0;
	int overflow = 0;

	for(i = 0; i < 2; i++)
	{
		printf("Enter distance of element[%d] Foot , Inch :",i);
		fflush(stdout);
		scanf("%d%d",&distance[i].foot,&distance[i].inch);
	}
	for(i = 0; (distance[0].inch + distance[1].inch) >= 12; i++)
	{
		overflow++;
		distance[0].inch -= 12;
	}
	printf("%d'%d\" ",(distance[0].foot + distance[1].foot + overflow),(distance[0].inch + distance[1].inch));
	return 0;
}
