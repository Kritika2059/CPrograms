#include<stdio.h>
#include<conio.h>
int main()
{
	int a[10],i;
	printf("enter ten humber:");
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
		printf("the number entred array are:");
		for(i=0;i<10;i++){
			printf("\na[%d]=%d",i,a[i]);
		}
		getch();
		return 0;
}
