#include <stdio.h>
int main()
{
	int n;
	printf("enter size of array: ");
	scanf("%d", &n);
	int i, arr[i];
	for(i=0; i<n; i++){
		printf("enter element %d : ", i+1);
		scanf("%d", &arr[i]);
	}                       
	for(i=n-1; i>=0; i--){
		printf("enter element %d : %d\n", i+1, arr[i]);
	}
	return 0;
}
