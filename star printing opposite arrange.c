//#include <stdio.h>
//int main()
//{
//	int n;
//	printf("enter a number: ");
//	scanf("%d", &n);
//	int i,j;
//	for(j=n; j>0; j--){
//		for ( i=j; i>0; i--){
//			printf("*");
//	}
//	printf("\n");
//	}
//	return 0;
//}



#include <stdio.h>
int main()
{
	int n;
	printf("enter a number: ");
	scanf("%d", &n);
	int i,j;
	for(j=1; j<=n; j++){
		for ( i=1; i<=n+1-j; i++){
			printf("*");
	}
	printf("\n");
	}
	return 0;
}
