#include <stdio.h>
int main()
{
	int n;
	printf("enter a number: ");
	scanf("%d", &n);
	int nst=n;
	int nsp=0;
	int j,k,i;
	for(int i=1; i<=n; i++){
		for(j=1; j<=nsp; j++){
			printf(" ");
		}
		for(k=1; k<=nst; k++){
			printf("*");
		}
		nsp++;
		nst--;
		printf("\n");
	}
	return 0;
}
