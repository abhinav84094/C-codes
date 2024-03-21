#include <stdio.h>
int main()
{
	int n,i;
	printf("enter a number: ");
	scanf("%d",&n);
	
	if(n%2==0){
	printf("the sum is: %d", -(n/2));
	}
	else{
		printf("the sum is : %d", -(n/2)+n);
	}
	return 0;
}

