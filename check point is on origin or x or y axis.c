#include <stdio.h>
int main()
{
	int x,y ;
	printf("enter origin:");
	scanf("%d %d", &x, &y);
	printf("x:y :: %d:%d\n", x,y);
	if(x==0 && y==0){
		printf("point is on origin");
	}
	else if(x==0){
		printf("point is on y-axis");
	}
	else if(y==0){
		printf("point is on x-axis");
 	}
 	else{
 		printf("point is not on axis");
	 }
 	
 	return 0;
}
