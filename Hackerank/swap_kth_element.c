#include <stdio.h>

int main()
{

    int a[] = {1, 4, 5, 6, 8, 4, 7, 9, 5, 7, 9};
    int pos = 5;
    int n = 7 for (int i = 0; i < 11; i++)
    {

        int temp = a[pos];
        a[pos] = a[n];
        a[n] = temp;
    }
    for (int j = 0; j < 11; j++)
    {
        printf("%d", a[j]);
    }

    return 0;
}