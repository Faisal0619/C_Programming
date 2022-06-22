//program in c to calculate simple interest
#include<stdio.h>
int main()
{
	int p,n;
	float r,si;
	printf("please enter value of p,n,r:\t");
	scanf("%d%d%f",&p,&n,&r);
	//formula of simple interest
	si= p * n * r/100;
	printf("%f\t",si);
	return 0;
}