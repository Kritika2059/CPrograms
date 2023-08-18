#include<stdio.h>
#include<conio.h>
int main()
{
	int m1[20][20],m2[20][20],m3[20][20];
	int i,j,k,r1,r2,c1,c2;
	printf("enter the row and colum of 1st and 2nd matrix");
	scanf("%d%d%d%d",&r1,&r2,&c1,&c2);
	if(c1!=r2)
	{
		printf("the multipication is not possible\n");	
	}
	else
	{
		printf("enter the element of first matrix");
		for(i=0;i<r1;i++)
		{
		  for(j=0;j<c1;j++)
		  {
		  	scanf("%d",&m1[i][j]);
		  }
		}
		printf("enter the element of secong element");
		for(i=0;i<r2;i++)
		{
		  for(j=0;j<c2;j++)
		  {
		  	scanf("%d",&m2[i][j]);
		  }
		}
		for(i=0;i<r1;i++)
		{
			 for(j=0;j<c2;j++)
			 {
			 	for(k=0;k<c1;k++)
			 	{
			 		m3[i][j]=m3[i][j]+m1[i][k]*m2[k][j];
				 }
			 }
		}
		printf("the resultant matrix is \n");
			for(i=0;i<r1;i++)
			{
					 for(j=0;j<c2;j++)
					 {
					 	printf("%d\t",m3[i][j]);
					 }
					 printf("\n");
			}
	}
}
