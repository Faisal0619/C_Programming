#include<stdio.h>
int recAdd(int);
int main(){
	int n,a;
	printf("Enter the number: \n");
	scanf("%d",&n);
	a = recAdd(n);
	printf("Sum of 1st %d natural numbers is = %d",n,a);
}
int recAdd(int n){
	if(n==1){
		return 1;
	}
	else{
		return n+recAdd(n-1);
	}
}