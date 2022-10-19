#include<stdio.h>
#include<math.h>
int main()
{
	float lt1,lt2,lg1,lg2,D;
	printf("enter the latitude and longitude of place 1\t");
	scanf("%f%f",&lt1,&lg1);
		printf("enter the latitude and longitude of place 2\t");
	scanf("%f%f",&lt2,&lg2);
	
	lt1=lt1*3.14/180;
	lt2=lt2*3.14/180;
	lg1=lg1*3.14/180;
	lg2=lg2*3.14/180;
	 //Distance(D) between thrn in nautical miles
	 D=3963*acos(sin(lt1)*sin(lt2)+cos(lt1)*cos(lt2)*cos(lg2-lg1));
	 printf("%f",D);
}
	