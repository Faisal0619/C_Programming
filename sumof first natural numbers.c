#include<stdio.h>
int main()
{
	int i,n,sum;
	printf("please enter value of n\t");
	scanf("%d",&n);
	sum=0;
	for(i=1;i<=n;i++)
	     {
	     	sum=sum+i;
	     }
	     printf("the  sum = %d",sum);
	 return 0;
}