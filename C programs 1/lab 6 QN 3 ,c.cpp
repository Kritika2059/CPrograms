//wap to read list if num sort them in asscending orders and print the sorted list 

#include<stdio.h>
#include<conio.h>
int main()
{
	int a[50],sum=0,i,n,j,temp;
	printf("How many elements to be entered:");
	scanf("%d", &n);
	for (i=0; i<n; i++)
	{
	scanf("%d", &a[i]);
	}
    
    
    for(i=0; i<n; i++)
    {
    	for(j=0; j<n-1; j++)
    	{
    		if (a[j]>a[j+1])
    		{
    			temp=a[j];
    			a[j]=a[j+1];
    			a[j+1]=temp;
			}
		}
	}
     
	 printf("\n arranging the elements:");
	 for(i=0; i<n; i++)
	 {
	 	printf("%d \t ",a[i]);
	 }	

}
