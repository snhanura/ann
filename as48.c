## include<stdio.h>
void main()
{
int a[100],n,sum=0;
float avg;
printf("enter the n value");
scanf("%d",&n);
for(i=0;a[i]<n;i++)
{
scanf("%d",&a[i]);
sum=sum+a[i];
}
avg=sum/2;
}
