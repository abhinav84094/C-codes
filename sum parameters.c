#include <stdio.h>
void sum(int n, int s){
//	int s=0; 
//	int i;
//	for(i=1; i<=n; i++){
//	s= s+i;
//}
//	printf("%d", s);
	if(n==0){
			printf("%d", s);
			return ;
	}
	sum(n-1,s+n);

	return;
}
int main()
{
	int n;
	printf("enter a number: ");
	scanf("%d", &n);
	sum(n, 0);
	return 0;
}
