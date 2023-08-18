
#include<stdio.h>
#include<conio.h>
int triangular(int n);
int main()
{
 int term, i;
 printf("How many terms?\n");
 scanf("%d", &term);
 printf("First %d triangular numbers are:\n", term);
 for(i=1; i<=term; i++)
 {
  printf("%d\t", triangular(i));
 }
 getch();
 return 0;
}
int triangular(int n)
{
 if(n<=1)
 {
  return 1;
 }
 else
 {
  return n+triangular(n-1);
 }
}
