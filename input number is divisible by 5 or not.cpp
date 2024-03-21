#include <stdio.h>
int main()
{
	int x;
	printf("enter a number:");
	scanf("%d",&x);
	if(x%5==0){
	printf("this numberis divisible by 5.");
	}
	else{
		printf("this number id not divisible by 5.");
	}
	return 0;
}

