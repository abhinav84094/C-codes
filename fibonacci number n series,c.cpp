 #include <stdio.h>
int main()
{
	int n;
	printf("enter a number: ");
	scanf("%d", &n);
	printf("the fibonacci series of %d is :\n", n);
	int sum=1, a=1, b=1;
	for(int i=1; i<=n; i++){
		 printf("%d\n", a);
		sum=a+b;
		a=b;
		b=sum;
	}
	return 0;
}
