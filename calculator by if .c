#include <stdio.h>
int main()
{
	int x, y;
	printf("enter two numbers:");
	scanf("%d %d", &x, &y);
	char z;
	scanf("%c",&z);
	if(z=='+'){
		printf("%d", x+y);
	}
	if(z=='-'){
		printf("%d", x-y);
	}
	if(z=='*'){
		printf("%d", x*y);
	}
	if(z=='/'){
		printf("%f", (float)x/y);
	}
	return 0;	
}
