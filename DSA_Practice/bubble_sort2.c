#include <stdio.h>

int bubbleSort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)

    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

void printArray(int a[], int n)
{
    for (int k = 0; k < n; k++)
    {
        printf("%d ", a[k]);
    }
    printf("\n");
}

int main()
{

    int a[6];
    printf("Enter the element to array :\n");
    for (int i = 0; i < 6; i++)
    {
        scanf("%d", &a[i]);
    }
    int n = 6;
    printArray(a, n);
    bubbleSort(a, n);
    printArray(a, n);
    return 0;
}