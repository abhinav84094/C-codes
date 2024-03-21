#include<stdio.h>
int main(){
//	int i,j;
//	int arr[2][3]= {{1,2,3},{4,5,6}};
	int i,j,a,b;
	printf("enter number of rows:  ");
	scanf("%d ", &a);
	printf("enter number of columns : ");
	scanf("%d", &b);
	int arr[a][b];
	for(i=0; i<a; i++){
		for(j=0; j<b; j++){
		 	printf("enter element %d: ", i+1);
			 scanf("%d ", &arr[i][j]);			
			}
		}
	int sum = 0;
	for(i=0; i<a; i++){
		for(j=0; j<b; j++){
			sum= sum+arr[i][j];
		}
		printf("\n");
}
	printf("the sum of the given matrix is %d", sum);
	return 0;
}
