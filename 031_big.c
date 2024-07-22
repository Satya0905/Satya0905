//Example on nested if
#include <stdio.h>
int main()
{
    int a,b,c,big;
    a=b=c=big=0;

    printf("Enter First No:");
    scanf("%d",&a);

    printf("Enter Second No:");
    scanf("%d",&b);

    printf("Enter Third No:");
    scanf("%d",&c);

    if(a>b)
        if(a>c)
            big=a;
        else
            big=c;
    else
            if(b>c)
                big=b;
            else
                big=c;

    printf("Biggest is...:%d",big);
   return 0;
}
