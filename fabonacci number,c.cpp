#include <stdio.h>
int main()
{
	int n;
	printf("enter a number: ");
	scanf("%d", &n);
	int sum=1, a=1, b=1;
	for(int i=1; i<=n-2; i++){
		sum=a+b;
		a=b;
		b=sum;
	}
	printf("the fabonacci of %d is: %d\n", n, sum);
}
