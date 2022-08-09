#include <stdio.h>

void printArray(int *a, int n)
{
    for (int k = 0; k < n; k++)
    {
        printf("%d ", a[k]);
    }
    printf("\n");
}
void insertionSort(int *a, int n)
{
    int key;
    for (int i = 1; i < n; i++)
    {
        key = a[i];
        int j = i - 1; // to compare with the prev element as we are going to insert the element at the left side
        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j--; // this element is compare then again compare the next element of the array
        }
        a[j + 1] = key;
    }
}
int main()
{

    int a[] = {3, 7, 4, 83, 86, 34, 2};
    int n = 7;
    printArray(a, n);
    insertionSort(a, n);
    printArray(a, n);

    return 0;
}
