#include <stdio.h>
int main()
{
	char arr[]= "Abhinav Prakash\0" ;
	int i=0;
//	while(i<15){
//		printf("%c",arr[i]);
//		i++;
//	}
	while(arr[i]!='\0'){
		printf("%c", arr[i]);
		i++ ;
	}
	return 0;
}
