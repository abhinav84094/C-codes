#include <stdio.h>
int main()
{
	int  product=1,n ;
	printf("enter a number: ");
	scanf("%d", &n);
	int i;
	
	for( i=1; i<=n; i++){
		product= product*i ;
	    printf("%d\n",  product);
	}
	printf("the factorial is: %d", product);
	return 0;
}
