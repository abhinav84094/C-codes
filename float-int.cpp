#include<stdio.h>
int main()
{
	float x;
	printf("enter a float number:");
	scanf("%f",&x);
	printf("\nthe value of x is:%f", x);
	int y;
	y=x;
	printf("\nthe value of y is:%d", y);
	float z;
	z = (x-y);
	printf("\nthe value of z is: %f", z);
	return 0 ;
}
