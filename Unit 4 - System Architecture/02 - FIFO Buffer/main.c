   /*****************************************************************
    *[FILE NAME]    : main.c                                        *
    *                                                               *
    *[AUTHOR(S)]    : Omar Ahmed                                    *
    *                                                               *
    *[DATE CREATED] : Aug 15, 2023                                  *
    *                                                               *
    *[DECRIPTION]   : Circulator  FIFO Buffer                       *
    *****************************************************************/

#include "stdio.h"
#include "Platform_Types.h"
#include "fifo.h"

usertype buff1[5];
FIFO_Buff_t UART_FIFO;

int main(void)
{
    usertype i = 0;

if(FIFO_Init(&UART_FIFO, buff1, 5) == FIFO_NO_ERROR)
    printf("FIFO Buffer is Initialized\n");

for(i = 0; i < 7; i++)
{
    if(FIFO_PushElement(&UART_FIFO,&i) == FIFO_NO_ERROR)
    {
        printf("%lu..",i);
    }
    else if(FIFO_PushElement(&UART_FIFO,&i) == FIFO_FULL)
    {
        printf("FULL..");
    }
    else if(FIFO_PushElement(&UART_FIFO,&i) == FIFO_NOT_INIT)
    {
        printf("FIFO Buffer is Not Initialized\n");
    }
}

for(i = 0; i < 2; i++)
{
    usertype temp;
    if(FIFO_PopElement(&UART_FIFO,&temp) == FIFO_NO_ERROR)
    {
        printf("%lu..",temp);
    }
    else if(FIFO_PopElement(&UART_FIFO,&temp) == FIFO_EMPTY)
    {
        printf("Empty..");
    }
    else if(FIFO_PopElement(&UART_FIFO,&temp) == FIFO_NOT_INIT)
    {
        printf("FIFO Buffer is Not Initialized\n");
    }

}

FIFO_PrintElements(&UART_FIFO);

while(1);

    return 0;
}