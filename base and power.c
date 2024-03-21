#include <stdio.h>
int power(int a, int b){
	if(b==0){
		return 1;
	}
	int ans = a*power(a, b-1);
	return ans;
	
	}
int main(){
	int b,a, p;
	printf("enter a number: ");
	scanf("%d", &a);
	printf("enter power: ");
	scanf("%d", &b);
	p= power(a,b);
	printf("%d is raised to the power %d is %d",a,b, p);
	return 0;
}
