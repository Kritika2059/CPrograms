#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char ar1[13]={'I','O','E',',','P','U','L','C','H','O','W','K','\0'};
	char ar2[15]="IOE,Pulchowk";
	char ar3[11]={{'I'},{'O'},{'E'},{','},{'P'},{'u'},{'l'},{'c'},{'h'},{'o'},{'w'},{'k'},{'\0'}};
    clrscr();
	{
    printf("\nArray 1 =%s\n",ar1);
	printf("\narray 2=%s\n",ar2);
	printf("\narray 3=%s\n",ar3);
     return 0;
	}
}


