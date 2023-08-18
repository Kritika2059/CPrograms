#include<stdio.h>
#include<stdio.h>
void factor(int);
int isprime(int);
void main()
{
	int num;
	printf("enter a num:");
	scanf("%d",&num);
	printf(" the prime factors of %d are:\n",num);
	factor(num);
	getch();
}

void factor(int n)
{
	int i,count;
	for( i=1; i<=n; i++)
	  {
	  	if (n%i==0)
	  	{
	  		 count = isprime(i);
	  		 if (count==2)
	  		 { 
			   printf("%d\t",i);
			   }
		  }
	  }
}
