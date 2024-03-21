#include<stdio.h>
int main(){
	int i,j, a,b;
	printf("enter number of rows:  ");
	scanf("%d ", &a);
	printf("enter number of columns : ");
	scanf("%d", &b);
	int arr[a][b];
	int brr[a][b];
	int res[a][b];
	for(i=0; i<a; i++){
		for(j=0; j<b; j++){
			scanf("%d", &arr[i][j]);			
		}
	}
		for(i=0; i<a; i++){
		for(j=0; j<b; j++){
			scanf("%d", &brr[i][j]);			
		}
	}
	for(i=0; i<a; i++){
		for(j=0; j<b; j++){
			 res[i][j]= arr[i][j] + brr[i][j];			
		}
	}
	printf("\n");
	for(i=0; i<a; i++){
		for(j=0; j<b; j++){
			printf("%d ", res[i][j]);
		}
		printf("\n");
	}
	return 0;
}
