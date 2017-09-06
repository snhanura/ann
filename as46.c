# include<stdio.h>
void main()
{
int i,n;
printf("enter the number which table is needed"):
scanf("%d",n);
for(i=0;i<n;i++)
{
printf("the multipivation table is");
printf("%d*%d=%d",i,n,i*n);
}
getch();
}
