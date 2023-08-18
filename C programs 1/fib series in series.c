//wap to to display series in fibbonies series in r

#include<stdio.h>
#include<conio.h>
int fib(int);
void main()
{
	int n,f,i;
	printf("enter a num:");
	scanf("%d",&n);
	printf("the seires is: ");
	for(i=1; i<=n; i++)
	{
		f=fib(i);
		printf("\t%d",f);
	}
	getch();
	
}

int fib( int i)
{
	if(i==1)
	{
		return 0;
	}
	else if(i==2)
	{
		return 1;
	}
	else
	{
		return(fib(i-1)+fib(i-2));
	}
}
