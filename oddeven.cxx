//program in c to check whether a number is even or odd
#include<stdio.h>
int main()
{
	int n;
	printf("please enter number");
	scanf("%d",&n);
	if(n%2==0)
	printf("entered number is even");
	else 
	printf("entered number is odd");
	return 0;
}