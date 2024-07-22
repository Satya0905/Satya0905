//program to read bill amount and balance amount
//program name: 003_As.c

#include<stdio.h>
int main()
{
    int TB,CP,BR;
    TB=CP=BR=0;

    printf("Input");
    printf("\nEnter the Total Bill Amount          :");
    scanf("%d",& TB);
    printf("\nEnter the Amount Paid by the Customer:");
    scanf("%d",& CP);

    BR=CP-TB;

    printf("\n\nOutput");
    printf("\nBalance Amount to be Returned is:%d",BR);
    return 0;
}
