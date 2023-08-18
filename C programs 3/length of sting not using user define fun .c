#include<stdio.h>
void main()
{
		char text[100];
	int i,len=0,count=0;
	printf("enter a string:\n");
	gets(text);
	printf("the string is:\n");
	printf("the string is :%s\n",text);
	for(i=0;text[i]!='\0';i++)
	{
       count=count+1;
   }
	printf("the length is %d\n:",count);
	getch();
}
