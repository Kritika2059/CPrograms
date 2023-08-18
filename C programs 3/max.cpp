// wap to ask m by n order matrix find the mam element od each row of a matrix and pace those element in one dimensional 

#include<stdio.h>
#include<conio.h>
void main()
{
	int matrix[100][100], m,n, i, min, max,j;	
	printf("enter row of matrix:\n");
	scanf("%d",&m);
	printf("enter colum of the matrix :\n");
	scanf("%d",&n);
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
        	{
        		printf("element [%d],[%d]= ",i,j);
	        	scanf("\t%d",&a[i][j]);
            }
	}
	
	
	max = a[0][0];
	for(i=0;i<order;i++)
	{
		for(j=0;j<order;j++)
		{
			if(a[i][j]>max)
			{
				max = a[i][j];
			}
		}
	}
	getch();
}
