#include <stdio.h>
int main()
{
	int a,b,c ;
	printf("enter a number: ");
	scanf("%d", &a);
	printf("a is = %d",a);
	printf("\nenter 2nd number: ");
	scanf("%d", &b);
	printf("b is = %d\n", b);
	printf("the reminder of a/b is:%d ", a%b);
	return 0;
}
