#include <stdio.h>
int main()
{
	int arr[5];
	int i;
	for(i=0; i<=4; i++ ){
		scanf("%d", &arr[i]);
	}
	for(i=0; i<=4; i++){
	printf("the %d number is : %d\n", i+1 ,arr[i]);
	}
	return 0;
}
