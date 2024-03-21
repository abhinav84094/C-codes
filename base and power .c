#include <stdio.h>
int power(int a, int b){
	int x=1;
	int i;
	for(i=1; i<=b; i++){
		x=x*a;
	}
	return x;
	}
int main(){
	int a,b, p;
	printf("enter a number: ");
	scanf("%d", &a);
	printf("enter power: ");
	scanf("%d", &b);
	p=power(a,b);
	printf("%d is raised to the power %d is: %d",a,b, p);
	return 0;
}
