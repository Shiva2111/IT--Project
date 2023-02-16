#include<stdio.h>
#include<conio.h>
#include"sound.h"
int main()
{
    int h=0,m=0,s=0,ms=0;
    int th,tm,ts,tms,t=1;
        while(t==1)
        {
            printf("Enter Hours:");
            scanf("%d",&th);
            printf("Enter Minute:");
            scanf("%d",&tm);
            printf("Enter Seconds:");
            scanf("%d",&ts);
            t--;
        }
    while (1)
    {
        delay(1);
        system("cls");
       s++;
       Beep(5000, 2);
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
        if(h>=24)
        {
            h = h - 24;
        }
        printf("Time :  ");  
        printf("%d : %d : %d",h,m,s);
        if (h==th && m==tm && s==ts)
        {
            printf("\nPress Ctrl+C to stop the timer...");
            sd();
            return 0;
        }
        

    }
    
}
