#include<stdio.h>
int main(){
	int i,j,a=5, b=5;
	int arr[a][b];
//	for(i=0; i<a; i++){
//		for(j=0; j<b; j++){
//			printf("enter marks of roll %d: ", i+1);
//			scanf("%d ", &arr[i][j]);
//		}
//	}
	printf("\n");
	for(i=0; i<a; i++){
		for(j=0; j<b; j++){
			printf("10 ", arr[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
