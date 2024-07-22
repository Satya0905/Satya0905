//program to read roll no,name,gender and height of a person
//program name: 011_As.c

#include<stdio.h>
main()
{
  int roll_no;
  float height;
  char gender,name[20];
  printf("Enter roll no...:");
  scanf("%d",&roll_no);
  printf("Enter height...:");
  scanf("%f",&height);
  printf("Enter The Name...:");
  scanf("%f",&name);
  fflush(stdin);
  printf("Enter gender...:");
  scanf("%c",&gender);
  printf("Roll no Occupies %d bytes of space",sizeof(roll_no));
  printf("\nheight Occupies %d bytes of space",sizeof(height));
  printf("\nName Occupies %d bytes of space",sizeof(name));
  printf("\ngender Occupies %d bytes of space",sizeof(gender));

  return 0;
}

