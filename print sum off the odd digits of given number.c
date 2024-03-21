#include<stdio.h>
int main()
{
	int n,r;
	printf("enter a number: ");
	scanf("%d", &n);
	int sum=0;
	while(n>0){
		r=n%10;
		if(r%2!=0){
			sum=sum+r;
		}
		n=n/10;
	}printf("%d", sum);
	return 0;
}
