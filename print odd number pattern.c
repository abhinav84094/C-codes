//#include <stdio.h>
//int main()
//{
//	int i,j,a,n;
//	printf("enter a number :");
//	scanf("%d", &n);
//	for(i=1; i<=n; i++){
//		for(j=1; j<=i; j++){
//			if(j%2!=0){
//				printf("%d", j);
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}


#include <stdio.h>
int main()
{
	int i,j,a,n;
	printf("enter a number :");
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		int a=1;
		for(j=1; j<=i; j++){
				printf("%d ", a);
			a=a+2;
		}
		printf("\n");
	}
	return 0;
}
