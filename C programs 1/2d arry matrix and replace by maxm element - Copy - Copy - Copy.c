/* write a program to ask mXn order matrix find the maximum element of that matrix and replace both diagonal elements
with maximum elements using function.Use function find max(), replace(),display to perform respective task.*/

#include<stdio.h>
#include<conio.h>
void max(int[][10],int,int);
void replace(int[][10],int,int);
void display(int[][10],int,int);

void main()

{

	int mat[10][10],n,row,col,i,j;

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
	

     max(mat,row,col);
     replace(mat,row,col);
     display(mat,row,col);




	getch();
}




void max(int mat[10][10], int row, int col)
{
     int i, j,maxx;
	maxx=mat[0][0];
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if(mat[i][j]>maxx)
			{
				maxx=mat[i][j];
			}
		}
	}
	printf("The minimum number is %d\n",maxx);
}




void replace(int mat[10][10], int row, int col)
{
	int i,j,maxx;
	
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
				mat[i][j]=maxx;
			}
		}
		
	}
}



void display(int mat[10][10], int row, int col)
{
	int i,j,maxx;
	
		printf("Elements in matrix form after replacing:\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d\t",mat[i][j]);
		}
		printf("\n");
	}
}

