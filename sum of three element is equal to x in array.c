#include <stdio.h>
int main()
{

	int n;
	printf("enter size of array: ");
	scanf("%d", &n);
	int arr[n];
	int i,j,k;
	for(i=0; i<=n-1; i++ ){
		printf("enter number %d: ",i+1);
		scanf("%d", &arr[i]);
	}
	for(i=0; i<=n-1; i++){
		printf("%d ", arr[i]);
	}
	int x;
	int totalpairs=0;
	printf("\nenter sum of three elements = ");
	scanf("%d", &x);
	for(i=0; i<=n-1; i++){
		for(j=i+1; j<=n-1; j++){
			for(k=j+1; j<=n-1; j++)
			if(arr[i]+arr[j]+arr[k]==x){
				totalpairs++;
				printf("%d %d %d\n", arr[i], arr[j], arr[k]);
			}
		}
	}
	printf("total numbers of pair = %d", totalpairs);
	return 0;
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
