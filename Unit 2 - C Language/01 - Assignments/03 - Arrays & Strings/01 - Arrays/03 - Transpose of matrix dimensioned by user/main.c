   /*****************************************************************
    *[FILE NAME] 	: main.c						  				*
    *											  					*
    *[AUTHOR(S)]    : OmarAhmed					  	  				*
    *										        				*
    *[DATE CREATED] : Feb 24, 2023						  			*
    * 										  						*
    *[DECRIPTION]   : Transpose of matrix dimensioned by user		*
    *****************************************************************/

#include <stdio.h>

int main(void)
{
	unsigned int i = 0, j = 0, row = 0,column = 0;
	int arr[10][10] = {0,};
	printf("Enter row and column");
	fflush(stdout);
	scanf("%d%d",&row,&column);
	for(i = 0; i < row; i++)
	{
		for(j = 0; j < column; j++)
		{
			printf("Enter Arr[%d][%d] : ",i,j);
			fflush(stdout);
			scanf("%d",&arr[i][j]);
		}
		printf("\n");
	}
	for(i = 0; i < column; i++)
	{
		for(j = 0; j < row; j++)
		{
			printf("Arr[%d][%d] = %d\n",i,j,arr[j][i]);
		}
		printf("\n");
	}
	return 0;
}
