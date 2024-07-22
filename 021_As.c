//program name: 021_As.c
#include<stdio.h>
int main()
{
   int tb,tip,nf,op;
   printf("Enter total bill amount...:");
   scanf("%d",&tb);
   printf("Enter the TIP...:");
   scanf("%d",&tip);
   printf("Enter total number of friends...:");
   scanf("%d",&nf);
   op=(tb+tip)/nf;
   printf("Each one have to pay rs.%d",op);
   return 0;
}
