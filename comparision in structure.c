#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main()
{
	typedef struct data{
		int date;
		int month;
		int year;
	}data;
	data a,b,c;
	
	a.date=1;
	a.month=01;
	a.year=2023;
	
	b.date=20;
	b.month=07;
	b.year=2023;
	
	c.date=1;
	c.month=01;
	c.year=2023;
	
	printf("A : %d, %d, %d\n", a.date, a.month, a.year);
	printf("B : %d, %d, %d\n", b.date, b.month, b.year);
	printf("C : %d, %d, %d\n", c.date, c.month, c.year);
	
//	if(a.date==b.date){
//		printf("the dates are same");
//	}
//	else{
//		printf("the dates are different");
//	}

	bool flag = true;
	if(a.date!=b.date){
		flag= false;
	}
	if(a.month!=b.month){
		flag =false ;
	}
	if(a.year!=b.year){
		flag =false;
	}
	
	if(flag==false){
		printf("the a and b data is different\n");
	}
	else{
		printf("the a and b data is same\n");
	}

	
	bool f= true;
	if(a.date!=c.date){
		f= false;
	}
	if(a.month!=c.month){
		f =false ;
	}
	if(a.year!=c.year){
		f =false;
	}
	
	if(f==false){
		printf("the a and c data is different");
	}
	else{
		printf("the a and c data is same");
	}

	return 0;
}
