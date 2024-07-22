//program name: 015_As.c
#include<stdio.h>
int main()
{
  int a,b,c,d,e,f;
  printf("Enter the value of a..:");
  scanf("%d",&a);
  printf("Enter the value of b...:");
  scanf("%d",&b);
  c=a*a;
  d=2*a*b;
  e=b*b;
  f=c+d+e;
  printf("(a+b)^2=%d",f);
  return 0;
}

