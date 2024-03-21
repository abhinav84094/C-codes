#include <stdio.h>
int main()
{
	int n;
	printf("enter a number: ");
	scanf("%d", &n);
	int i,j;
	for(j=1; j<=n; j++){
		for ( i=1; i<=n; i++){
			printf("*");
	}
	printf("\n");
	}
	return 0;
}
