   /*****************************************************************
    *[FILE NAME]    : main.c                                        *
    *                                                               *
    *[AUTHOR(S)]    : Omar Ahmed                                    *
    *                                                               *
    *[DATE CREATED] : Aug 14, 2023                                  *
    *                                                               *
    *[DECRIPTION]   : LIFO Buffer                                   *
    *****************************************************************/

#include "stdio.h"
#include "Platform_Types.h"
#include "lifo.h"

usertype buff1[5];
LIFO_Buff_t UART_LIFO;

int main(void)
{
    usertype i = 0;

if(LIFO_Init(&UART_LIFO, buff1, 5) == LIFO_NO_ERROR)
    printf("LIFO Buffer is Initialized\n");

for(i = 0; i < 7; i++)
{
    if(LIFO_PushElement(&UART_LIFO,&i) == LIFO_NO_ERROR)
    {
        printf("%lu..",i);
    }
    else if(LIFO_PushElement(&UART_LIFO,&i) == LIFO_FULL)
    {
        printf("FULL..");
    }
    else if(LIFO_PushElement(&UART_LIFO,&i) == LIFO_NOT_INIT)
    {
        printf("LIFO Buffer is Not Initialized\n");
    }
}

for(i = 0; i < 2; i++)
{
    usertype temp;
    if(LIFO_PopElement(&UART_LIFO,&temp) == LIFO_NO_ERROR)
    {
        printf("%lu..",temp);
    }
    else if(LIFO_PopElement(&UART_LIFO,&temp) == LIFO_EMPTY)
    {
        printf("Empty..");
    }
    else if(LIFO_PopElement(&UART_LIFO,&temp) == LIFO_NOT_INIT)
    {
        printf("LIFO Buffer is Not Initialized\n");
    }

}

LIFO_PrintElements(&UART_LIFO);

while(1);

    return 0;
}