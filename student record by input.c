#include <stdio.h>
#include <string.h>
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
	printf("enter roll number of student : ");
	scanf("%d", &s1.roll);
	printf("enter name of student : ");
	scanf("%s", &s1.name);
	printf("enter department : ");
	scanf("%s",&s1.department);
	printf("enter course : ");
	scanf("%s", &s1.course);
	printf("enter year : ");
	scanf("%d", &s1.year);
	
	printf("\n");
	struct student s2;
	printf("enter roll number of student : ");
	scanf("%d", &s2.roll);
	printf("enter name of student : ");
	scanf("%s", &s2.name);
	printf("enter department : ");
	scanf("%s",&s2.department);
	printf("enter course : ");
	scanf("%s", &s2.course);
	printf("enter year : ");
	scanf("%d", &s2.year);
	
	printf("\n");
	printf("roll : %d\n", s1.roll);
	printf("name : %s\n", s1.name);
	printf("department : %s\n", s1.department);
	printf("course : %s\n", s1.course);
	printf("year : %d\n", s1.year);
	printf("\n");
	printf("roll : %d\n", s2.roll);
	printf("name : %s\n", s2.name);
	printf("department : %s\n", s2.department);
	printf("course : %s\n", s2.course);
	printf("year : %d\n", s2.year);
	
	if(strcmp(s1.department, s2.department)==0){
		printf("department is same");
	}
	else{
		printf("\ndifferent department");
	}
	return 0;
}
