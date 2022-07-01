//program in c to calculate factorial of a number
#include<stdio.h>
int main()
{
	long int n,i,f=1;
	printf("enter the number: ",n);
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		f=f * i;
	}
	printf("the factorial of the %ld is %ld",n,f);
 return 0;
}
