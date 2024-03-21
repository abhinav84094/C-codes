#include <stdio.h>
int main()
{
	int arr[5]={5,2,4,1,3};
	int i,j, n=5;
	for(i=0; i<n-1; i++){
		for(j=0; j<n-1-i; j++){
			if(arr[j]>arr[j+1]){
				int temp= arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	for(i=0; i<5; i++){
		printf("%d ",arr[i]);
	}
	return 0;
}
