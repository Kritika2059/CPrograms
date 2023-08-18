//wap to enter 10 floating numbers in an array and dispaly it.

#include<stdio.h>
#include<conio.h>
void main()
{
	float a[10];
	int i;
	printf("Enter 10 numbers:");
	for (i=0; i<10; i++)
	{
	scanf("%f", &a[i]);
    }
    
    
    for (i=0; i<10; i++)
	{
	
    printf("%f \n", a[i]);
    }
	getch();
}
