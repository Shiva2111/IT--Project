#include<stdio.h>
#include<conio.h>
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
        system("cls");
        ms++;
        if (ms==100)
        {
            ms=0;
            s=s+1;
        }
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
        printf("%d : %d : %d : %d ",h,m,s,ms);
        if (h==th && m==tm && s==ts && ms==0)
        {
            int i;
            for(i=0; i<=0; i--)
            {
                printf("*");
            }
            return 0;
        }
        

    }
    
}