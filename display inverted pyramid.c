/* 
 print following pattern
* * * * * *
* * * * *
* * * *
* * *
* *
*"
*/

#include<stdio.h>
int main()
{
	int i,n;
	for(i=1;i<=6;i++)
	     {
	     	for(n=6;n>=i;n--)
	     	{
	     		printf("*  ");
	     	}
	       printf("\n");
	     }
   return 0;
}