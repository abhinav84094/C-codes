#include <stdio.h>
int main()
{
	int n;
	printf("enter a number: ");
	scanf("%d", &n);
	int i,j,nsp,nst,k;
	nsp=1;
	nst=n;
	int a = 1;
	for(i=1; i<=(2*n+1); i++){
		printf("%d",a);
		a++;
	}
	printf("\n");
	for(i=1; i<=n; i++){
		int a=1;
		for (j=1; j<=nst; j++){
			printf("%d",a);
			a++;
		}
		for (k=1; k<=nsp; k++){
			printf(" ");
		}
		for (j=1; j<=nst; j++){
			printf("%d",a);
			a++;
		}
		nsp=nsp+2;
		nst=nst-1;
		printf("\n");
	}
	return 0;
}
