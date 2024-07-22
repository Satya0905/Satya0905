//program to swap values of two variables A and B
//program name: 007_As.c
# include <stdio.h>
int main()
{
	int a,b;
	a=b=0;

	printf("Enter value for A:");
	scanf("%d",&a);

	printf("Enter value for B:");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;

	printf("\nA is:%d",a);
	printf("\nB is:%d",b);

	printf("\n");
	return 0;
}

