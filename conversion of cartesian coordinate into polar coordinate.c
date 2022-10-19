#include<stdio.h>
#include<math.h>
int main()
{
	float x,y,r,theta;
	printf("Enter the cartesian co-ordinates(x,y):\t");
	scanf("%f%f",&x,&y);
	//formula to convert cartesian co_ordinates into polar co-odinates(r,theta)
	r=sqrt(x*x+y*y);
	theta=atan(y/x);
	theta=theta*180/3.14;
	printf("(r=%f,theta=%f)",r,theta);
}
	