#include<stdio.h>
int main()
{
	int a[5];
	int i;
	printf("please enter the elements of an array\t");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	int sum=0;
	for(i=0;i<=4;i++)
	{
		sum=sum+a[i];
	}
	printf("the sum of elements of an array is %d",sum);
}