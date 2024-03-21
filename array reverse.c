#include <stdio.h>
int main()
{
	int arr[5];
	int i;
	for(i=1; i<=5; i++){
		printf("enter number %d=", i);
		scanf("%d", &arr[i]);
	}
	for(i=5; i>=1;i--){
		printf("number %d is = %d\n", i, arr[i]);
	}
	return 0;
}
