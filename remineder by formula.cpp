#include <stdio.h>
int main()
{
	int remainder, dividend, quotient, divisor ;
	printf("enter dividend, divisor:");
	scanf("%d %d", &dividend, &divisor);
	printf("dividend=%d, divisor=%d", dividend, divisor);
	quotient = dividend/divisor;
	printf("\nquotient:%d",quotient);
	(remainder= dividend- quotient*divisor );
	printf("\nremainder is:%d", remainder);
	return 0;
}
