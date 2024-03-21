#include <stdio.h>
int main()
{
	int i;
	for( i=97; i<=123; i++){
		printf("%c\n", i);
		char ch= (char)i;
		printf("%c\n",i);
	}
}
