//program name: 018_As.c
#include<stdio.h>
int main()
{
    int pm,lm;
    float tu;
    const float U=7.85;
    printf("Enter The present month electricity Bill...:");
    scanf("%d",&pm);
    printf("Enter The last month electricity Bill...:");
    scanf("%d",&lm);
    tu=(pm+lm)/U;
    printf("the total units in last months and present month...:%f",tu);
    return 0;
}
