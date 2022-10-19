//all trigonometric ratios of given angle
#include<stdio.h>
#include<math.h>
int main()
{
	float angle,s,c,t,csec,sc,ct;
	printf("Enter value of an angle\t");
	scanf("%f",&angle);
	s=sin(angle);
	c=cos(angle);
	t=tan(angle);
	printf("sin(%f)=%f\ncos(%f)=%f\ntan(%f)=%f\n",angle,s,angle,c,angle,t);
}

