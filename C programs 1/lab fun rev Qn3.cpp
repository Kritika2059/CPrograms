
//WAP to check if given number is strong or not. If the number is strong number then pass
//that number to the function find_max(). The function should find maximum digits of that
//number and return maximum digit to calling function. Finally display maximum digit from
//calling function. [Hint: if num is 145 and if (1! + 4! +5!) = 145, the num is strong. So,
//display max digits in 145 is 5]

#include<stdio.h>
#include<conio.h>
int strong(int);
int max(int);
int main()
{
	int n,st;
	printf("enter number\n");
	scanf("%d",&n);
	st=strong(n);
	getch();
}

int strong(int n)
{
int  r, sum=0, p, t,i,maxi;
	t=n;
	do
	{
			r=n%10;
			p=1;
		for(i=1;i<=r;i++)
		{
			p=p*i;
		}
	sum=sum+p;
	n=n/10;
	}while(n!=0);
	
	if(sum==t)
	{
			printf(" %d is strong number ",t);
			maxi=max(t);
	}
	else
	{
		printf(" %d is not strong number ",t);
	}
}

int max(int t)
{
	int maxi=0,a;
	while(t!=0)
	{
	a=t%10;
	t=t/10;
	if(a>maxi)
	{
		maxi=a;
	}
}
	
	printf("\n among these maximum number is %d",maxi);
	
}
