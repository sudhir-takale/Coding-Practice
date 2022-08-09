#include <stdio.h>

int power(int n)
{

    if (n == 0)
    {
        return  ;
    }

    return 2 * power(n - 1);
}

int main()
{

    int n;
    printf("\n");
    scanf("%d", &n);
    printf("%d ", power(n));

    return 0;
}