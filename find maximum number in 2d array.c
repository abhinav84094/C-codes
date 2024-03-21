#include<stdio.h>
int main(){
	int i,j;
	int arr[2][3]= {{1,2,3},{4,5,6}};
	int max= arr[i][j];
	for(i=0; i<2; i++){
		for(j=0; j<3; j++){
			if(max<arr[i][j]){
				max=arr[i][j];	
			}
		}
	}
	printf("the maximum number is %d", max);
	return 0;
}
