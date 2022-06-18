#include<stdio.h>
int main()
{
	int i,n,flag=0;
	printf("please enter value of n\t");
	scanf("%d",&n);
	for(i=2;i<=n-1;i++)
	{
	if (n%i==0)
	{
	printf("%d is not prime ",n);
	flag =1 ;
	break;
	}
	}
	if(flag==0)
	printf("%d is prime",n);
	return 0;
}