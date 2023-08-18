//wap to creat a sturcture name student with its memeber name roll mask.use these sturtures to store a information of a student.//f("the information of student:\n");
#include<stdio.h>
#include<conio.h>
struct student 
{
	char name[30];
	int roll;
	float mark;
	
};
struct student s;
void main()
{
	printf("enter name of student:\n");
	gets(s.name);
	printf("enter roll no if student:\n");
	scanf("%d",&s.roll);
	printf("enter mask if student:\n");
	scanf("%f",&s.mark);
	print
	printf("%s\t %d\t %f\t\n", s.name,s.roll,s.mark);
	getch();
}
