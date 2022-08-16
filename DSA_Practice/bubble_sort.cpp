#include <iostream>
using namespace std;

void bubbleSort(int *a, int n)
{

    if (n == 1 || n == 0)
        return; // it is already sorted

// this will sort the first element and reach out it at its position


    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] > a[i + 1])
        {
            swap(a[i], a[i + 1]);
        }
    }

    return bubbleSort(a, n - 1);
}

int main()
{
    int a[] = {4, 7, 6, 2, 7, 8};
    int size = 6;
    bubbleSort(a, size);
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}