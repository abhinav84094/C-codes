#include<stdio.h>
int main()
{
	int a;
	printf("enter a number:");
	scanf("%d", &a);
	if(a>99 &&a<1000){
		printf("it is a three digit number.");
	}
	else{
		printf("it is not  a three digit number");
}
	return 0;
}
