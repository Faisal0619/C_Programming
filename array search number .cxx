#include<stdio.h>
int main()
{
	int flag=0;
	int i,n;
	int a[10]={1,5,9,6,2,3,21,56,7,2};
	printf("please enter the number you wish to search\t");
	scanf("%d",&n);
	for(i=0;i<=9;i++)
	 {
	 	if(a[i]==n)
	 	{
	 		printf("element found at position %d",i+1);
	 		flag=1;
	 	break;
	 	}
	 }
	 if(flag==0)
	 {
	 	printf("element not found");
	 }
	 return 0;
}
	