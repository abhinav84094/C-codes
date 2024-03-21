#include <stdio.h>
int min(int a , int b){
	if(a<b){
		return a;
	}
	else{
		return b;
	}
}
int gcd(int a, int b){
	int hcf, i;
	for( i=min; i>=1 ; i--){
		if( a%i==0 && b%i==0){
		hcf=i;
		break;
		}
	}
	return hcf;
}
int main(){
	int a , b;
	printf("enter a = ");
	scanf("%d", &a);
	printf("enter b = ");
	scanf("%d", &b);
	int hcf= gcd(a, b);
	printf("the hcf is : %d", hcf);
	
}
