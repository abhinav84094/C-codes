#include <stdio.h>
int main()
{
	int arr[7]={1,2,3,4,5,6,7};
	int i,x;
	printf("enter a number: ");
	scanf("%d", &x);
	for(i=0; i<=6; i++){
	if(arr[i]==x){
		printf("%d is present in the array and its index is %d", x,i);
		break;
	}
	}
	return 0;
}
