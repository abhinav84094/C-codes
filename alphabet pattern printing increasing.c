#include <stdio.h>
int main()
{
	int n,a,i,j;
	printf("enter a number: ");
	scanf("%d",&n);
	for(i=1; i<=n; i++){
		a=65;
		for(j=1; j<=i; j++ ){
			printf("%c", a);
			a++ ;
		}
		printf("\n");
	}
	return 0;
}
