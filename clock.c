#include<stdio.h>
#include<conio.h>
#include "sound.h"
// World clock function calling.....
// selecting time zone and then starting the clock..
int main()
{
    int h=0,m=0,s=0,ms=0,t=1;
    while(t==1)
        {
            printf("Enter Start Hours:");
            scanf("%d",&h);
            printf("Enter Start Minute:");
            scanf("%d",&m);
            printf("Enter Start Seconds:");
            scanf("%d",&s);
            t--;
        }
    while (1)
    {
        Beep(5000, 2);
        delay(1);
        system("cls");
        s++;
        if (s==60)
        {
            s=0;
            m=m+1;
        }
        
        if (m==60)
        {
            m=0;
            h=h+1;
        }
        printf("Time :  ");  
        printf("%d : %d : %d ",h,m,s);
    }
}
