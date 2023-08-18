/*wap to ceate a structure name student with its member name name rollno and marks.
use this to store information with marks of n subject */
#include<stdio.h>

struct employee
{
	char name [20];
	int roll;
	char sub[10][10];
	float marks[10];
	
} s;

void main()
{
	int n,i;
	printf("enter the no of subject:\n");
	scanf("%d",&n);
	
	printf("enter name , roll:\n");
	scanf("%s %d",s.name,&s.roll);
	printf("enter marks for each sunject::\n");
	for(i=0;i<n;i++)
	{
		printf("sub %d \t mark\n",i);
		scanf("%s \t %f",s.sub[i],&s.marks[i]);
	}
	printf(" name \t roll\t\n");
	printf("%s \t %d",s.name,s.roll);
	for(i=0;i<n;i++)
	{
		printf("sub %d \t mark\n",i);
		printf(" %s \t %f",s.sub[i],s.marks[i]);
	}
	getch();
}
