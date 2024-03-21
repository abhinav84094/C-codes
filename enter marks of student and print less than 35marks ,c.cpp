#include <stdio.h>
int main()
{
	int marks[10];
	int i;
	for(i=0; i<=9; i++){
		printf("enter marks of roll number %d = ", i+1);
		scanf("%d ", &marks[i]);
	}
	for(i=0; i<=9; i++){
		printf("\nmarks of roll number %d = %d", i+1, marks[i]);
	}
	for(i=0; i<=9; i++){
	if(marks[i]<35){
		printf("\nroll number of student who obtain less than 35marks is = %d", i+1);
	}
	}
	return 0;
}
