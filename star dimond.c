#include <stdio.h>
int main()
{
	int a,b,i,j,n;
	printf("enter a number ");
	scanf("%d", &a);
	int nsp= a/2;
	int nst= 1;
	int ml=(a/2)+1;
	for(i=1; i<=a; i++){
		for(j=1; j<=nsp; j++){
			printf(" ");
		}
		int k;
		for(k=1; k<=nst; k++){
			printf("*");
		}
		if(i<ml){
		nsp--;
		nst= nst+2;
		
		}
		else{
	         nsp++;
			nst =nst-2;
		
		}
		printf("\n");
	}
	return 0;
}
