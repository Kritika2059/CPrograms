#include<stdio.h>
#include<conio.h>
void sort(int*,int);
int main()
{
	int i,j,arr[50],n;
	int* ptr=arr;
	printf("enter number of elements");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter elment %d ",i);
		scanf("%d",&arr[i]);
	}
	sort(ptr,n);
	printf("\nafter sorting\n");
	for(i=0;i<n;i++)
	{
		printf("%d,",*(ptr+i));
		
	}
} 
void sort(int *ptr, int n)
{

	int temp,i,j;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(*(ptr+i)>*(ptr+j))
			{
				temp=*(ptr+i);
				*(ptr+i)=*(ptr+j);
				*(ptr+j)=temp;
			}
		}
		
	}
	
	
}
