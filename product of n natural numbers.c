#include<stdio.h>
int main()
{
	long i,n,pro=1;
	printf("please enter value of n\t");
	scanf("%ld",&n);
	for(i=1;i<=n;i++)
	{
		pro=pro*i;
	}
	printf("the product=%ld",pro);
	return 0;
}