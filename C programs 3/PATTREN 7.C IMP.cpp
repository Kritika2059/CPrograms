#include<stdio.h>
#include<conio.h>
#include<string.h>
void main ()
{
	char txt [10]="NEPAL";
	int i,j,len;
	len=strlen(txt);
	printf("\n the pattren is :\n\n");
	for(i=0;i<5;i++)
	{
		for(j=0;j<9;j++)
		{
			if(i+j>=2 && j-i<=2)
		{
			printf("%c",txt[j]);
		}
		else
		{
			printf(" ");
		}	
	}
		printf("\n");	
    }     
	}
