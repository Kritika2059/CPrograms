#include<stdio.h>
#include<conio.h>
#include<string.h>
void main ()
{
	char txt1[20],txt2[20];
	puts("\n enter string:\n");
	gets(txt1);
	puts("enter another string:\n");
	gets(txt2);
	printf("string1=%s\nstring2=%s\n",txt1,txt2);
	strcat(txt1,txt2);
	printf("\n the copied string is :%s",txt1);
	getch();
}
