#include<stdio.h>
struct date
{
	int day;
	int month;
	int year;
	
};
struct date ad,bs;
int main()
{
	printf("enter date in AD:year month and day\n");
	scanf("%d%d%d",&ad.year,&ad.month,&ad.day);
	bs.year=ad.year+56;
	bs.month=ad.month+8;
	bs.day=ad.day+16;
	if(bs.day>=30)
	{
		bs.day=bs.day-30;
		bs.month=bs.month+1;
	}
	if(bs.month>=12)
	{
		bs.month=bs.month-12;
		bs.year=bs.year+1;
	}
	printf("AD TO BS is %d\t%d\t%d\t",bs.day,bs.month,bs.year);

}
