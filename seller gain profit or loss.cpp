#include <stdio.h>
int main()
{
	int cp, sp ;
	printf("enter the cost pric of item:");
	scanf("%d", &cp);
	printf("enter the selling price of item:");
	scanf("%d", &sp);
	if (sp>cp){
		printf("the seller gain profit of rs:%d", sp-cp);
	}
	else if(sp==cp){
		printf("no loss no profit");
	}
	else{
		printf("the seller gain loss of rs:%d", cp-sp);
	}
	return 0;
}
