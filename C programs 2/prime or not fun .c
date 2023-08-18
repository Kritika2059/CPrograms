//wap to check an integer is prime or not by using user defined fun;

#include<stdio.h>
#include<conio.h>
int prime(int);
void main()
{
	int c, n;
	printf("enter a number:");
	scanf("%d",&n);
	c=prime(n);
	
	if(c==2)
	{
		printf("this is prime");
	}
	else
	{
		printf("this is not prime");
	}
	getch();
}

int prime ( int m)
{
	int i,  c=0;
	for(i=1;i<=m;i++)
	{
		if(m%i==0)
		{
		c=c+1;
		}
	}
	return(c);
}
