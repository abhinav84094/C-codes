#include <stdio.h>
int factorial(int n){
	if(n==0 || n==1){
		return 1;
	}
	int sum=n+factorial(n-1);
	return sum;
}
int main()
{
	int n;
	printf("enter a number:");
	scanf("%d",&n);
	int fact = factorial(n);
	printf("%d", fact);
	return 0;
}
