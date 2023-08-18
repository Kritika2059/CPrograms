//LAB 7 QN3
//Write a program to read a sentence and count the number of characters &words in that sentence.

#include<stdio.h>
#include<conio.h>
int main()
{
	char txt1[20];
	int i,word=0,chr=0;
	printf("enter 1 string:");
	gets(txt1);
	
	for(i=0;txt1[i]!='\0';i++)
	{
		chr++;
		if(txt1[i]==' ' || txt1[i+1]=='\0' || txt1[i]=='\t' )
		{
			word++;
		}
	}
	printf("the number of character is %d\n",chr);
	printf("the number of word is %d",word);
	getch();
}
