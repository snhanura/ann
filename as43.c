#include<stdio.h>
void main()
{
char s1[30],s2[30];
printf("enter the 2 strings values");
scanf("%c%c",&s1, &s2);
while(s1[30]!='\0'&&s2[30]!='\0')
{
printf("the concardinate values are",s1+s2);
}
getch();
}
