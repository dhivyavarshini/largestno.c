#include<stdio.h>
#include<conio.h>
void main()
{
double n1,n2,n3;
clrscr();
printf("enter the numbers");
scanf("%lf %lf %lf",&n1,&n2,&n3);
if(n1>=n2&&n1>=n3)
{
printf("%lf is largest",n1);
}
elseif(n2>=n1&&n2>=n3)
{
printf("%lf is the largest",n2)
}
else
{
printf("%lf is the largest",n3);
}
getch();
}
