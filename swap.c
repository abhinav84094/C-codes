#include <stdio.h>
int main()
{
	int a;
	printf("enter a number: ");
	scanf("%d", &a);
	int b;
	printf("enter b number: ");
	scanf("%d", &b);
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	int temp;
	temp=a;
	a=b;
	b=temp;
	printf("     swapped\n");
	printf("a = %d\n", a);
	printf("b = %d", b);
	
}
