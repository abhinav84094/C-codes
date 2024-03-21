#include <stdio.h>
int powerlog(int a , int b){
	if(b==0){
		return 1;
	}
	int x = powerlog(a, b/2);	
	if(b%2==0){
		int ans = x*x ;
		return ans;
	}
	else{
	int ans= x*x*a;
	return ans;
	}
	return ;
}
int main()
{
	int a,b, ans;
	printf("enter a number: ");
	scanf("%d", &a);
	printf("enter power: ");
	scanf("%d", &b);
	int p=power(a,b);
	printf("%d is raised to the power %d is : %d", a,b, ans);
	return 0;
}
