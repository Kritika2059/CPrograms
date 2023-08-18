//wap to creat a sturcture of employee with member id,adress,salary,name.use these struture inorder to store n number of employee.//
#include<stdio.h>
#include<conio.h>
struct employee
{
	int id;
	char name[20],address[20];
	float salary;
} s[10];

void main()
{
	int n,i;
	printf("enter the no of employee:\n");
	scanf("%d",&n);
	
	printf("enter id, name, address, salary of n employee:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d \t %s \t %s \t %f",&s[i].id, s[i].name,s[i].address,&s[i].salary);
	}
	printf(" id\t name \t address \t salary\n");
	for(i=0;i<n;i++)
	{
		printf("%d \t %s \t %s \t %f\n",s[i].id, s[i].name,s[i].address,s[i].salary);
	}
	getch();
}
