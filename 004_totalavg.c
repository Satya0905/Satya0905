#include <stdio.h>
int main()
{
    //variable declaration and intializatin
    int c,cpp,java;
    float tot,avg;
    c=cpp=tot=avg=0;


    //input
    printf("Enter Marks for C Language:");
    scanf("%d",&c);


    printf("Enter Marks for CPP Language:");
    scanf("%d",&cpp);


    printf("Enter Marks for Java Language:");
    scanf("%d",&java);

    //Business Logic
    tot=c+cpp+java;

    //output
    printf("\nTotal is:%.0f",tot);
    printf("\nAverage is:%.2f%%",avg);

    return 0;
}
