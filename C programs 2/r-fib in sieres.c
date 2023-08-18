//wap to to display n term in fibbonies series in r

#include<stdio.h>
#include<conio.h>
int fib(int);
void main()
{
	int num,f,i;
	printf("enter a num:");
	scanf("%d",&num);
	for(i=1; i<=num; i++)
	{
		f= fib(i);
		printf("%d/t=",f);
    }
	getch();
	
}

int fib( int n)
{
	if(n==1)
	{
		return 0;
	}
	else if(n==2)
	{
		return 1;
	}
	else
	{
		return(fib(n-1)+fib(n-2));
	}
}
