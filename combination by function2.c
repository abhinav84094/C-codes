#include <stdio.h>
int factorial(x){
	int i;
	int fact=1;
	for(i=1; i<=x; i++){
		fact= fact*i;
	}
	return fact;
}
int n;
int r;
int combination(int a, int b){
	return factorial(n)/(factorial(r)*factorial(n-r));
}

int  main()
{
	printf("enter a number:");
	scanf("%d",&n);
	printf("enter r:");
	scanf("%d", &r);
	int nfact=factorial(n);
	int rfact=factorial(r);
	int nrfact=factorial(n-r);
	
//	int ncr= nfact/(nrfact*rfact);
	printf("%d",factorial);
	return 0;
}
