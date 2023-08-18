#include<stdio.h>
#include<conio.h>
#include<string.h>
void main ()
{
	char txt [100]="programming";
	int i,j,len;
	len=strlen(txt);
	printf("\n the pattren is :\n\n");
	for(i=0;i<6;i++)
	{
		for(j=0;j<len;j++)
		{
			if(i<=j && j+i<=10)
			{
			printf("%c",txt[j]);	
             }
        }
			printf("\n");	
	}
		
 }    
	
