#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char str[]="pulchowk";
	int i,j;
	for(i=0;i<8;i++)
	{
		for(j=8;j<i;j--)
		{
			printf("%d",str[j]);
		}
		printf("\n");
	}
	getch();
}
