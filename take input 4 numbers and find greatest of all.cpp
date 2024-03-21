#include <stdio.h>
int main()
{
	int a,b,c,d;
	printf("enter 4 numbers:");
	scanf("%d %d %d %d", &a, &b , &c, &d);
	printf("a=%d, b=%d, c=%d, d=%d\n",a,b,c,d);
	if(a>b && a>c && a>d){
		printf("%d is greatest of all", a);
	}
	else if(b>a && b>c&& b>d){
		printf("b is greatest of all");
	}
	else if(c>a && c>b && c>d){
		printf("c is greatest of all");
	}
	else if(d>a && d>b && d>c){
		printf("d is greatest of all");
	}
	else{
		printf("invalid");
	}
		return 0;
}
