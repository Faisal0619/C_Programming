#include<stdio.h>
struct student
{
	int rollno;
	char name[30];
	float marks;
};
int main()
{
	struct student s[5];
	int i;
	for(i=0;i<=4;i++)
	{
	printf("please enter the rollno name and marks of student %d\n",i+1);
	scanf("%d%s%f",&s[i].rollno,&s[i].name,&s[i].marks);
	}
	printf("Rollno \tName\tMarks\n");
	for(i=0;i<=4;i++)
	{
	printf("%d\t%s\t%f\n",s[i].rollno,s[i].name,s[i].marks);
	}
}
	