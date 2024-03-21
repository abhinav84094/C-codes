#include <stdio.h>
int main()
{
	int n;
	printf("enter a number : ");
	scanf("%d", &n);
	int r ;
	printf("enter r:");
	scanf("%d", &r);
	int rfact=1;
	int nfact=1;
	int nrfact=1;
	int i;
	for( i=2; i<=n; i++){
		nfact= nfact*i;
	}
	for(i=2; i<=r; i++){
		rfact=rfact*i;
	}
	for(i=2;i<=n-r; i++){
		nrfact=nrfact*i;
	}
	int ncr= nfact/(nrfact*rfact);
	printf("%d", ncr);
	return 0;
}
