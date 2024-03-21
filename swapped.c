#include <stdio.h>
int main()
{
	int a,b;
	printf("a = ");
	scanf("%d", &a);
	printf("b = ");
	scanf("%d", &b);
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	printf("    swapped\n");
	a=a+b;
	b=a-b;
	a=a-b;
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	}
