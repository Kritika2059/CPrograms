// delection of the array element

#include<stdio.h>
#include<conio.h>
void main()
{
	int num[10],i,n,pos;
	printf("how many elememt:");
	scanf("%d",&n);
		printf("enter the elememt:");
	
	 for(i=0;i<n;i++)
	 {
	 	scanf("%d",&num[i]);
	 }
	 printf("\n array element are before delection:");
	 for(i=0;i<n;i++)
	 {
	 	printf("\n%d\t",num[i]);
	 }
	   printf("\nenter the positon");
	   scanf("%d",&pos);
	   for(i=pos;i<n;i++)
	   {
	   	num[i]=num[i+1];
	   }
	 		 printf("\n array element are before delection:");
	 for(i=0;i<n-1;i++)
	 {
	 	printf("\n%d\t",num[i]);
	 }  
	 getch();
	   
}
