//HCF of two numbers LCM of two numbers
#include<stdio.h>
int main()
{
	int a,b,i,HCF,LCM;
	printf("please enter two numbers\n");
	scanf("%d%d",&a,&b);
   int 	min = a<b?a:b;
	for(i=1;i<=min;i++)
	{
		if(a%i==0 && b%i==0)
		HCF=i;
	}
	LCM=(a*b)/(HCF);
	printf("The HCF of %d and %d is %d\n",a,b,HCF);
	printf("The LCM of %d and %d is %d",a,b,LCM);
}