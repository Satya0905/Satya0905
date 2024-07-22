//program to read the temperature in fahrenheit and convert into centigrade
//program name: 013_As.c
#include<stdio.h>
int main()
{
  float f,c;
  printf("Enter The temperature in fahrenheit...:");
  scanf("%f",&f);
  c=(f-32)*5/9;
  printf("The temperature converted fahrenheit into Centigrade...:%f",c);
  return 0;
}

