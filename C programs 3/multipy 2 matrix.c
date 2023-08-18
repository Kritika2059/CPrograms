
//MUltiply two matrices
#include<stdio.h>
#include<conio.h>
void read(int mat1[][10],int mat2[][10],int r1,int c1,int r2,int c2);
void multiply(int mat1[][10],int mat2[][10],int mat3[][10],int r1,int c1,int r2,int c2);
void display(int mat3[][10], int r1, int c2);

void main()
{
    int mat1[10][10],mat2[10][10], mat3[10][10], r1, c1, r2, c2, i, j, k;

    
	

	printf("Enter rows and column for first matrix: ");
	scanf("%d %d",&r1,&c1);

	printf("Enter rows and column for second matrix: ");
	scanf("%d %d",&r2, &c2);
if(c1==r2)
{

        read(mat1,mat2,r1,c1,r2,c2);
        multiply(mat1,mat2,mat3, r1, c1, r2, c2);
        display(mat3,r1,c2);
}
getch();
}

void read(int mat1[][10], int mat2[][10], int r1, int c1, int r2, int c2)
{
	int i, j;
	printf("\nEnter elements of matrix 1:\n");
	for(i = 0; i < r1; i++)
	{
		for(j = 0; j < c1; j++)
		{
			printf("Enter elements a%d%d: ", i,j);
			scanf("%d", &mat1[i][j]);
		}
	}

	printf("\nEnter elements of matrix 2:\n");
	for(i = 0; i < r2; i++)
	{
		for(j = 0; j < c2; j++)
		{
			printf("Enter elements b%d%d: ", i,j);
			scanf("%d", &mat2[i][j]);
		}
	}
}

void multiply(int mat1[][10],int mat2[][10],int mat3[][10],int r1,int c1,int r2, int c2)
{
	int i, j, k;

	for(i = 0; i < r1; i++)
	{
		for(j = 0; j < c2; j++)
		{
			mat3[i][j] = 0;
		}
	}

	for(i = 0; i < r1; i++)
	{
		for(j = 0; j < c2; j++)
		{
			for(k=0; k<c1; k++)
			{
				mat3[i][j] = mat3[i][j] + mat1[i][k] * mat2[k][j];
			}
		}
	}
}

void display(int mat3[][10], int r1, int c2)
{
	int i, j;
	printf("\nOutput Matrix:\n");
	for(i = 0; i < r1; i++)
	{
		for(j = 0; j < c2; j++)
		{
			printf("%d\t", mat3[i][j]);
			
		}
			printf("\n");
	}
	
}
