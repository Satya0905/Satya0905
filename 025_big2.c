#include<stdio.h>
int main()
{
    int a,b;
    a=b=0;

    printf("Enter First No:");
    scanf("%d",&a);

    printf("Enter Second No:");
    scanf("%d",&b);

    if(a>b)
        printf("Biggest No is:%d",a);
    else
        printf("Biggest No is:%d",b);

    return 0;
}
