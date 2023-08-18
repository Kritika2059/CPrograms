//LAB7 QN 5
//Write a program to read a sentence and reprint the same sentence by replacing all the occurrence of the substring "the " by "***".

#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char str1[3]="the" , str2[50];
	int i,j,l,k;
	printf("enter a string");
	l=strlen(str1);
	gets(str2);
	for(i=0;i<(strlen(str2));i++)
	{
		k=i;
		for(j=0;j<=l-1;j++)
		{
			if(str2[k]!=str1[j])
			break;
			k++;
		}
		if (j==l)
		{
			for(j=i;j<i+3;j++)
			{
				str2[j]='*';
			}
		}	
    }
    	printf("\n update string is %s=",str2);
}
