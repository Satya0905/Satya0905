#include<stdio.h>
int main()

{
   //e,s,m,p,c,t,a are english,sanskrit,maths,physics,chemistry,total,average
   int e,s,m,p,c,t,a;
   e=s=m=p=c=t=a=0;
   printf ("marks of english");
   scanf("%d",&e);
   printf("marks of sanskrit");
   scanf("%d",&s);
   printf("marks of maths");
   scanf("%d",&m);
   printf("enter marks of physics");
   scanf("%d",&p);
   printf("enter marks of chemistry");
   scanf("%d",&c);
   t=e+s+m+p+c;
   a=t/5;
   printf("avg of total sub %d\n,a");
   printf("the total marks is:%d\n,t");

}
