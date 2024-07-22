#include<stdio.h>
int main()
{
    int age=0;
    const int VOTING_AGE=18;

    printf("Enter Ur Age:");
    scanf("%d",&age);

    if(age>=18)
    {
        printf("Ur Eligible for Voting...");
    }
    else
    {
        printf("Ur Not Eligible for Voting...");
        printf("\nHEyy Buddy u have wait %d years for Voting...",VOTING_AGE-age);
    }
    return 0;
}
