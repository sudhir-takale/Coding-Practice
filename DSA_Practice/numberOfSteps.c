// we count the number of steps to reduce the number to zero
//   41= 40 - 20 -10 - 5 -4- 2 - 1 -0 = numbersteps = 8
//  if we get number is odd then ( n - 1, steps + 1)
//  if we get number is even then ( n/2, steps + 1)

#include <stdio.h>

int steps(int n, int c)
{

    if (n == 0)
    {
        return c;
    }
    int rem;
    if (rem % 2 == 0)
    {
        return steps(n / 2, c + 1);
    }
    else
    {
        return steps(n - 1, c + 1);
    }
}

int main()
{

    int n;
    printf("\nenter the input ");
    scanf("%d", &n);
    int c = 0;
    printf("%d ", steps(n, c));

    return 0;
}