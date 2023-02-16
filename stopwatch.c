#include<stdio.h>
#include<conio.h>
int main()
{
    int h=0,m=0,s=0,ms=0;

    printf("Time:  ");
    while (1)
    {
        
        ms++;
        if (ms==60)
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
          
        printf("%d : %d : %d : %d \n",h,m,s,ms);

    }
    
}