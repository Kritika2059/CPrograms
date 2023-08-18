#include<stdio.h>
#include<conio.h>
#include<process.h>
#include<string.h>
struct employee
{
	char name[20];
	float salary;
};
void main()
{
	FILE *b,*o;
	struct employee e[10],temp,a[10];
	int i,j,n;
	printf("Enter the number of employees.");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter name.");
		fflush(stdin);
		gets(e[i].name);
		printf("Enter salary.");
		scanf("%f",&e[i].salary);
	}
	b=fopen("c:\\Files\\Employee.txt","w");
	if(b==NULL)
	{
		printf("Error.");
		exit(1);
	}
	fwrite(e,sizeof(e[0]),n,b);
    fclose(b);
	o=fopen("c:\\Files\\Employee.txt","r");
	if(o==NULL)
	{
		printf("Error.");
		exit(1);
	}
	printf("Reading from file.\n");
	fread(a,sizeof(a[0]),n,o);
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j].salary>a[j+1].salary)
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("The info is:\n");
	printf("Name\t\tSalary\n");
	for(i=0;i<n;i++)
	{
		printf("%s\t\t%.2f\n",a[i].name,a[i].salary);
	}
	fclose(o);
	getch();
}

