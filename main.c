#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<time.h>
#include"delay.h"
#include"sound.h"
#include"clock.c"
#include"timer.c"
#include"stopwatch.c"
#include"calender.c"

int main()
{
    int a;
    back:
    system("Color 0A");
    system("cls");
    printf("<-------------------------------------------------------------------------WELCOME");
    printf("-------------------------------------------------------------------------->\n");
    printf("1. Clock/World Clock\n");
    printf("2. Calender\n");
    printf("3. Timer\n");
    printf("4. Stopwatch\n");
    printf("5. EXIT\n");
    printf("Choose the function you want to use:-");
    scanf("%d", &a);
    
    switch(a)
    {
        case 1:
            clock_();
            system("cls");
            goto back;
        case 2:
            calendar();
            goto back;
        case 3:
            timer();
            goto back;
        case 4:   
            stopwatch();
            goto back;
        case 5:
            break;
        default:
            printf("INVALID Input!!\n");
            goto back;
    }
    
    return 0;
}