   /*****************************************************************
    *[FILE NAME] 	: main.c						  				*
    *											  					*
    *[AUTHOR(S)]    : OmarAhmed					  	  				*
    *										        				*
    *[DATE CREATED] : Mar 2, 2023						  			*
    * 										  						*
    *[DECRIPTION]   : 06 -  Unique element in array 				*
    *****************************************************************/

#include <stdio.h>



void main ()
{
	int i,n;
	scanf  ("%i" ,&n);
	int Arr[n],NUM ;
	for(i=0 ; i<n ; i++)
	{

		scanf  ("%i" ,&Arr[i]);
	}

	NUM = Arr[0];

	for(i=1 ; i<n ; i++)
	{
		NUM ^= Arr[i];
	}


	printf("The unrepeated element is %i",NUM);
}
