#include <stdio.h>
int main()
{
	char z;
	printf("enter operator: ");
	scanf("%c",&z);
	int x, y;
	printf("enter two number: ");
	scanf("%d%d", &x, &y);
	switch(z){
		case '+':
			printf("%d", x+y);
			break;
		case '-':
			printf("%d", x-y);
			break;
		case '*':
			printf("%d", x*y);
			break;
		case '/':
			printf("%d", (float)x/y);
			break;
		dafault :
			printf("invalid operator");
	}
	return 0;	
}
