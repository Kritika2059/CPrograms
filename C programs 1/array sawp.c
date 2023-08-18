#include <stdio.h>
int main()
{
int a[100], n, i, j, position, swap;
printf("Enter number of elementsn");
scanf("%d", &n);
printf("Enter %d Numbersn", n);
for (i = 0; i < n; i++)
{
	scanf("%d",&num[i]);
}
for(i=0;i<n-1;i++)
{
	for(j=0;j<n/2;j++)
	{
		temp=num[j];
		num[j]=num[j+1];
		num[j+1]=temp;
	}
}
printf("revesed Array:\n");
for(i = 0; i < n; i++)
printf("%dn", a[i]);
return 0;
}
