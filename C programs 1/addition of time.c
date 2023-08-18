// time sum
#include<stdio.h>
struct time{
	int sec;
	int min;
	int hrs;
};
struct time ct,pt,sum;
void main()
{
printf("enter present time: hrs:min:sec\n");
scanf("%d%d%d",&ct.hrs,&ct.min,&ct.sec);
printf("enter past time: hrs:min:sec\n");
scanf("%d%d%d",&pt.hrs,&pt.min,&pt.sec);
sum.sec=ct.sec+pt.sec;
sum.min=ct.min+pt.min;
sum.hrs=ct.sec+pt.sec;

  if(sum.sec>=60)
 {
	sum.sec=sum.sec-60;
	sum.min=sum.hrs+1;
	
 }
 if(sum.min>=60)
 {
 	sum.min=sum.min-60;
 	sum.hrs=sum.hrs+1;
 }
 
printf("sum betn ct and pt is = %d:%d:%d",sum.hrs,sum.min,sum.sec);
getch();
}

