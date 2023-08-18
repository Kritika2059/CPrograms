#include<stdio.h>
#include<conio.h>
int dectobin(int);
void main()
{
	int decnum;
	printf(" enter a decimal num:");
	scanf("%d",&decnum);
	printf("the binary number=%d",dectobin(decnum));
	getch();
}

int dectobin( int decnum)
{
	int bin=0,rem=0,i=1;
	while( decnum!=0)
	{
		rem=decnum%2;
		bin=bin+(rem*i);
		decnum=decnum/2;
		i=i*10;
	}
	return (bin);
	}
	
