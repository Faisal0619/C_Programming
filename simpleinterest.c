//program in c to calculate simple interest
#include<stdio.h>
int main()
{
	int p,n;
	float r,si;
	p=500;
	n=1;
	r=10.3;
	//formula of simple interest
	si= p * n * r/100;
	printf("%f\t",si);
	return 0;
}