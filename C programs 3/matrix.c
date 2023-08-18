//wap to ask elemets un 3 by 3 matrix and display those element .

#include<stdio.h>
#include<conio.h>

void main()
{
	int max[3][3],row=3,col=3,i,j;
	printf("enter element of 3*3 matrix");
	
		for(i=0;i<row;i++)
		{
				for(j=0;j<col;j++)
			{	
			scanf("%d",&max[i][j]);
	     	}
     	}
	printf("element of 3*3 matrix are \n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d\t",max[i][j]);
			{
				printf("%d\t", max[i][j]);
			}
		}
		printf("\n");
	}
	getch();
}
