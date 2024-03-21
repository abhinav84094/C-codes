#include <stdio.h>
int main()
{
	int i,sum1=0, sum2=0, difference;
	int n;
	printf("enter size of array : ");
	scanf("%d", &n);
	int arr[n];
	for(i=0; i<=n-1; i++){
		printf("enter number %d = ", i+1);
		scanf("%d",&arr[i]);
	}
	for(i=0; i<=6 ; i++){
		if(i%2!=0){
			sum1=sum1+arr[i];
		}
		else{
			sum2=sum2+arr[i];
		}
	}
	difference=sum1-sum2;
	printf("%d ", difference);
	return 0;
}
