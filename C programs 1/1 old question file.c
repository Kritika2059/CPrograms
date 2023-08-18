/*wap tp store empoyee details in a text file.read data from the text file,sort them in a asscending order of salary and store them in sorted
record to a binary file.disply the details and rank of emplpyee given by user.*/

#include<stdio.h>
#include<conio.h>
#include<process.h>
void main()
{
	struct employee
	{
		char name[100];
		int rank;
		float salary;		
	};
	int i,n,j;
	float temp;
	struct employee e[n];
	FILE *f;
	printf("how many record?");
	scanf("%d",&n);
	f=fopen("employee.txt","w");
	if(f==NULL)
	{
		printf("file cannot be opened!!");
	}
	else
	{
		printf("file has been successfully created!!");
	}
	for(i=0;i<=n;i++)
	{
		fflush(stdin);
		printf("enter name and salary of employee");
		scanf("%s%d",(e+i)->name,(e+i)->salary);
	}
	ffclose(f);
	f=fopen("employee.txt","rb+");
		if(f==NULL)
	{
		printf("file cannot be opened!!");
	}
	for(i=1;i<=n-1;i++)
	{
		for(j=1;j<=n-1;j++)
		{
			if((e+i)->salary>(e+j)->salary)
			{
				temp=*(e+i);
				*(e+i)=*(e+j);
				*(e+j)=temp;
			}
		}
	}
	printf("the sored record:\n");
		for(i=0;i<n;i++)
		{
			+wite(&e[i],sizeof (e[i]),1,f);
			printf("rank=%d\t  name=%s\t  salary=%f\t",(e+i)->rank,(e+i)->name,(e+i)->salary);
			prints(".....................................");
		}
	fclose(f);
	getch();
}
	
