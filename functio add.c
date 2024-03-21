#include <stdio.h>
int add(int a, int b){
	return a+b;
}
int main(){
	int x, y;
	printf("enter two numbers: ");
	scanf("%d %d", &x,&y);
//	int add;
//	add= x+y;
//	printf("the sum is %d:",add);
	int sum= add(x,y);
	printf("%d", sum);
	return 0;
}
