//WAP to find max element of a m*n  matrix  usong pointer notation //
#include<stdio.h>
#include<conio.h>
void main()
{
	int Mat[20][20],i,j,N,M,Max,Min;
	printf("Enter the value for M");
	scanf("%d",&M);
	printf("Enter the value for N");
	scanf("%d",&N);
	printf("Enter elements for %d * %d matrix \n",M,N);
	for(i=0;i<M;i=i+1)
	{
		for(j=0;j<N;j=j+1)
		{
			printf("Element [%d] [%d] = \t",i,j);
			scanf("%d",*(Mat+i)+j);
		}
	}
	printf("The elements in matrix form is \n");
	for(i=0;i<M;i=i+1)
	{
		for(j=0;j<N;j=j+1)
		{
			printf("%d \t",*(*(Mat+i)+j));
		}
		printf("\n");
	}
	Max=Min=*(*(Mat+0)+0);
	for(i=0;i<M;i=i+1)
	{
		for(j=0;j<N;j=j+1)
		{
			if(*(*(Mat+i)+j)>Max)
			{
				Max=*(*(Mat+i)+j);
			}
			else if (*(*(Mat+i)+j)<Max)
			{
				Min=*(*(Mat+i)+j);
			}
		}
	}
	printf("Max element= %d \n",Max);
	printf("Min element= %d",Min);
	getch();
}
