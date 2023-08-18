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
		for(j=0;j<9;j++)
		{
			if(i+j>=4 && j-i<=4)
		{
			if( i%2==1)
			{
				txt[i]=tolower(txt[i]);
				printf("%c",txt[i]);
			}
			else{
			printf("%c",txt[i]);
			}
		}
		else
		{
			printf(" ");
		}	
	}
		printf("\n");	
    }     
	}
