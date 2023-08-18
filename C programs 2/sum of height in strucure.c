#include<stdio.h>
struct height
{
	int ft;
	int inch;
	
};
struct height h1,h2,sum;
void main ()
{
	int i,n;
	printf("enter height of a person in ft and inch\n");
	scanf("%d%d",&h1.ft,&h1.inch);
	printf("enter height of a person in ft and inch\n");
	scanf("%d%d",&h2.ft,&h2.inch);
	sum.ft=h1.ft+h2.ft;
	sum.inch=h1.inch+h2.inch;
	if(sum.inch>=12)
	{
		sum.inch=sum.inch-12;
		sum.ft=sum.ft+1;
	}
	printf("sum of height is %dft and %d inch",sum.ft,sum.inch);
	getch();
}
