#include<stdio.h>
void main()
{
int a,b,c;
printf("enter the number");
scanf("%d,%d,%d",&a,&b,&c);
if((a>b)&&(a>c))
{
printf("a is larger ");
}
if((b>a)&&(b>c))
{
printf("b is larger");
}
else
{
printf("c is larger ");
}getch();
}
