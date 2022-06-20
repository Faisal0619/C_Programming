#include<stdio.h>
int main()
{
	char f;
	 double a,b;
	printf("please enter an operator(+,-,*,/,%):\t");
	scanf("%c",&f);
	printf("please enter two operands\t");
	scanf("%lf %lf",&a,&b);
	switch(f)
	{
		case'+':
		printf("%lf+%lf=%lf",a,b,a+b);
		break;
		case'-':
		printf("%lf-%lf=%lf",a,b,a-b);
		break;
		case'*':
		printf("%lf*%lf=%lf",a,b,a*b);
		break;
		case'/':
		printf("%lf/%lf=%lf",a,b,a/b);
		break;
		default:
		printf("Error!");
	}
	return 0;
}
	
