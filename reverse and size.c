#include<stdio.h>
int main()
{
	int n,i,j;
	 char a[100];
	printf("please enter your first name \t");
	scanf("%s",&a);
	i=0;
	while(a[i]!='\0')
	{
		i++;
	}
	printf("the size of an array is %d\n",i);
	for(j=i-1;j>=0;j--)
	{
		printf("%c",a[j]);
	}
}