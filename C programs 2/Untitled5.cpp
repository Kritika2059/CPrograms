//WAP to display all the triangular numbers within the range given by user using User
#include<stdio.h>
#include<conio.h>
int prime(int, int);
void main()
{
int l,g,p;
printf("enter lower and greater number\n");
scanf("%d%d",&l,&g);
p=prime(l,g);
getch();
}

int prime(int l, int g)
{
	int i, j, sum, n,c;
	for(i=l;i<=g;i++)
{
	sum=0;
	for(j=1;j<=i;j++)
	{
		sum=sum+j;
	
	if(sum==i)
	{
			printf("%d is trangular number\n",i);
	}
	
	}
}

}

