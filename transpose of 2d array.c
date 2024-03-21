#include <stdio.h>
int main()
{
	int i,j, r,c ;
	printf("enter number of rows : ");
	scanf("%d", &r);
	printf("enter number of column : ");
	scanf("%d", &c);
	int arr[r][c];
	for(i=0; i<r; i++){
		for(j=0; j<c; j++){
			scanf("%d", &arr[i][j]);
		}
		
	}
	int brr[c][r] ;
	for(i=0; i<c; i++){
		for(j=0; j<r; j++){
			brr[i][j] = arr[j][i];
		}
		printf("\n");
	}
	for(i=0; i<c; i++){
		for(j=0; j<r; j++){
			printf("%d ", brr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
