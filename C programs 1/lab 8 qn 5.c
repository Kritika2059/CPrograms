#include <stdio.h>
#include<conio.h>
void swap(int*,int*);
int main()
{
	int a,b;
	printf("enter two numbers");
	scanf("%d%d",&a,&b);
	printf("va;ues before swapping are %dand%d",a,b);
	swap(&a,&b);
	printf("\nvalue after swapping are %d and %d",a,b);
}
void swap(int* x,int* y)
{
	*x=*x+*y;
	*y=*x-*y;
	*x=*x-*y;
}

