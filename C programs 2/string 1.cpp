//wap to ask a sting to the user and display SAME string at a time .

#include<stdio.h>
#include<conio.h>
int main ()
{
	char text[100];
	int i;
	printf("enter a string:\n");
	gets(text);
	printf("the string is:\n");
	for(i=0;text[i]!='\0';i++)
	{
		printf("%c\n",text[i]);
		getch();
	}
}
