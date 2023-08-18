#include<stdio.h>
#include<conio.h>
int main()
{
	int array[50],i,j,temp,n;
	printf("Enter number of terms");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter element %d",i);
		scanf("%d",&array[i]);
	}
	printf("original array is");
	for(i=0;i<n;i++)
	{
	//	printf("Enter element %d",i);
		printf("%d ",array[i]);
	}
	for(i=0,j=n-1;i<j;i++,j--)
	{
	 temp=array[i];
	array[i]=array[j];
	array[j]=temp;
	}
	printf("reversed  array is");
	for(i=0;i<n;i++)
	{
	//	printf("Enter element %d",i);
		printf("%d  ",array[i]);
	}
}
