#include <stdio.h>
int main()
{
	int a;
	printf("enter your marks:");
	scanf("%d", &a);
	printf("your marks: %d\n", a);
	if(a>=90 && a<=100){
		printf("excellent student");
	}
	else if(a<90 && a>=80){
		printf("very good boy");
	}
	else if(a<80 && a>=70){
		printf("good student");
	}
	else if(a<70 && a>=60){
		printf("can do better");
	}
	else if(a<60 && a>=50){
		printf("average");
	}
	else if(a<50 && a>=40){
		printf("below average");
	}
	else{
		printf("fail");
	}
	return 0;
}
