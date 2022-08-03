#include<stdio.h>
int main()
{
	int i,max;
	int a[10];
	printf("please enter elements of array\t");
	for(i=0;i<=9;i++)
	{
		scanf("%d",&a[i]);
	}
	max=a[0];
	for(i=1;i<=9;i++)
	{
		if (max<a[i])
		{
			max=a[i];
		}}
		printf("%d is max ",a[i]);
	
}