// wap to find hcf and lcm of given two numbers. Use function hcf() and lcm() to find hcf
//and lcm of given integer numbers. You should display your result from calling function.


#include<stdio.h>
#include<conio.h>
int hcf(int, int);
int lcm(int, int, int);
void main()
{
	int a, b,h,l;
	printf("enter greater number\n");
	scanf("%d",&a);
	printf("enter lower number\n");
	scanf("%d",&b);
	
	h=hcf(a,b);
	l=lcm(a,b,h);
	
	printf("hcf=%d",h);
	printf("lcm=%d",l);
}
int hcf(a,b)
{
	int i, h;
	
for(i=1;i<=b;i++)
	{
		if(a%i==0 && b%i==0)
		{
			h=i;
		}
	}
	return(h);
}

int lcm(a,b,h)
{
	int l;
	l=(a*b)/h;
	return(l);
}

