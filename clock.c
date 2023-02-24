#include<stdio.h>
#include<conio.h>

// first, taking current time from user and his time zone.

// World clock function calling.....
// selecting the required time zone and paassing the time and printing it.
// selecting time zone and then starting the clock..
void clock_()
{
    int k,n;
    int h=0,m=0,s=0;
    system("cls");
    printf("\t\t\t1.Clock\t\t\t\t\t\t\t\t\t\t\t2.World Clock\n\n");
    printf("\t\t\t\t\t\t\tChoose the function you want:");
  scanf("%d", &k);
  system("cls");

  switch(k)
  {
    case 1:
  
    printf("<--------------------------------------------------------------------------CLOCK");
    printf("--------------------------------------------------------------------------->\n");
    printf("Enter the time in 24 hour format ONLY!!\n");
            printf("Enter Current Hours:-");
            scanf("%d",&h);
            printf("Enter Current Minute:-");
            scanf("%d",&m);
            printf("Enter Current Seconds:-");
            scanf("%d",&s);

            
    while (1)
    {
        Beep(5000, 2);
        delay(1);
        system("cls");
        s++;
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
        printf("<-------------------------------------------------------------------Time :  ");  
        printf("%d : %d : %d------------------------------------------------------------------->",h,m,s);
        printf("\nPress any key to stop:-\n");
        if(kbhit()){
          return;
        }
    }
    break;
    case 2:
  //input from user about his time zone and his current time.
  //then aksing the time zone in which he want to see the time.
  //then displaying the time.
  printf("<----------------------------------------------------------------------WORLD CLOCK");
    printf("------------------------------------------------------------------------->\n");
  printf("1.Home(Gandhinagar)\n");        //GMT+5.30
  printf("2.Paris\n");                    //GMT+1.00
  printf("3.Moscow\n");                   //GMT+3.00
  printf("4.Dubai\n");                    //GMT+4.00
  printf("5.Sydney\n");                   //GMT+11.00
  printf("6.Berlin\n");                   //GMT+1.00
  printf("7.Beijing\n");                   //GMT+8.00
  printf("8.New York\n");                 //GMT-5.00
  printf("9.London\n");                   //GMT+0.00
  printf("10.Barbados\n");                //GMT-4.00

  printf("Enter The Your Time Zone:-");
  scanf("%d",&n);
   printf("Enter Current Hours:");
            scanf("%d",&h);
            printf("Enter Current Minute:");
            scanf("%d",&m);
            printf("Enter Current Seconds:");
            scanf("%d",&s);
  switch (n)
  {
  case 1:
    h-=5;
    m-=30;
    s+=0;
    break;
  case 2:
    h-=1;
    m-=0;
    s+=0;
    break;
  case 3:
    h-=3;
    m+=0;
    s+=0;
    break;
  case 4:
    h-=4;
    m+=0;
    s+=0;
    break;
  case 5:
    h-=11;
    m+=0;
    s+=0;
    break;
  case 6:
    h-=1;
    m+=0;
    s+=0;
    break;
  case 7:
    h-=8;
    m+=0;
    s+=0;
    break;
  case 8:
    h+=5;
    m-=0;
    s-=0;
    break;
  case 9:
    h+=0;
    m+=0;
    s+=0;
    break;
  case 10:
    h+=4;
    m-=0;
    s-=0;
    break;
  default:
  printf("Wrong Input");
    break;
  }
  
    printf("1.Home(Gandhinagar)\n");        //GMT+5.30
  printf("2.Paris\n");                    //GMT+1.00
  printf("3.Moscow\n");                   //GMT+3.00
  printf("4.Dubai\n");                    //GMT+4.00
  printf("5.Sydney\n");                   //GMT+11.00
  printf("6.Berlin\n");                   //GMT+1.00
  printf("7.Beijing\n");                   //GMT+8.00
  printf("8.New York\n");                 //GMT-5.00
  printf("9.London\n");                   //GMT+0.00
  printf("10.Barbados\n");                //GMT-4.00
  printf("Enter the time zone you want to see the time in:-");
  scanf("%d",&k);
  switch (k)
  {
  case 1:
    h+=5;
    m+=30;
    s+=0;
    break;
  case 2:
    h+=1;
    m+=0;
    s+=0;
    break;
  case 3:
    h+=3;
    m+=0;
    s+=0;
    break;
  case 4:
    h+=4;
    m+=0;
    s+=0;
    break;
  case 5:
    h+=11;
    m+=0;
    s+=0;
    break;
  case 6:
    h+=1;
    m+=0;
    s+=0;
    break;
  case 7:
    h+=8;
    m+=0;
    s+=0;
    break;
  case 8:
    h-=5;
    m-=0;
    s-=0;
    break;
  case 9:
    h+=0;
    m+=0;
    s+=0;
    break;
  case 10:
    h-=4;
    m-=0;
    s-=0;
    break;
  
  default:
  printf("Wrong Input");
    break;
  }
  while (1)
    {
        Beep(5000, 2);
        delay(1);
        system("cls");
        s++;
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
        printf("<-------------------------------------------------------------------Time :  ");  
        printf("%d : %d : %d------------------------------------------------------------------->",h,m,s);
        printf("\nPress any key to stop:-\n");
        if(kbhit()){
          return;
        }
    }
    default:
            printf("INVALID Input!!\n");
            return;
  }
}


