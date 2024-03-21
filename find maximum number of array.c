#include <stdio.h>
int main()
{
	int n;
	printf("enter size of array: ");
	scanf("%d", &n);
	int arr[n], i;
	for(i=0; i<=n-1; i++){
		printf("enter number %d = ", i+1);
		scanf("%d",&arr[i]);
	}
	int min=arr[0];
	for(i=0; i<=n-1; i++){
		if(min>arr[i]){
			min=arr[i];
	}
	}
	printf("the maximum number is : %d", min);
	return 0;
	}

