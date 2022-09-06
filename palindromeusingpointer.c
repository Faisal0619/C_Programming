//palindrome using string
#include<stdio.h>
int main()
{
	char  str[50],*p,*q;
	int flag=1;
	printf("enter a string\n");
	scanf("%s",&str);
	p=&str[0];
	q=p;
	while(*q!='\0')
	{
		q++;
	}
	q--;
	while(p<=q)
	{
		if(*p!=*q)
		{
		printf("the string is not palindrome");
		flag=0;
		break;
		}
		else
		{
			p++;
			q--;
		}}
	if(flag==1)
	{
		printf("the string is palindrome");
	}
}
		
	