#include <stdio.h>
int factorial(x){
	int i;
	int fact=1;
	for(i=1; i<=x; i++){
		fact= fact*i;
	}
	return fact;
	}


int  main()
{
	int n;
	printf("enter a number:");
	scanf("%d",&n);
	int r ;
	printf("enter r:");
	scanf("%d", &r);
	int nfact=factorial(n);
	int rfact=factorial(r);
	int nrfact=factorial(n-r);
	
	int ncr= nfact/(nrfact*rfact);
	printf("%d",ncr);
	return 0;
}
