//wap to read a number and find prime factors of it .use function factors(), to find factors of given integer number and primeis() to check whether that factor
//is prime number or not.
#include<stdio.h>
#include<conio.h>
int prime(int);
int factor(int);
void main()
{
	int f, n;
	printf("enter a number:");
	scanf("%d",&n);
	
	f=factor(n);
	
	getch();
}

int factor (int num)
{
	int i=1,co=0;
	while(i<=num)
	{
		if(num%i==0)
		{
			co=prime(i);
			if(co==2)
			{
			printf("%d is prime factor \n",i);
			}
		}
		i++;
	}
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

