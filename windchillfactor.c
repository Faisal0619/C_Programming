//calculation of wind chill factor(wcf)
#include<stdio.h>
#include<math.h>
int main()
{
	float v,t,wcf;
	printf("enter the wind velocity(v) and temperature t\n");
	scanf("%f%f",&v,&t);
	wcf=35.74+0.6215*t+(0.4275*t-35.75)*pow(v,0.16);
	printf("%f",wcf);
}