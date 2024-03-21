#include<stdio.h>
int main()
{
	int a;
	printf("enter a number:");
	scanf("%d",&a);
	if (a%5==0  &&a%3==0){
		printf("the number is divisible by both 3 and 5");
	}
	else{
		printf("the number is not divisible by both 3 and 5");
	}
	return 0;
}
