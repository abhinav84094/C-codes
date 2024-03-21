#include <stdio.h>
int main()
{
	int l,b,j,i;
	printf("enter length: ");
	scanf("%d", &l);
	printf("enter bredth:");
	scanf("%d",&b);
	for(i=1; i<=b; i++){
		for(j=1; j<=l; j++){
			if(j==1|| i==1 || j==l || i==b){
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
