//Write a program to concatenate two string withoutusing string handling functions.

#include<stdio.h>
#include<conio.h>
void concatenate ( char[20], char[20]);
void main()
{
char txt1[20],txt2[20];
	int i,j,len=0;
	printf("enter 1 string:");
	gets(txt1);
	printf("enter 2 string:");
	gets(txt2);
	for(i=0;txt1[i]!='\0';i++)
	{
		len++;
	}
		for(j=0;txt2[j]!='\0';j++)
	{
		txt1[len+j]=txt2[j];
	}
	txt1[len+j]='\0';
	printf("the concatinated string is %s",txt1);
}
