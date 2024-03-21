#include <stdio.h>
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
	int max=arr[0];
	for(i=1; i<=n-1; i++){
		if(max<arr[i]){
			max=arr[i];
		}
	}
	printf("\nthe largest number is : %d", max);
	return 0;
}
