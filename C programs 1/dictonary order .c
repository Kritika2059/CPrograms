//wap to ask n number of words to user and sort them in dictonary order
#include<stdio.h>
#include<conio.h>
#include<string.h>
void read(char [][100], int);
void arrange(char [][100], int);
void display(char [][100], int);
void main()
{
	char text[100][100];
	int n;
	printf("Number of strings?\n");
	scanf("%d", &n);	
	read(text,n);
	arrange(text,n);
	display(text,n);
getch();
}

void read(char text[100][100], int n)
{
	int i;
	printf("Enter %d strings\n", n);
	fflush(stdin);
	for(i=0; i<n; i++)
	{
       gets(text[i]);
	}
}

void arrange(char text[100][100], int n)
{
	int i, j;
	char temp[100];
	for(i=0; i<n-1; i++)
	{
		for(j=0; j<n-i-1; j++)
		{
			if(strcmp(text[j], text[j+1]) > 0)
			{
				strcpy(temp, text[j]);
				strcpy(text[j], text[j+1]);
				strcpy(text[j+1], temp);
			}
		}
	}
}

void display(char text[100][100], int n)
	{
	int i;
	printf("\nArranged in dictionary order\n");
	for(i=0; i<n; i++)
	{
		puts(text[i]);
	}
}
