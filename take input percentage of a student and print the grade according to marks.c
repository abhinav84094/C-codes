#include <stdio.h>
int main()
{
	int a;
	printf("enter your marks:");
	scanf("%d", &a);
	printf("your marks: %d\n", a);
	if(a>80){
		printf("A grade");
	}
	else{
		if(a>60){
			printf("B grade");
		}
		else{
			if(a>40){
				printf("C grade");
			}
			else{
				printf("fail");
			}
		}
	}
	return 0;
}



