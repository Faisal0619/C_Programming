//file 
#include<stdio.h>
int main()
{
	char s[20]="faisal";
	int x=6;
	FILE *p;
	p=fopen("file1.txt","w");
	fprintf(p,"%d%s",x,s);
	fclose(p);
}