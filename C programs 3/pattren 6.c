#include<stdio.h>
#include<conio.h>
#include<string.h>
void main ()
{
	char txt [10]="NEPAL";
	int i,j,len;
	len=strlen(txt);
	printf("\n the pattren is :\n\n");
	for(i=0;i<len;i++)
	{
		for(j=0;j<len;j++)
		{
			if(i+j>=len-1 && i>=j)
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
