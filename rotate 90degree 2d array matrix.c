#include <stdio.h>
int main()
{
	int i,j, n ;
	printf("enter number of rows  and columns: ");
	scanf("%d", &n);
	printf("enter all the elements: \n");
	int arr[n][n];
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			scanf("%d", &arr[i][j]);
		}
	}
	for(i=0; i<n; i++){
		for(j=0; j<=i; j++){
			int temp= arr[i][j];
			arr[i][j]= arr[j][i];
			arr[j][i]=temp;
		}
		printf("\n");
	}
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	for(i=0; i<n; i++){
		j=0;
		int k=n-1 ;
		while (j<k){
			int temp= arr[i][j];
			arr[i][j]= arr[i][k];
			arr[i][k]=temp;
			j++;
			k-- ;
		}
		printf("\n");
	}
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
