#include<stdio.h>
#include<conio.h>
#include<process.h>
void main()
{
	char ch;
	FILE*fp;
	fp=fopen("d:\\files\\test.txt","w");
	if(fp==NULL)
	{
		printf("error");
		exit(1);
	}
	printf("charater of files test.txt is:");
	while((ch=fgetc(fp))!=EOF)
	{
		putchar(ch);
	}
	fclose(fp);
	getch();
	
}
