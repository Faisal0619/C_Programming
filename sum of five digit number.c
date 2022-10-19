//sum of five digit number
#include<stdio.h>
int main()
{
    int a,n;
   int sum=0;
    printf("enter 5 digit number\t");
    scanf("%d",&n);
    
    a=n%10;
    n=n/10;
    sum=sum+a;

    
    a=n%10;
    n=n/10;
    sum=sum+a;
    
    
    a=n%10;
    n=n/10;
    sum=sum+a;

    
    a=n%10;
    n=n/10;
    sum=sum+a;
    
    a=n%10;
    sum=sum+a;
    printf("the sum is %d",sum);
  return 0;  
}