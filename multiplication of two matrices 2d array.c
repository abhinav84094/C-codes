#include <stdio.h>
int main()
{
	int i,j, r,c ;
	printf("enter number of rows : ");
	scanf("%d", &r);
	printf("enter number of columns: ");
	scanf("%d", &c);
	printf("enter all the elements of 1st matrix : \n");
	int arr[r][c];
	for(i=0; i<r; i++){
		for(j=0; j<c; j++){
			scanf("%d", &arr[i][j]);
		}
	}
	printf("enter all the elements of 2nd matrix : \n");
	int brr[c][r];
	for(i=0; i<c; i++){
		for(j=0; j<r; j++){
			scanf("%d", &brr[i][j]);
		}
	}
	int cr=2;
	int k;
	int res[r][c];
	for(i=0; i<r; i++){
		for(j=0; j<c; j++){
			 res[i][j]= 0;
			for(k=0; k<cr; k++){
				res[i][j] += arr[i][k]* brr[k][j];
			}
		}
	}
	for(i=0; i<r; i++){
		for(j=0; j<c; j++){
			printf("%d ",res[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
