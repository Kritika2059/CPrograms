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
	printf("enter date in bs:year month and day\n");
	scanf("%d%d%d",&bs.year,&bs.month,&bs.day);
	ad.year=bs.year-56;
	ad.month=bs.month-8;
	ad.day=bs.day-16;
	if(ad.day<30)
	{
		ad.day=ad.day+30;
		ad.month=ad.month-1;
	}
	if(ad.month<12)
	{
		ad.month=ad.month+12;
		ad.year=ad.year-1;
	}
	printf("BS to AD is %d\t%d\t%d\t",ad.day,ad.month,ad.year);

}
