#include <stdio.h>
int main()
{
	float p, si, t, r;
	printf("enter principle: ");
	scanf("%f", &p);

    printf("enter rate");
	scanf("%f", &r);

	printf("enter time: ");
	scanf("%f", &t);
	si = (p*r*t)/100;
	printf("the si is %f", si);
	return 0;
}
