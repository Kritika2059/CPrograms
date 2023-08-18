\\wap to create a file name test.txt.read character from user until enter key is pressed and write those character at a time \\
 Again read thr contents of file test.txt and display from moniter.\\
 
 #include<stdio.h>
#include<conio.h>
#include<process.h>
void main()
{
	char ch;
	FILE *fp,*fptr;
	fp=fopen("E:\\files\\test.txt","w");
	if(fp==NULL)
	{
		printf("error");
		exit(1);
	}
	printf("enter any character:");
	fflush(stdin);
	while((ch=getchar())!='\n')
	{
		fputc(ch,fp);
	}
	fclose(fp);
	fp = fopen("E:\\files\\test.txt","r");
	if(fp == NULL)
	{
		printf("Error");
		exit(1);
	}
	printf("\nContents of file Test.txt is: ");
	while((ch = fgetc(fp))!=EOF)
	{
		
		putchar(ch);
	}
	fclose(fp);
getch();
}

