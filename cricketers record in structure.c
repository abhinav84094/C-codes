#include <stdio.h>
#include <string.h>
int main()
{
	typedef struct cricket{
		char name[15];
		int age;
		int run;
		int match;
	}cricketer;
	
	int i;
	cricketer arr[2];
	for(i=0; i<2; i++){
		printf("\n");
		printf("enter name of cricketer : ");
		fflush(stdin);
		scanf("%[^\n]s", &arr[i].name);
		printf("enter age of cricketer : ");
		scanf("%d", &arr[i].age);
		printf("enter average run : ");
		scanf("%d", &arr[i].run);
		printf("number of total matches : ");
		scanf("%d", &arr[i].match);
	}
	for(i=0; i<2; i++){
		printf("\n");
		printf("\nname of cricketer : %s", arr[i].name);
		printf("\nage of cricketer : %d", arr[i].age);
		printf("\naverage run : %d", arr[i].run);
		printf("\nnumber of total matches : %d",arr[i].match);
	}
	
	return 0;
}
