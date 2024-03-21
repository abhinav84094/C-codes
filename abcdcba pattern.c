#include <stdio.h>
int main()
{
	int a ,b, i,j,n,k;
	printf("enter a number:");
	scanf("%d", &n);
	int nsp= n-1;
	
	for(i=1; i<=n; i++){
		for(k=1; k<=nsp; k++){
			printf(" ");
		}
		nsp-- ;
		int z=65;
		for(j=1; j<=i; j++){
			printf("%c",z);
			z=z+1;
		}
		a=65;
		for( k=1; k<=i-1; k++){
		printf("%c",a);
		a++;
	}printf("\n");
	}
	return 0;
}
