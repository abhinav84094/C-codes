#include<stdio.h>
int main(){
	int i,j;
	int arr[2][3]= {{1,2,3},{4,5,6}};
	int min= arr[i][j];
	for(i=0; i<2; i++){
		for(j=0; j<3; j++){
			if(min>arr[i][j]){
				min=arr[i][j];	
			}
		}
	}
	printf("the min number is %d", min);
	return 0;
}
