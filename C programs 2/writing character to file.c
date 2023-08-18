#include<stdio.h>
#include<conio.h>
#include<process.h>
void main()
{
	char ch;
	FILE*fp;
	fp=fopen("E:\\files\\test.txt","w");
	if(fp==NULL)
	{
		printf("error");
		exit(1);
	}
		printf("enter any character:");
	fflush(stdin);
	ch=getchar();
	
	fputc(ch,fp);
	fclose(fp);
}
