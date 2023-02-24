#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<windows.h>
void stopwatch()
{
    int h=0,m=0,s=0,ms=0;
    system("cls");
    printf("<-----------------------------------------------------------------------STOPWATCH");
    printf("-------------------------------------------------------------------------->\n");
    printf("Press 1 to start the stopwatch:-");
    int z;
    scanf("%d", &z);
    if(z==1){

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
          
        printf("<--------------------------------------------------------------------Time :  ");  
        printf("%d : %d : %d-------------------------------------------------------------------->\n",h,m,s);
        printf("Press any key to stop:-");
        if(kbhit()) 
        {
            goto time;
        }
    }
    
   }
   time:
   
            system("cls");
            printf("<--------------------------------------------------------------------Time :  ");  
            printf("%d : %d : %d-------------------------------------------------------------------->\n",h,m,s);
            printf("Press 1 to return:-");
            int q;
            scanf("%d", &q);
            if(q==1){
                return;
            }
            else{
                return;
            }
        
    
}