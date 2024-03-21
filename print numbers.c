#include <stdio.h>
int main()
{
	int i,j;
	printf("enter a number where you wants to start: ");
	scanf("%d",&i);
	printf("enter a number where you wants to end: ");
	scanf("%d", &j);
	for(i=i; i<=j; i++){
		printf(" %d", i);
	}
	return 0;
}
