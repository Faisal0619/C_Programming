#include<stdio.h>
int main()
{
	char ch;
	FILE *p;
	p=fopen("file1.txt","r");
	if(p==NULL)
	{
		printf("file doesnot exist");
	}
	else
	{
		ch=getc(p);
	}
	while(ch!=EOF)
	{
		printf("%c",ch);
		ch=getc(p);
	}
	fclose(p);
}