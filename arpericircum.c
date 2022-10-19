#include<stdio.h>
int main()
{
	int l,b,r,ar,pr;
	float ac,cc;
	printf("enter length and breadth of rectangle \n");
	scanf("%d%d",&l,&b);
	//formula to calculate area of rectangle 
	ar=l*b;
	//formula to calculate perimeter of rectangle
	pr=2*(l+b);
	printf("the area of rectangle =%d\n",ar);
	printf("the perimeter of rectangle =%d\n",pr);
	//formula to calculate area of circle
	ac=3.14*r*r;
	//formula to calculate circumference of circle
	cc=2*3.14*r;
	printf("the area of circle =%f\n",ac);
	printf("the circumference of circle=%f",cc);
 return 0;	
}
	
	