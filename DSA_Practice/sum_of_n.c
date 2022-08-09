#include <stdio.h>

int sum(int n)
{
    if (n == 1)
    {
        return 1;
    }

    int res = n + sum(n - 1);
    return res;
}
int main()
{

    int num;
    printf("\nEnter the input :\n");
    scanf("%d", &num);
    int c = sum(num);
    printf("%d", c);

    return 0;
}