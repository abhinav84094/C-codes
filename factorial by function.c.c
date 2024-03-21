#include <stdio.h>
#include <stdio.h>
int factorial(x){
	int i;
	int fact=1;
	for(i=1; i<=x; i++){
		fact= fact*i;
	}
	return fact;
}
int main()
{
	int a;
	printf("enter a number: ");
	scanf("%d", &a);
	int x=factorial(a);
	printf("%d",x);
	
}
