#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<time.h>
void timer()
{
    int h=0,m=0,s=0,ms=0;
    int th,tm,ts,t=1;
    system("cls");
    printf("<-------------------------------------------------------------------------TIMER");
    printf("---------------------------------------------------------------------------->\n");
        while(t==1)
        {
            printf("Enter Hours:");
            scanf("%d",&th);
            printf("Enter Minute:");
            scanf("%d",&tm);
            printf("Enter Seconds:");
            scanf("%d",&ts);
             if (ts>=60)
        {
            ts=ts-60;
            tm=tm+1;
        }
        
        if (tm>=60)
        {
            tm=tm-60;
            th=th+1;
        }
        if(th>=24)
        {
            th = th - 24;
        }
            t--;
        }
    while (1)
    {
        delay(1);
        system("cls");
       s++;
       Beep(5000, 2);
        if (s>=60)
        {
            s=s-60;
            m=m+1;
        }
        if(s<0)
        {
            s=s+60;
            m=m-1;
        }
        if (m>=60)
        {
            m=m-60;
            h=h+1;
        }
        if(m<0)
        {
            m=m+60;
            h=h-1;
        }
        if(h>=24)
        {
            h = h - 24;
        }
        else if(h<0)
        {
            h=h+24;
        }
        printf("<--------------------------------------------------------------------Time :  ");  
        printf("%d : %d : %d-------------------------------------------------------------------->",h,m,s);
        if (h==th && m==tm && s==ts)
        {
        
            printf("\nPress any key to stop the timer...");
            
            delay(1);
            sd();
            
            return;
            


        }
            
        
        

    }
    
}
