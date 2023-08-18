#include <stdio.h>
#include<conio.h>
void max(int*,int*,int*,int*);
int main()
{
	int a,b,c,m;
	printf("enter three numbers");
	scanf("%d%d%d",&a,&b,&c);

	max(&a,&b,&c,&m);
	printf("\nlargest number among %d,%d&%d is %d",a,b,c,m);
}
void max(int* x,int* y,int*z,int *max)
{
	if(*x>*y)
	{
		if(*y>*z)
		*max= *x;
		else
			{
				if(*x>*z)
				*max= *x;
				else
				*max= *z;
			}
	}

    else
    {
    	if(*y>*z)
    	{
    	*max= *y;
		}
		else
		{
			*max= *z;
		}
	}
}
