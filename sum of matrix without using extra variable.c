#include<stdio.h>
int main(){
	int i,j;
	int arr[2][3]= {{1,2,3},{4,5,6}};
	int brr[2][3]={{6,5,4}, {3,2,1}};
	for(i=0; i<2; i++){
		for(j=0; j<3; j++){
			printf("%d ", arr[i][j]+brr[i][j]);
		}
		printf("\n");
	}
	return 0;
}