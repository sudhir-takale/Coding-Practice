#include <stdio.h>
int starpattern(int n);
int starpattern2(int n);
int main()
{
    int n;
    printf("\nHOw many rows you want :");
    scanf("%d", &n);
    starpattern(n);
    printf("\nThe second star function is :");

    starpattern2(n);
    return 0;
}
int starpattern(int n)
{
    int i = 0, j;
    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("*");
        }

        printf("\n");
    }
}
int starpattern2(n)
{
    int i, j;
    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= n + i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}