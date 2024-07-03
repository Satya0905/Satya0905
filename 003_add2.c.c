//program to perform addition of two numbers
#include<stdio.h>
int main()
{
    int ha1,ha2,ha3;
    ha1=0;
    ha2=0;
    ha3=0;

    printf("\n-------------------------------------------------------");
    printf("\n\tProgram To Perform Addition Of Two Number");
    printf("\n-------------------------------------------------------\n\n");

    printf("Enter First No....:");
    scanf("%d",&ha1);
    printf("Enter Second No...:");
    scanf("%d",&ha2);

    ha3=ha1+ha2;
    printf("Sum Of 2 no's is..:%d",ha3);

    return 0;
}
