//sawp two variable without using third variable.
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	printf("enter number:");
	scanf("%d%d",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("the value of a is:",a);
	printf("the value of b is:",b);
	getch();
}


