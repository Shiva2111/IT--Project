#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<time.h>
#include"delay.h"
#include"sound.h"
#include"clock.c"
#include"timer.c"
#include"stopwatch.c"
#include"calendar.c"

int main()
{
    int a;
    back:
    system("Color 0A");
    system("cls");
    printf("<-----------------------------------------------------------------------WELCOME!!!");
    printf("------------------------------------------------------------------------->\n\n");
    printf("\t\t\t1. Clock/World Clock\t\t\t\t\t\t\t\t2. Calendar\n\n");
    printf("\t\t\t3. Timer\t\t\t\t\t\t\t\t\t4. Stopwatch\n\n");
    printf("\t\t\t\t\t\t\t\t\t5. EXIT\n\n");
    printf("\t\t\t\t\t\t\tChoose the function you want to use:-");
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
            break;
    }
    
    return 0;
}