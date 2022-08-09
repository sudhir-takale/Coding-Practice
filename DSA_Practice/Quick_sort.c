// this is the first program which is correct at the first time I am very happy

#include <stdio.h>

void printArray(int *a, int n)
{

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int partition(int *a, int low, int high)
{
    int temp;
    int pivot = a[low];
    int i = low + 1;
    int j = high;
    while (i < j)

    {

        while (a[i] <= pivot)
        {
            i++;
        }
        while (a[j] > pivot)
        {
            j--;
        }
        if (i < j)
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }
    temp = a[low];
    a[low] = a[j];
    a[j] = temp;

    return j;
}
void quickSort(int *a, int low, int high)
{

    if (low < high)
    {
        int pivot = partition(a, low, high);
        quickSort(a, low, pivot - 1);
        quickSort(a, pivot + 1, high);
    }
}

int main()
{

    int a[] = {3, 7, 12, 89, 6, 8, 1, 5};
    int n = 8;
    printArray(a, n);
    quickSort(a, 0, n - 1);
    printArray(a, n);

    return 0;
}
