#include<stdio.h>
int main()
{
	int area, perimeter, length, breadth;
	printf("enter length of rectangle:");
	scanf("%d", &length); 
	printf("enter breadth of rectangle:");
	scanf("%d",&breadth );
	area = length*breadth ;
	perimeter = 2*(length + breadth);
	printf("the area of the rectagle is:%d\n", area);
	printf("the perimeter of the rectangle is:%d\n", perimeter);
	if(area>perimeter){
		printf("the area of the rectangle is greater than its perimeter");
	}
	else{
		printf("the area of the rectangle is less than perimeter");
	}
	return 0;
}
