#include<stdio.h>
#include<conio.h>
void main(int *ph,int *pm,int *ps)
{
  int n;
  printf("The City Available Are:-");
  printf("1.Home(Gandhinagar)");        //GMT+5.30
  printf("2.Paris");                    //GMT+1.00
  printf("3.Moscow");                   //GMT+3.00
  printf("4.Dubai");                    //GMT+4.00
  printf("5.Sydney");                   //GMT+11.00
  printf("6.Berlin");                   //GMT+1.00
  printf("7.Bejing");                   //GMT+8.00
  printf("8.New York");                 //GMT-5.00
  printf("9.London");                   //GMT+0.00
  printf("10.Barbados");                //GMT-4.00
  printf("Enter The Whose Time You Want See:-");
  scanf("%d",&n);
  switch (n)
  {
  case 1:
    *ph+=5;
    *pm+=30;
    *ps+=0;
    break;
  case 2:
    *ph+=1;
    *pm+=0;
    *ps+=0;
    break;
  case 3:
    *ph+=3;
    *pm+=0;
    *ps+=0;
    break;
  case 4:
    *ph+=4;
    *pm+=0;
    *ps+=0;
    break;
  case 5:
    *ph+=11;
    *pm+=0;
    *ps+=0;
    break;
  case 6:
    *ph+=1;
    *pm+=0;
    *ps+=0;
    break;
  case 7:
    *ph+=8;
    *pm+=0;
    *ps+=0;
    break;
  case 8:
    *ph-=5;
    *pm-=0;
    *ps-=0;
    break;
  case 9:
    *ph+=0;
    *pm+=0;
    *ps+=0;
    break;
  case 10:
    *ph-=4;
    *pm-=0;
    *ps-=0;
    break;
  
  default:
  printf("Wrong Input");
    break;
  }
}