#include <stdio.h>
int main()
{
	int i,j,a,b;
	printf("enter rows:  ");
	scanf("%d ", &a);
	printf("enter columns:  ");
	scanf("%d ", &b);
	int arr[a][b];
	for(i=0; i<a; i++){
		for(j=0; j<b; j++){
			scanf("%d ", &arr[i][j]);
		}
	}
	printf("\n");
	for(i=0; i<a; i++){
		for(j=0; j<b; j++){
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
