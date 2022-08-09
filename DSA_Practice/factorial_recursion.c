#include <stdio.h>
int fact(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }

    int smaller = fact(n - 1);
  return  n * smaller;
}
int main()
{

    int n;
    printf("\nenter the value :\n ");
    scanf("%d", &n);
    int k = fact(n);
    printf("%d ", k);

    return 0;
}