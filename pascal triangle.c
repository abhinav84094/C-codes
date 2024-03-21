#include <stdio.h>
int factorial(int x){
	int i;
	int fact=1;
	for(i=2; i<=x; i++){
		fact= fact*i;
	}
	return fact;
}
int n;
int r;
int combination(int n, int r){
	int ncr= factorial(n)/(factorial(r)*factorial(n-r));
	return ncr;
}
int main()
{
	int n,i,j;
	printf("enter a number: ");
	scanf("%d",&n);
	for( i=0; i<=n; i++){
		for (j=0; j<=i; j++){
			int icj= combination(i,j);
			printf("%d",icj);
		
			}
		printf("\n");
	}
	return 0;
}

