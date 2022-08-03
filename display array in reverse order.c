//reverse of array
#include<stdio.h>
int main()
{
	int i;
	int a[4];
	printf("please enter the values\t");
	for(i=0;i<=3;i++)
	scanf("%d",&a[i]);
	for(i=3;i>=0;i--)
	{
		printf("%d",a[i]);
	}
	return 0;
}
	
	
	
	
	