#include<stdio.h>
int main()
{
  char name[]="Faisal";
  char *p;
  p=&name[0];
  while(*p!='\0')
  {
  	printf("%c",*p);
  	p++;
  }
}
  