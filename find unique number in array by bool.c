#include <stdio.h>
#include<stdbool.h>
int main()
{
	int i,j;
	int arr[7]={1,2,3,4,3,2,1};
	bool check=false;
	for(i=0; i<=6; i++){
		for(j=i+1; j<=6; j++){
			if(arr[i]==arr[j]){
				check=true;
			}
		}
	if(check==false){
		printf("%d",arr[i]);
		break;
	}
}
	return 0;
}
