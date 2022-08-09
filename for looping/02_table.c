#include <stdio.h>

int main()
{

   int i, k, n;
   printf("Enter the number which you want to table \n:");
   scanf("%d", &n);

   for (i = 1; i <= 10; i++)
   {
      k = i * n;
      printf("%d * %d = %d\n", n, i, k);
   }

   return 0;
}