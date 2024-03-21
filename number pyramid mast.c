#include <stdio.h>
int main()
{
	int n;
	printf("enter a number: ");
	scanf("%d", &n);
	int i,j,nsp,nst,k;
	nsp=1;
	nst=n;
	for(i=1; i<=(2*n+1); i++){
		printf("*");
	}
	printf("\n");
	for(i=1; i<=n; i++){
		for (j=1; j<=nst; j++){
			printf("*");
		}
		for (k=1; k<=nsp; k++){
			printf(" ");
		}
		for (j=1; j<=nst; j++){
			printf("*");
		}
		nsp=nsp+2;
		nst=nst-1;
		printf("\n");
	}
	return 0;
}
