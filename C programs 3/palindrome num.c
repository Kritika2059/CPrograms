// palindrome number betn the range

#include<stdio.h>
#include<conio.h>
#include<math.h>
int pal(int);
void main()
{
	int r1, r2, i, pa;
	printf("enter lower and higher range\n");
	scanf("%d %d",&r1,&r2);
	
	for(i=r1;i<=r2;i++)
	{
		pa=pal(i);
		if(pa==i)
		{
		printf("%d \t",pa);
		}
	}
	 
getch();
}

int pal(int i)
{
	int  pa=0, rem;
	
	while(i!=0)
	{
	rem=i%10;
	pa=pa*10+rem;
	i=i/10;
    }
		return(pa);
}
