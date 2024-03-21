#include<stdio.h>
int main()
{
int i,j,c;
printf("enter prime no between 1to100 are:\n");
for(j=1;j<100;j++){
c=0;
for(i=1;i<=j;i++)
{
if(j%i==0)
c++;
}
if(c==2)
printf("%d\n",j);
}
return 0;
}
