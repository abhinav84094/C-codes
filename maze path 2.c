#include <stdio.h>
int maze2(int n, int m){
	int rightways =0;
	int downways= 0;
	if(n==1 && m==1){
		return 1;
	}
	if(n==1){
		rightways += maze2(n, m-1);
	}
	if(m==1){
		downways += maze2(n-1, m);
	}
	if(n>1 && m>1){
		rightways += maze2(n, m-1);
		downways += maze2(n-1, m);
	}
	int totalways= rightways+ downways ;
	return totalways;
}
int main()
{
	int n;
	printf("enter number of rows of the maze: ");
	scanf("%d" , &n);
	int m;
	printf("enter number of columns of the maze: ");
	scanf("%d", &m);
	int ways = maze(1,1, n,m);
	printf("%d", ways);
	return 0;
}
