#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main()
{
	typedef struct student{
		int roll;
		char name[20];
		char department[20];
		char course[20];
		int year;
};
	struct student s1;
	s1.roll=1;
	strcpy(s1.name, "aman");
	strcpy(s1.department, "Science");
	strcpy(s1.course, "BCA");
	s1.year=2022;
	printf("roll : %d\n", s1.roll);
	printf("name : %s\n", s1.name);
	printf("department : %s\n", s1.department);
	printf("course : %s\n", s1.course);
	printf("year : %d\n", s1.year);
	
	printf("\n");
	struct student s2;
	s2.roll=2;
	strcpy(s2.name, "abhinav");
	strcpy(s2.department, "Arts");
	strcpy(s2.course, "BBA");
	s2.year=2022;
	printf("roll : %d\n", s2.roll);
	printf("name : %s\n", s2.name);
	printf("department : %s\n", s2.department);
	printf("course : %s\n", s2.course);
	printf("year : %d\n", s2.year);
	
	if(strcmp(s1.department , s2.department)==0){
		printf("same department");
	}
	else{
		printf("different department");
	}
	return 0;
}
