#include <stdio.h>
#include <string.h>
int main()
{
	struct person{
		int salary;
		int age;
		char name[20];
	};
	struct person a;
	strcpy(a.name, "aman");
	a.salary=50000;
	a.age=21;
	printf("\n     1st     \n");
	printf("%s\n", a.name);
	printf("%d\n", a.salary);
	printf("%d\n", a.age);
	
	
		struct person b;
	strcpy(b.name, "abhinav");
	b.salary=45000;
	b.age=20;
	printf("\n     2nd     \n");
	printf("%s\n", b.name);
	printf("%d\n", b.salary);
	printf("%d\n", b.age);
	
	return 0;
}
