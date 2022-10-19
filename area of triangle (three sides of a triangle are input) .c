#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,sp;
	float at;
	printf("enter sides of a triangle");
	scanf("%d%d%d",&a,&b,&c);
	//formula to calculate semi perimeter
	sp=(a+b+c)/2;
	//using herons formula to calculate area of trianlge
	at=sqrt(sp*(sp-a)*(sp-b)*(sp-c));
	printf("area of triangle is %f",at);
	return 0;
}
