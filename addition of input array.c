#include <stdio.h>
int main()
{
	int arr[5];
	int sum=0;
	int i;
	for(i=0; i<=4; i++ ){
		printf("enter number %d: ",i+1);
		scanf("%d", &arr[i]);
	}
	for(i=0; i<=4; i++){
		sum= sum+arr[i];
		}
	printf("the sum is %d", sum);
	return 0;
}
