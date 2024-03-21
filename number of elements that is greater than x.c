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
	int x=arr[0], count=0;
	printf("enter number which is greater than x: ");
	scanf("%d", &x);
	for(i=0; i<=n-1; i++){
		if(x<arr[i]){
			count= count+1;
	}
	}
	printf("the maximum number is : %d", count );
	return 0;
	}

