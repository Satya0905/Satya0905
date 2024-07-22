//program to days from users
//program name: 008_As.c

#include<stdio.h>
int main()
{
     int td,y,m,d;

     printf("Enter the number of days....:");
     scanf("%d",&td);

     y=td/365;
     m=(td%365)/30;
     d=(td%365)%30;

     printf("years....:%d\n",y);
     printf("months....:%d\n",m);
     printf("days....:%d\n",d);

  return 0;
}

