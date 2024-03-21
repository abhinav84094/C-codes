#include<stdio.h>
int main()
{
	int n,x;
	printf("enter a number: ");
	scanf("%d", &n);
	int r=0;
	while(n>0){
		x=n%10;
		r=r+x;
		r= r*10;
		n=n/10;
	}
	r=r/10;
	printf("%d", r);
	return 0;
}
