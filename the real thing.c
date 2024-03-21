#include <stdio.h>
int main()
{
	int a;
	if(3+2%5){
		printf("this works\n");
	}
	if(a=10){
		printf("even this works\n");
	}
	if(-5){
		printf("surprisingly even this work\n");
	}
	
	
	printf("enter a number (except 0 for print):");
	scanf("%d",&a);
	if(a){
		printf("done");
	}
	return 0;
}
