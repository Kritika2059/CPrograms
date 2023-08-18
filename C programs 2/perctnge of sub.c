//enter the subject mask display its perctenge

#include<stdio.h>
#include<conio.h>
void main()
{
	int mask[10],i,sum=0,avg;
	printf("enter mask of sub:");
	
	for(i=1;i<=10;i++)
	{
		scanf("%d",&mask[1]);
	}
	
	 for(i=0;i<10;i++)
	 {
	 	sum=sum+mask[i];
	 	avg=(sum/1000)*100;
	 }
	 getch();
}
