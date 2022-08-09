#include <stdio.h>

// 0,1,1,2,3,5,8,13,21....
// 0,1,2,3,4,5,6,7,8,9,... there  are it's indexing

int fibonacci_series(int n)
{

    if (n == 0 || n == 1)
    {
        return n;
    }
    return fibonacci_series(n - 1) + fibonacci_series(n - 2);
}

int main()
{

    int num;
    printf("\n Enter the value of the Input :\n");
    scanf("%d", &num);
    for (int i = 0; i < num; i++)
    {
        printf(" %d  ", fibonacci_series(i));
    }

    return 0;
}