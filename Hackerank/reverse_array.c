#include <stdio.h>

int main()
{

    int a[] = {4, 5, 7, 3, 7, 4, 7, 45};
    int n = 8;
    for (int i = n; i >= 0; i--) ///we start array from length and then we stop the array at the 0th position
    {
        printf("%d ", a[i]);
    }

    return 0;
}
