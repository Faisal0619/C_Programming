//interchange contents of C and D
#include<stdio.h>
int main()
{
	int a;
	printf("Please enter any Number:\n");
	scanf("%d",&a);
	if(a%2 == 0)
	printf("%d is even",a);
	else
	printf("%d is odd",a);
return 0;	
}