// time difference
#include<stdio.h>
struct time{
	int sec;
	int min;
	int hrs;
};
struct time ct,pt,diff;
void main()
{
printf("enter present time: hrs:min:sec\n");
scanf("%d%d%d",&ct.hrs,&ct.min,&ct.sec);
printf("enter past time: hrs:min:sec\n");
scanf("%d%d%d",&pt.hrs,&pt.min,&pt.sec);
if(pt.sec>ct.sec)
{
	ct.sec=ct.sec+60;
	ct.min=ct.min-1;
}
diff.sec=ct.sec-pt.sec;
if(pt.min>ct.min)
{
	ct.min=ct.min+60;
	ct.hrs=ct.hrs-1;
}
diff.min=ct.min+60;
if(pt.hrs>ct.hrs)
{
	ct.hrs=ct.hrs+24;
}
diff.hrs=ct.hrs-pt.hrs;
printf("difference betn ct and pt is %d\t%d\t%d\t",diff.hrs,diff.min,diff.sec);
getch();
}
