#include<stdio.h>
int main()
{
	char f;
	 int a,b;
	printf("please enter an operator(+,-,*,%,/):\t");
	scanf("%c",&f);
	printf("please enter two operands\t");
	scanf("%d%d",&a,&b);
	if(f=='+')
		printf("%d+%d=%d",a,b,a+b);
	else if(f=='-')
		printf("%d-%d=%d",a,b,a-b);
	else if(f=='*')
		printf("%d*%d=%d",a,b,a*b);
	else if(f=='/')
		printf("%d/%d=%d",a,b,a/b);
	else if(f=='%')
	printf("%dmod%d=%d",a,b,a%b);
	else
		printf("Error!");
	return 0;
}
	
