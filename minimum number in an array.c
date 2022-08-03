#include<stdio.h>
int main()
{
	int i;
	int min;
	int a[10]={6,88,56,45,23,90,9,7,56,70};
	min=a[0];
	for (i=1;i<=9;i++)
	{
		if(min>a[i])
		{
			min=a[i];
		}
	}
		printf(" %d is min",a[i]);
}