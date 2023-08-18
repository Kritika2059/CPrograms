#include <stdio.h>
int main()
{
int num[100], n, i,j, temp;
printf("Enter number of elements:");
scanf("%d", &n);
printf("Enter %d Numbers:\n", n);
for (i = 0; i < n;i++)
{
	scanf("%d",&num[i]);
}
for(i=0;i<n-1;i++)
{
	for(j=0;j<n-i-1;j++)
	{
		if(num[j]>num[j+1])
		{
		temp=num[j];
		num[j]=num[j+1];
		num[j+1]=temp;
	}
}
printf("sorreed Array:\n");
for(i = 0; i < n; i++)
printf("%d\t", num[i]);
getch();
}
