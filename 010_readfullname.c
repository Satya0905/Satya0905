//program to read a name and display the same
//program name: 010_readfullname.c

#include<stdio.h>
int main()
{
    char name[100];
    printf("Heyy Enter ur name...:");
    scanf("%[^\n]",&name);

    printf("Hello %s,Welcom to C Language classes",name);

    return 0;
}

