#include<stdio.h>
#include<conio.h>
void str_copy( char[], char[]);
void main()
{
	char txt1[20], txt2[20];
	printf("enter a string:\n");
	gets(txt1);
		printf("the string is:%s",txt1);
		str_copy(txt2,txt1);
		printf("\nthe copied string is:%s",txt2);
		getch();
}
void str_copy(char txt2[20], char txt1[20])
{
	int i;
	for(i=0;txt1[i]!=0;i++)
	{
		txt2[i]=txt1[i];
		
	}
	txt2[i]='\0';
}
