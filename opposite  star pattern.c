#include <stdio.h>
int main()
{
	int a,b ,i,j ,n;
	printf("enter a number : ");
	scanf("%d", &a);
	for(i=1; i<=a; i++){
		for(j=1; j<=(a-i); j++){
			printf(" ");
		}
		int k;
		for(k=1; k<=i; k++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
