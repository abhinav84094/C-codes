#include <stdio.h>
int factorial(int n){
	int fact=1;
	int i;
	for (i=2; i<=n; i++ ){
		fact= fact*i;
	}
	return fact;
}
int main()
{
	int n;
	printf("enter a number : ");
	scanf("%d", &n);
	int fact= factorial(n);
	printf("%d", fact);
	return 0;
}
