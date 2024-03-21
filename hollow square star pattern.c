#include <stdio.h>
int main()
{
	int l,j,i;
	printf("enter length: ");
	scanf("%d", &l);

	for(i=1; i<=l; i++){
		for(j=1; j<=l; j++){
			if(j==1|| i==1 || j==l || i==l){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
