#include <stdio.h>
#include<stdbool.h>
int main()
{
	int arr[7]={1,2,3,4,5,6,7};
	int i,x;
	printf("enter a number: ");
	scanf("%d", &x);
	bool check=false;
	for(i=0; i<=6; i++){
	if(arr[i]==x){
		check=true;
		break;
	}
	}
	if(check==false){
		printf("%d is not present in the array",x);
	}
	else{
		printf("%d is present in the array",x);
	}
	return 0;
}
