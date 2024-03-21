#include <stdio.h>
int main()
{
	int a,b;
	printf("enter base and power :");
	scanf ("%d %d", &a,&b);
	int power=1;
	for(int i=1; i<=b; i++){
		power= power*a;
//		printf("%d\n",power);
	}
	printf("%d raised to the power %d is : %d", a,b,power);
	return 0;
}
