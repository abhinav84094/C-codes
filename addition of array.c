#include <stdio.h>
int main()
{
	int arr[5]= {6,3,5,2,7};
	int sum=0;
	int i;
	for(i=0; i<=4; i++ ){
		sum=sum+arr[i];
	}
	printf("the sum is %d", sum);
	return 0;
}
