#include<stdio.h>

struct employee
{
	char Name[20];
	int id;
	int salary;	
};
int main()
{
	int n,i,j;
	FILE *fptr;
	struct employee e[10],temp;
	fptr=fopen("c:\\files\\employee.txt","wb");
	if(fptr==NULL)
	{
		printf("file error!");
	    exit(1);
	}
	printf("how many record u want to put:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		fread(&e[i],sizeof(e[i]),1,fptr);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(e[i].salary>e[j].salary)
			{
				temp=e[i];
				e[i]=e[j];
				e[j]=temp;
				
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("name=%s\tid=%d\tsalary=%d\n",e[i].Name,e[i].id,e[i].salary);
	}
	fclose(fptr);
	return 0;
}
