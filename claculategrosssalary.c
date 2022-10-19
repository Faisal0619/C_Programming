#include<stdio.h>
int main()
{
	float bs,da,hra,gs;
	printf("enter basic salary");
	scanf("%f",&bs);
	da=0.4*bs;
	hra=0.2*bs;
	//formula to calculate gross salary
	gs=bs+da+hra;
	printf("basic salary=%f\n dearness allowance= %f \n house rent salary=%f \n gross salary=%f",bs,da,hra,gs);
	return 0;
}