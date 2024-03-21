#include <stdio.h>
int main()
{
	int a, b,c;
	printf("input three sides of a triangle:");
	scanf("%d %d %d",&a, &b , &c);
	printf("1st side=%d, 2nd side=%d, 3rd side=%d\n", a,b,c);
	if ( a+b>c  && a+c>b && b+c>a){
		printf("it is a triangle");
	}
	else{
		printf("it is not a triangle");
	}
	return 0;
}
