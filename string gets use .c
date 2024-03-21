#include <stdio.h>
#include <string.h>
int main()
{
	char str[40];
	puts("enter a string: ");
//	scanf("%s", str);
	gets(str);
	puts("the input is: ");
	puts(str);
	return 0;
}
