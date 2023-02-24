#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<windows.h>
void stopwatch()
{
    int h=0,m=0,s=0,ms=0;

    printf("Press 1 to start the stopwatch:-");
    int t;
    scanf("%d", &t);
    if(t==1){

    while (1)
    {
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
          
        printf("Time:%d : %d : %d\n Press any key to stop\n",h,m,s);
        if(kbhit()) 
        {
            break;
        }
    }
   }
    
}