//LAB 7 QN 4 
//Write a program to read a list of words, arrange them in dictionary order and print the ordered list using function Read (), Arrange () and Display () respectively.

#include<stdio.h>
#include<conio.h>
#include<string.h>
void read (char[50][50],int);
void arrange (char[50][50],int);
void display (char[50][50],int);
int main()
{
	int n;
	char str[50][50];
	printf("Enter no of words: ");
    scanf("%d",&n);
    read(str,n);
    arrange(str, n);
    printf("arranged string is::\n");
    display(str, n);
   getch();
}

void read(char str[50][50],int n)
{
	int i;
	printf("Enter words: \n");
	for (i=0;i<n;i++)
    {
    	fflush(stdin);
    	gets(str[i]);
	}
}

void arrange (char str[50][50],int n)
{
	char temp[50];
	int i,j;
	for (i=0;i<n;i++)
	{
      for (j=i+1;j<n;j++)
     {
	if (strcmp(str[i], str[j]) > 0)
	 	{
            strcpy(temp, str[i]);
            strcpy(str[i], str[j]);
            strcpy(str[j], temp);
    	 }
	 }
	}	
}

void display (char str[50][50],int n)
{
	int i;
	   for (i=0;i<n;i++)
    {
    	puts(str[i]);
	}
}
