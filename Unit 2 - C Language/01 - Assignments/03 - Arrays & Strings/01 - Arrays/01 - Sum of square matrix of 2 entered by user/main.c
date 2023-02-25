   /*****************************************************************
    *[FILE NAME] 	: main.c						  				*
    *											  					*
    *[AUTHOR(S)]    : OmarAhmed					  	  				*
    *										        				*
    *[DATE CREATED] : Feb 24, 2023						  			*
    * 										  						*
    *[DECRIPTION]   : Sum of square matrix of 2 entered by user 	*
    *****************************************************************/

#include <stdio.h>

int main(void)
{
	unsigned char i = 0,j = 0, k = 0;
	short Arr1[2][2] = {0,},Arr2[2][2] = {0,};
	for(i = 0; i < 2 ;i++)
	{
		for(j = 0; j < 2 ;j++)
		{
			for(k = 0; k < 2 ;k++)
			{
				printf("Enter Element Arr%d[%d][%d] :\n",i,j,k);
				fflush(stdout);
				switch(i)
				{
				case 0 : scanf("%hi",&Arr1[j][k]);break;
				case 1 : scanf("%hi",&Arr2[j][k]);break;
				}
			}

		}

	}
	printf("Arr1 + Arr2 \n\t%d\t%d\n\t%d\t%d ",Arr1[0][0]+Arr2[0][0] ,Arr1[0][1]+Arr2[0][1],Arr1[1][0]+Arr2[1][0],Arr1[1][1]+Arr2[1][1]);
	return 0;
}
