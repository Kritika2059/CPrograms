//wap to initallize one dimensional array of size 8 and dispay the sum and average of array elements.

#include<stdio.h>
#include<conio.h>
void main()
{
	float avg;
	int a[8],sum=0,i;
	printf("Enter 8 elements:");
	for (i=0; i<8; i++)
	{
	scanf("%d", &a[i]);
    }
    
    
    for (i=0; i<8; i++)
	{
	sum=sum+a[i];
    }
    avg=sum/(float)8;
    printf("%d sum of elements \n",sum);
    printf("%f average of elements \n",avg);
	getch();
}

