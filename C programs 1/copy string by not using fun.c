//Write a program to copy one string to another string without using string handling fun[lab7 QN1]
#include<stdio.h>
#include<conio.h>
void main()
{
	char text1[10],text2[10];
	int j;
	printf("enter a string::\n");
	gets(text1);
	for(j=0;text1[j]!='\0';j++)
	{
		text2[j]=text1[j];
	}
	text2[j]='\0';
	printf("the string is: %s\n copied string is:%s",text1,text2);
	getch();
}

