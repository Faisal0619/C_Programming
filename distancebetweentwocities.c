#include<stdio.h>
int main()
{
	float km,m,ft,inh,cnti;
	printf("please enter distance (in km)\n");
	scanf("%f",&km);
	m=km*1000;
	cnti=m*100;
    inh=cnti/2.54;
	ft=inh/12;
printf("meter=%f\nfeet=%f\ninch=%f\ncentimeter=%f",m,ft,inh,cnti);
	return 0;
}
	
	