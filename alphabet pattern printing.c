//#include <stdio.h>
//int main()
//{
//	int a,n,i,j;
//	printf("enter a number: ");
//	scanf("%d", &n);
//	for(i=1; i<=n; i++){
//		for(j=65; j<=68; j++){
//			printf("%c", j);
//		}
//		printf("\n");
//	}
//	return 0;
//}




#include <stdio.h>
int main()
{
	int a,n,i,j;
	printf("enter a number: ");
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		a=65;
		for(j=1; j<=n; j++){
			printf("%c", a);
			a=a+1;
		}
		printf("\n");
	}
	return 0;
}
