#include<stdio.h>
int main()
{
	char f;
	 int a,b;
	printf("please enter an operator(+,-,*,/):\t");
	scanf("%c",&f);
	printf("please enter two operands\t");
	scanf("%d %d",&a,&b);
	switch(f)
	{
		case'+':
		printf("%d+%d=%d",a,b,a+b);
		break;
		case'-':
		printf("%d-%d=%d",a,b,a-b);
		break;
		case'*':
		printf("%d*%d=%d",a,b,a*b);
		break;
		case'/':
		printf("%d/%d=%d",a,b,a/b);
		break;
		default:
		printf("Error!");
	}
	return 0;
}
	