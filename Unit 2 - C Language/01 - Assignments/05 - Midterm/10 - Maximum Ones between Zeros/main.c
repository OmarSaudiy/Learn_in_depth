   /*****************************************************************
    *[FILE NAME] 	: main.c						  				*
    *											  					*
    *[AUTHOR(S)]    : OmarAhmed					  	  				*
    *										        				*
    *[DATE CREATED] : Mar 2, 2023						  			*
    * 										  						*
    *[DECRIPTION]   : 10 - Maximum Ones between Zeros 				*
    *****************************************************************/

#include <stdio.h>

int Count_Max_Ones (int NUM);
int main (void)
{
	int NUM;
	printf("Enter a Number: ");
	fflush(stdout);
	scanf("%d", &NUM);
	printf("\nNumber Of Ones = %d\n",Count_Max_Ones(NUM));

	return 0;
}

int Count_Max_Ones (int NUM)
{
	int  C=0, Frame = 31, Ones=0 , Temp ;
	while (Frame >= 0)
	{
		Temp = NUM >> Frame;

		if (Temp & 1)
		{
			C++;
		}
		else
		{
			if(C>Ones)
			{
				Ones = C ;
				C = 0;
			}
			else
			{
				C=0;
			}
		}
		Frame--;
	}
	return Ones;
}
