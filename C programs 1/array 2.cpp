#include<stdio.h>
#include<conio.h>
int main()
{
	int num[10],i,n,pos;
	printf("how many elememt:");
	scanf("%d",&n);
		printf("enter the elememt:");
	
	 for(i=0;i<n;i++)
	 {
	 	scanf("%d",&num[i]);
	 }
	  printf("\n array element without repalement:");
	 for(i=0;i<n;i++)
	 {
	 	printf("\n%d\t",num[i]);
	 }
	 printf("\nenter the positon");
	   scanf("%d",&pos);
	   if(i==pos){
	   
	   num[i]=num[pos];
       }
	getch();
	return 0;
}
