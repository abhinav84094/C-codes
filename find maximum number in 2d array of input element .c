#include<stdio.h>
int main(){
	int i,j,a,b;
	printf("enter number of rows:  ");
	scanf("%d ", &a);
	printf("enter number of columns : ");
	scanf("%d", &b);
	int arr[a][b];
	for(i=0; i<a; i++){
		for(j=0; j<b; j++){
			 scanf("%d ", &arr[i][j]);			
			}
		}
	int max= arr[i][j];
	for(i=0; i<2; i++){
		for(j=0; j<3; j++){
			if(max<arr[i][j]){
				max=arr[i][j];	
			}
		}
	}
	printf("the maximum0b number is %d", max);
	return 0;
}
