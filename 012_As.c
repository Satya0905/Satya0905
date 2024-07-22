//program to read capital alphabets from the user
//program name: 012_As.c

#include<stdio.h>
int main()
{
  char uppercase,lowercase;
  int ascii;
  printf("Enter an upper-case character: ");
  scanf("%c",&uppercase);
  ascii=uppercase;
  lowercase=ascii+32;
  printf("\n Its lower case=%c",lowercase);
  getch();
  return 0;
}

