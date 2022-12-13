#include <stdio.h>

int main()
{

    int a[] = {65, 7, 34, 8, 4, 7, 3, 8, 45, 2, 5, 8, 4, 7, 3, 7, 3, 47};
    int n = sizeof(a) / sizeof(4);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    for (int j = n; j >= 0; j--)
    {
        printf("%d ", a[j]);
    }
    // printf("%d",n); //to get the size of the array..

    return 0;
}