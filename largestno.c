#include<stdio.h>
#include<conio.h>
void main()
{
int n1,n2,n3;
clrscr();
printf("enter the numbers");
scanf("%d %d %d",&n1,&n2,&n3);
if(n1>=n2&&n1>=n3)
{
printf("%d is largest",n1);
}
elseif(n2>=n1&&n2>=n3)
{
printf("%d is the largest",n2)
}
else
{
printf("%d is the largest",n3);
}
getch();
}
