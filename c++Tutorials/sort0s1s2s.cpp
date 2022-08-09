#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void sortArray(int a[], int size)
{
    int low = 0;
    int high = size - 1;
    int mid = 0;
    int tmp;

    while (mid <= high)
    {

        for (int i = 0; i < size; i++)
        {
            if (a[i] == 0)
            {
                tmp = a[low];
                a[low] = a[mid];
                a[mid] = tmp;
                low++;
                mid++;
            }

            if (a[i] == 1)
            {
                mid++;
            }

            if (a[i] == 2)
            {
                tmp = a[high];
                a[high] = a[mid];
                a[mid] = tmp;
                high--;
            }
        }

        for (int i = 0; i < size; i++)
        {
            cout << a[i] << " ";
        }
    }
    
}

void printArray(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
}

int main()
{

    int a[] = {0, 1, 2, 2, 1, 0, 0, 2, 1, 0, 0, 1};

    printArray(a, 12);
    cout << "\n";
    sortArray(a, 12);
    // printArray(a, 12);

    return 0;
}