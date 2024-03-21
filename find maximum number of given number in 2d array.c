#include <stdio.h>
int main()
{
	int arr[3][4]= {{1,0,1,1},{0,1,0,1},{1,1,1,1}};
	int maxcount=0;
	int maxindex= -1 ;
	int i,j;
	for(i=0; i<3; i++){
		int count=0;
		for(j=0; j<4; j++){
			if(arr[i][j]==1){
				count++ ;
			}
		}
		if(maxcount<count ){
			maxcount= count ;				maxindex= 1;
			}
		printf("\n");
	}
	printf("%d", maxcount);
	return 0;	
}
