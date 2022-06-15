//program in c to compare three distinct integers
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("please enter three distinct integers");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b && a>c)
	printf("%d is greatest of the three",a);
	if (b>a && b>c)
	printf("%d is the greatest of three",b);
	if (c>a && c>b)
	printf("%d is the greatest of the three",c);
	return 0;
}