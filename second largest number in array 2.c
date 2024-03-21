#include <stdio.h>
#include <limits.h>
int main()
{

	int n;
	printf("enter size of array: ");
	scanf("%d", &n);
	int arr[n];
	int i,j,k;
	for(i=0; i<=n-1; i++ ){
		printf("enter number %d: ",i+1);
		scanf("%d", &arr[i]);
	}
	for(i=0; i<=n-1; i++){
		printf("%d ", arr[i]);
	}
	int max=INT_MIN;
	int smax=INT_MIN;
	for(i=0; i<=n-1; i++){
		if(max<arr[i]){
			smax=max;
			max=arr[i];
		}
	}
	printf("\nthe second largest number is : %d", smax);
	return 0;
}

