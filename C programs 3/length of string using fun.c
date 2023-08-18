#include<stdio.h>
#include<conio.h>
int str_length(char []);
void main()
{
	char txt[20];
	int len;
	printf("enter a string:\n");
	gets(txt);
	len=str_length(txt);
	printf("the string is:%s\nits lenths is:%d",txt,len);
	getch();
}
 int str_length(char txt[20])

{
	int i,len=0;
	for(i=0;txt[i]!='\0';i++)
	{
		len++;
	}
	return(len);
}
