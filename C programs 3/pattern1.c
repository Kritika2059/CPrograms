#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,rows=5;
	for ( i=1;i<=rows;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		printf("\n");		
	}
 return 0;
}
