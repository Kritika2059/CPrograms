//wap to ask two sting to user and concatenate those string and dispaly its string using user defined fun;

#include<stdio.h>
#include<conio.h>
void str_concat(char[],char[]);
void main ()
{
	char txt1[20];
	char txt2[20];
	printf("\n enter string:\n");
	gets(txt1);
	printf("enter another string:\n");
	gets(txt2);
	printf("string1=%s\nstring2=%s\n",txt1,txt2);
	str_concat(txt1,txt2);
	printf("\n the copied string is :%s",txt1);
	getch();
}

 void str_concat(char txt1[20], char txt2[20])
{
	int i,j,len=0;
	  for(j=0;txt1[j]!='\0';i++)
	  {
	  	len++;
	  }
	for(i=0;txt2[i]!='\0';i++)
	{
		txt1[len+i]=txt2[i];
	}
	txt1[i+len]='\0';
}
