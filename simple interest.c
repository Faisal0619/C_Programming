//program in c to calculate simple interest
#include<stdio.h>
int main()
{
	int p,n,r,si;
	p=5000;
	n=1;
	r=7;
	//formula of simple interest
	si= p * n * r/100;
	printf("%d\t",si);
	return 0;
}