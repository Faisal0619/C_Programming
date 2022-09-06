#include<stdio.h>
int main()
{
	char *p="Faisal rashid";
	int l=0,i;
	while(*p!='\0')
	{
		l++;
		p++;
	}
 p--;
for(i=l-1;i>=0;i--)
{
 printf("%c",*p);
 p--;
}
}