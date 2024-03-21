#include <stdio.h>
#include <limits.h>
int main()
{
	int arr[7]={7,4,5,9,8,2,1};
	int i,j,n=7;
	printf("Unsorted array : \n");
	for(i=0; i<n; i++){
		printf("%d ",arr[i]);
	}
	for(i=0; i<n-1; i++){
		int min=INT_MAX;
		int min_index=-1;
		for(j=i; j<=n-1; j++){
			if(min>arr[j]){
				min=arr[j];
				min_index= j;
			}
		}
		int temp=arr[min_index];
		arr[min_index]= arr[i];
		arr[i]=temp;
	}
	printf("\n");
	printf("Sorted array : \n");
	for(i=0;i<n; i++){
		printf("%d ", arr[i]);
	}
	return 0;
}
