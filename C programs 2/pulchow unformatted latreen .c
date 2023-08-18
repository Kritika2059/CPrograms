#include<stdio.h>
#include<conio.h>
#include<string.h>
void main ()
{
	char txt [10]="PULCHOWK";
	int i,j,len;
	len=strlen(txt);
	puts("\n the pattren is :\n\n");
	for(i=0;i<len;i++)
	{
		for(j=0;j<len;j++)
		{
			if(i>=j)
		{
			if( j%2==1)
			{
				txt[j]=tolower(txt[j]);
				putchar(txt[j]);
			}
			else{
			putchar(txt[j]);
			}
		}	
	}
		putchar('\n');	
    }     
	}
