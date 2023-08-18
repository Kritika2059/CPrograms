#include<stdio.h>
#include<conio.h>
int sum( int,int);
int prod( int,int);
int sub( int,int);
void main()
{
	int p,s,a,b,c;
	printf("enter two num:");
	scanf("%d%d",&a,&b);
	p=prod(a,b);
	s=sum(a,b);
	c=sub(a,b);
	printf("prod is =%d\n",p);
	printf("sum is =%d\n",s);
	printf("sub is =%d\n",c);
	getch();
}
int prod(e,f)
{
	int p;
	p=e*f;
	return (p);
}

int sum( e, f)
    {
	int s;
	s=e+f;
	return(s);
    }

int sub(e,f)
   {
   
	int c;
	c=e-f;
	return (c);
  }
