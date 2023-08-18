#include<stdio.h>
#include<conio.h>
int factorial(int);
void main()
{
	int num,fact;
	printf("enter a number::");
	scanf("%d",&num);
	fact=factorial(num);
	printf("factorial of %d is %d",num,fact);
	getch();
}
	int factorial (int x)
	{
		int fact;
		if(x==0)
		{
			return 1;
		}
		else
		{
			fact=x*factorial(x-1);
			return fact;
		}
	}
