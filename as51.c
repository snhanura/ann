#include <stdio.h>
 int main()
{
   int a, b, *ptr1, *ptr2, sum;
   printf("Enter two integers to add\n");
   scanf("%d%d", &a, &b);
   ptr1 = &a;
   ptr2= &b;
   sum = *ptr1 + *ptr2;
   printf("Sum of entered numbers = %d\n",sum);
   return 0;
}
