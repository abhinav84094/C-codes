#include <stdio.h>
int main()
{
	int i,j ;
	int arr[5]={5,2,3,1,4};
	int n=5;
	printf("Unsorted array : \n");
	for(i=0; i<n; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
	for(i=1; i<=n-1; i++){
		j=i;
		while(j>=1 && arr[j]<arr[j-1]){
			int swap=arr[j];
			arr[j]=arr[j-1];
			arr[j-1]=swap;
			j-- ;
		}
	}
	printf("Sorted array : \n");
	for(i=0; i<n; i++){
		printf("%d ", arr[i]);
	}
	return 0;
}
