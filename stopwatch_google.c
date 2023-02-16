#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>

char button;
int minutes=0, seconds=0, millisec=0;

int main(void)
{
    while(1)
    {
        reset:
        button = '\0';
        int minutes=0, seconds=0, millisec=0;
        printf("  %d :  %d :  %d ", minutes, seconds, millisec);
        system("cls");
        if(button == 'a')
        {
            while(1)
            {
                cont:
                button = '\0';
                Sleep(10);
                millisec++;
                if(millisec == 100)
                {
                    millisec = 0;
                    seconds++;
                    if(seconds == 60)
                    {
                        seconds = 0;
                        minutes++;
                    }
                }
                printf("  %d :  %d :  %d ", minutes, seconds, millisec);
                system("cls");
                if(button == 's')
                {
                    while(1)
                    {
                        button = '\0';
                        printf("  %d :  %d :  %d ", minutes, seconds, millisec);
                        system("cls");
                        if(button == 'a')
                        {
                            goto cont;
                        }
                        if(button == 'd')
                        {
                            goto reset;
                        }
                    }
                }
            }
        }
    }
}