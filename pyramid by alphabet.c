#include <stdio.h>
int main()
{
	int a,b,i,j;
	printf("enter a number:");
	scanf("%d",  &a);
	for(i=1; i<=a; i++){
		b=65;
		for (j=1; j<=i; j++){
			printf("%c",b++);
		}
		printf("\n");
	}
	return 0;
}
