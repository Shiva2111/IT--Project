#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<windows.h>
int main()
{
    int h=0,m=0,s=0,ms=0;

    printf("Press any key to start the stopwatch.");
    kbhit();
    while (1)
    {

        system("cls");

        
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
          
        printf("Time:%d : %d : %d : %d \n Press any key to stop",h,m,s,ms);
        if(kbhit()) 
        {
            break;
        }
    }
    
}