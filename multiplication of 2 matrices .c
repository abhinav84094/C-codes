#include <stdio.h>
int main()
{
	int i,j, r,c, n,m ,k;
	printf("enter number of rows of 1st matrix : ");
	scanf("%d", &r);
	printf("enter number of columns of 1st matrix : ");
	scanf("%d", &c);
	printf("enter all the elements of 1st matrix : \n");
	int a[r][c];
	for(i=0; i<r; i++){
		for(j=0; j<c; j++){
			scanf("%d", &a[i][j]);
		}
	}
	printf("enter number of rows of 2nd matrix  : ");
	scanf("%d", &m);
	printf("enter number of columns of 2nd matrix : ");
	scanf("%d", &n);
	printf("enter all the elements of 2nd matrix : \n");
	int b[m][n];
	for(i=0; i<m; i++){
		for(j=0; j<n; j++){
			scanf("%d", &b[i][j]);
		}
	}
	int res[r][n];
	
	if(c!= m){
		printf("the matrices cannot be multiplied ");
	}
	else{
		for(i=0; i<r; i++){
			for(j=0; j<n; j++){
				res[i][j]= 0;
				for(k=0; k<c; k++){
					res[i][j] += a[i][k]* b[k][j];
				}
			}
		}
	}
	printf("the result is : \n");
	for(i=0; i<r; i++){
		for(j=0; j<n; j++){
			printf("%d ", res[i][j]);
		}
		printf("\n");
	}
	return 0;
}
