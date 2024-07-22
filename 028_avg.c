#include<stdio.h>
int main()
{
    float avg=0;

    printf("Enter Average Marks:");
    scanf("%f",&avg);

    if(avg>=60)
        printf("First Class");
    else
         if(avg>=50)
            printf("Second Class");
         else
             if(avg>=40)
                printf("Third Class");
             else
                   printf("Failed");

    return 0;
}
