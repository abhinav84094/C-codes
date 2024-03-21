#include <stdio.h>
#include <string.h>
int main()
{
	struct book{
	int page ;
	char name[45] ;
	float price;
	};
	
	printf("\n   A   \n");
	struct book a;
//	a.name[0]='S';
//	a.name[1]='e';
//	a.name[2]='c';	
//	a.name[3]='r';	
//	a.name[4]='e';
//	a.name[5]='t';	
	strcpy(a.name, "Secret Game");
	a.page= 100;
	a.price=150.50;
	printf("%d\n",a.page);
	printf("%s\n", a.name);
	printf("%f\n", a.price);
	
	printf("\n   B   \n");
	struct book b;
//	a.name[0]='G';
//	a.name[1]='a';
//	a.name[2]='m';	
//	a.name[3]='e';	
	
	strcpy(b.name, "Game Thrown");
	b.page= 400;
	b.price=100.50;
	printf("%d\n",b.page);
	printf("%s\n", b.name);
	printf("%f\n", b.price);
	
	return 0;
}
