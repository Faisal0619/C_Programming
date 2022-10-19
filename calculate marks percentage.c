#include<stdio.h>
int main()
{
	int Ma,Eng,sc,sst,urdu,aggr;
	float per;
	printf("enter marks(Ma\t,Eng\t,sc\t,sst\t,urdu");
	scanf("%d\t%d\t%d\t%d\t%d",&Ma,&Eng,&sc,&sst,&urdu);
aggr=Ma+Eng+sc+sst+urdu;
per=aggr/5;
	printf("aggregate marks=%d",aggr);
	printf("percentage marks=%f",per);
	return 0;
}