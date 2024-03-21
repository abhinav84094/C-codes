#include <stdio.h>
int main()
{
	int i,j;
	int arr[7]={1,2,3,4,3,2,1};
	for(i=0; i<=6; i++){
		for(j=i+1; j<=6; j++){
			if(arr[i]==arr[j]){
				printf("%d is duplicate element in the array\n", arr[i]);
				i++;
				j=i+1;
			}
		}
	}
	return 0;
}
