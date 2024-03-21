#include <stdio.h>
int main()
{
	int n;
	printf("enter size of array: ");
	scanf("%d", &n);
	int arr[n];
	int multiply=1;
	int i;
	for(i=0; i<=n-1; i++ ){
		printf("enter number %d: ",i+1);
		scanf("%d", &arr[i]);
	}
	for(i=0; i<=n-1; i++){
		multiply= multiply*arr[i];
		}
	printf("the sum is %d", multiply);
	return 0;
}
