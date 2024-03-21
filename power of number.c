#include <stdio.h>
#include <math.h>
int main()
{
	int n,p;
	printf("enter a numaber:");
	scanf("%d", &n);
	printf("enter power: ");
	scanf("%d", &p);
	int square= pow(n,p);
	printf("%d", square);
	return 0;
}
