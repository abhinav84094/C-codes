#include <stdio.h>
int main()
{
	int i,j, r ;
	printf("enter number of rows  and columns: ");
	scanf("%d", &r);
	int arr[r][r];
	for(i=0; i<r; i++){
		for(j=0; j<r; j++){
			scanf("%d", &arr[i][j]);
		}
	}
	int brr[r][r] ;
	for(i=0; i<r; i++){
		for(j=i; j<r; j++){
			int temp= arr[i][j];
			arr[i][j]= arr[j][i];
			arr[j][i]=temp;
		}
		printf("\n");
	}
	for(i=0; i<r; i++){
		for(j=0; j<r; j++){
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
