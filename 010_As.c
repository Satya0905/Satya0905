//program to read full name,gender and native place of a person
//program name: 010_As.c

#include<stdio.h>
int main()
{
      char name[20],gender[2],native_place[20];

      printf("Enter ur full name...:");
      scanf("%s",name);

      printf("\nEnter ur gender...:");
      scanf("%s",gender);

      printf("Enter ur native place...:");
      scanf("%s",native_place);

      printf("%s %s %s",name,gender,native_place);

   return 0;
}

