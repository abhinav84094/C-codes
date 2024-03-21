#include <stdio.h>
int main()
{
	int n;
	printf("enter size of array: ");
	scanf("%d", &n);
	int i, arr[i] , brr[i];
	for(i=0; i<n; i++){
		printf("enter element %d : ", i+1);
		scanf("%d", &arr[i]);
	}                       
	for(i=0; i<n; i++){
		brr[i]=arr[n-i-1];
		printf("enter element %d : %d\n", i+1, brr[i]);
	
	}       
	return 0;
}
