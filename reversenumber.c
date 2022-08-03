#include<stdio.h>
int main()
{
    int a,n;
   int revnum=0;
    printf("enter 5 digit number\t");
    scanf("%d",&n);
    
    a=n%10;
    n=n/10;
    revnum=revnum+a*10000;

    
    a=n%10;
    n=n/10;
    revnum=revnum+a*1000;
    
    
    a=n%10;
    n=n/10;
    revnum=revnum+a*100;

    
    a=n%10;
    n=n/10;
    revnum=revnum+a*10;
    
    a=n%10;
    revnum=revnum+a;
    printf("the reverse number is %d",revnum);
  return 0;  
}