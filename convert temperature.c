//convert temperature from fahrenheit to centigrade
#include<stdio.h>
int main()
{
	float f,C;
	printf("please enter temperature of any city");
	scanf("%f",&f);
	//formula to convert tempt into centigrade
	C=(f-32)*5/9;
	printf("the temperature (°C) =%f",C);
	return 0;
}
	       
	       
	