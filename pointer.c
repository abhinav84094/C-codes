#include <stdio.h>
int main()
{
	int a = 5;
	int* x= &a; 
	printf("%d\n", a);
	printf("%d\n", *x);  		// *x means value 
	   //%p means pointer or address print hota hai
	printf("%p\n", x);
	printf("%p\n", &x);
	printf("%p", &a);
	return 0;
}
