//lab 6 
//wap to read list of numbers using fun read () sort them in ascedimg order using fun sort() and display by using fun dispaly() 

#include<stdio.h>
#include<conio.h>
void sort(int[],int);
void read(int[],int);
void display(int[],int);
int main()
{
	int a[50],i,n;
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	read(a,n);
	sort(a,n);
	display(a,n);
	getch();
}
void read(int a[50],int n)
{
	int i;
	printf("Enter %d elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
}
void sort(int a[50],int n)
{
	int i,j,temp;
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
}
     
void display(int a[50],int n)
{
	int i;
     printf("\n arranging the elements:");
	 for(i=0; i<n; i++)
	 {
	 	printf("%d \t ",a[i]);
	 }	
	
}
