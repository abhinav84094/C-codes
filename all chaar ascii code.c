#include <stdio.h>
int main()
{
	int i;
	for( i=65; i<=90; i++){
		printf("%d=", i);
		char ch= (char)i;
		printf("%c\n",i);
	}
}
