#include<stdio.h>
#include<conio.h>
int prod(int,int);
void main()
{
	int a,b,p;
	printf("enter a and b:");
	scanf("%d%d",&a,&b);
	p=prod(a,b);
	printf("prod is=%d",p);
	getch();
}
     int prod(c,d)
     {
     	int prod;
     	prod=c*d;
     	return (prod);
	 }
