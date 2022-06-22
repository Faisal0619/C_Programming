#include<stdio.h>
int main()
{
	int n,i,flag=1;
	printf("please enter any number\t");
	scanf("%d",&n);
	for(i=2;i<=n/2;i++)
	{
	if(n%i==0)
	{
		printf("the number is not prime");
		flag=0;
		break;
	}
	}
	if(flag==1)
	printf("the number is prime");
	return 0;
}
	
	