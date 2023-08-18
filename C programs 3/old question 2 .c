/*wap to read valuues from user and find sum until user types 0 ,also display sum and average.*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int n;
	int s=0,c=0;
	float a;
clrscr();

	do
	{
		printf("\n enter any number:");
		scanf("%d",&n);
		s=s+n;
		c=c+1;	
	} while(n!=0);
	 a=(float)s/c;
	 printf("\n sum is=%d",s);
	 printf("\n Average is=%f",a);
	getch();
	
	 
}
