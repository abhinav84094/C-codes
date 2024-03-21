#include<stdio.h>
#include<conio.h>
void main()
{int year;
printf("enter the no.");
scanf("%d",&year);
if(year%4==0&&year%100!=0||year%400==0&&year%100==0)
printf("year is leap year");
else
printf("not leap year");
getch();
}
