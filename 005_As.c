//program to read basic salary of an employee
//program name: 005_As.c

#include<stdio.h>
int main()
{
     int basic,hra,da,pf,gs,ns;
     basic=hra=da=pf=gs=ns=0;

     printf("Enter basic salary:");
     scanf("%d",&basic);

     printf("Enter HRA:");
     scanf("%d",&hra);

     printf("Enter DA:");
     scanf("%d",&da);

     printf("Enter PF:");
     scanf("%d",&pf);

     gs=basic+hra+da;
     ns=gs-pf;

     printf("\nGross Salary:%d",gs);
     printf("\nNet Salary:%d",ns);
     printf("\n");

   return 0;
}
