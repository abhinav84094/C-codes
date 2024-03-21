#include <stdio.h>
int main()
{
	int i,j,n,k;
	printf("enter a number: ");
	scanf("%d", &n);
	int nsp =(n-1);
	int nst= 1;	
	for(i=1; i<=n; i++){
		for( j=1; j<=nsp; j++){
			printf(" ");	
		}
		nsp=nsp-1;
		for(j=1; j<=nst; j++){
			printf("*");
		}
		nst =nst+2;
		printf("\n") ;
	}	
		return 0;
	}
