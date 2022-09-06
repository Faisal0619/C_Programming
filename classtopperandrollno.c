#include<stdio.h>
struct student
{
	int rollno;
	float marks;
};
int main()
{
	struct student s[5];
	int i;
	for(i=0;i<5;i++)
	{
    	printf("please enter rollno and marks of student %d\n",i+1);
		scanf("%d%f",&s[i].rollno,&s[i].marks);
	}
	int topper_rollno;
	float max_marks;
	max_marks=s[0].marks;
	topper_rollno=1;
	for(i=1;i<5;i++)
	{
	 if(max_marks<s[i].marks)
	 {
	 max_marks=s[i].marks;
	 	topper_rollno=i+1;
	 }}
	 printf("Topper rollno is  %d\nand has marks %f",topper_rollno,max_marks);
}
	 