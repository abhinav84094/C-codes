#include <stdio.h>
int main()
{
	int n;
	printf("enter a number: ");
	scanf("%d", &n);
	int sum=0;
	int i;
	for( i=1; i<=n; i++){
		if(i%2==0){
			sum=sum-i;
		}
		else{
			sum=sum+i;
		}
	}
	printf("the sum is : %d", sum);
	return 0;
}
