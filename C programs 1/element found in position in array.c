#include<stdio.h>
#include <conio.h>
void main()
{
    int a[100],i,n,j,num;
   
    printf("Enter size of the array : ");
    scanf("%d",&n);
 
    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter number to find");
    scanf("%d",&num);
    for(j=0;j<n;j++)
    {
    	if(a[j]==num)
    	{
    		printf("\n%d element found in %d position",num,j+1);
    		break;
		}
	}
	if( j=n)
	{
		printf("\n%d elemnt is not found in array",num);
	}
	getch();
}
