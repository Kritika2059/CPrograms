//lAB 6
//wap to read square matrix and print the same matrix by repacing its diagonal element by minm value 

#include<stdio.h>
#include<conio.h>
void main()
{
	int mat[10][10],n,row,col,i,j,min;
	printf("Enter the number of rows and column:");
	scanf("%d",&n);
	row=n;
	col=n;
	printf("Enter the numbers: \n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&mat[i][j]);
		}
	}
	min=mat[0][0];
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if(mat[i][j]<min)
			{
				min=mat[i][j];
			}
		}
	}
	printf("The minimum number is %d\n",min);
	printf("Elements in matrix form:\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d\t",mat[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if(i==j)
			{
				mat[i][j]=min;
			}
		}
		
	}
	printf("Elements in matrix form after replacing:\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d\t",mat[i][j]);
		}
		printf("\n");
	}
	getch();
}
