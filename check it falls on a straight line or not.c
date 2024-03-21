#include <stdio.h>
int main()
{
	double x1, y1, x2, y2, x3, y3 ;
	double m1 = (y2-y1)/(x2-x1);
	double m2 = (y3-y2)/(x3-x2);
	if(m1==m2){
		printf("this falls on straight line");
	}
	else{
		printf("this does not fall on a straight line");
	}
	return 0;
}
