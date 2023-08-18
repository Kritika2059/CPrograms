#include<stdio.h>
#include<conio.h>
void main()
{
	int a[3][3], r=3, c=3, i, min, max,j;	

	printf("enter element of matrix:\n");
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
        	{
        		printf("element [%d],[%d]= ",i,j);
	        	scanf("\t%d",&a[i][j]);
            }
	}
	
	 max=min=a[0][0];
	 	for(i=0; i<r; i++)
	    {
		   for(j=0; j<c; j++)
		   {
		   	 if(a[i][j]>max)
		   	   {
		   	 	max=a[i][j];
				}
			 else if(a[i][j]<min)
			 {
				min=a[i][j];
			 }
	        }
	    }
	    printf("maximum  number in matrix is =%d",max);
	    printf("\nminimum number in matrix is =%d",min);
}

