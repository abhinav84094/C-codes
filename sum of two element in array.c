#include <stdio.h>
int main()
{
	int i,j;
	int arr[8]={1,2,3,4,5,6,7,8} ;
	int totalpairs=0;
	int x;
	printf("enter sum of two elements = ");
	scanf("%d", &x);
	for(i=0; i<=7; i++){
		for(j=i+1; j<=7; j++){
			if(arr[i]+arr[j]==x){
				totalpairs++;
				printf("%d %d\n", arr[i], arr[j]);
			}
		}
	}
	printf("total numbers of pair = %d", totalpairs);
	return 0;
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
