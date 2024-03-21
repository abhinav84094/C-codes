#include <stdio.h>
void reverse(int arr[]){
	int i=0;
	int n, j=n-1;
	while(i<j){
		int temp= arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
		i++;
		j--;
	}
}
int main()
{
	int i, arr[i] ;
	int n;
	printf("enter size of array: ");
	scanf("%d", &n);
	for(i=0; i<n; i++){
		printf("enter element %d : ", i+1);
		scanf("%d", &arr[i]);
	}
	reverse(arr);
	for(i=0; i<n; i++){
		printf("enter element %d : %d\n", i+1, arr[i]);       
	}       
	return 0;
}
