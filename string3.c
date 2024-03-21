#include <stdio.h>
int main()
{
	char arr[]="Hello Everyone";
	arr[1]= 'b';
	int i=0;
	while(arr[i]!='\0'){
		printf("%c",arr[i]);
		i++;
	}
	return 0;
}
