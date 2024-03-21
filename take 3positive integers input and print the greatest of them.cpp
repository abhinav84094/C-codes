#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter 3numbers:");
	scanf("%d %d %d", &a,&b,&c);
	printf("a=%d, b=%d, c=%d", a,b,c);
	if(a>b && b>c){
		printf("\na is greatest of all");
	}
	else if(c>a && c>b ){
	printf("\nc is greatest of all");
	}
	else{
		printf("\nb is greatest of all");
	}
	return 0;
}
