#include <stdio.h>
int main()
{
	int i,j,row,n;
	printf("enter number you want to print: ");
	scanf("%d", &n);
	printf("enter row: ");
	scanf("%d ", &row);

	for( i=1; i<=row; i++){
		for(j=1; j<=n; j++){
			printf("%d ",j);
		}
		printf("\n");
	}
	return 0;
}
