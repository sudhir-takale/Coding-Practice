#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int partition(int arr[], int s, int e)
{
      int pivot = arr[s];

    int cnt = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= pivot)
        {
            cnt++;
        }
    }

    int pivotIndext = s + cnt; // right position of the pivot index/ element

    swap(arr[s], arr[pivotIndext]); // Place pivot index at its right position

    // Checking the condition    ele < pivot > ele

    int i = s;
    int j = e;

    while (i < pivotIndext && j > pivotIndext)
    {

        while (arr[i] <= pivot)
        {
            i++;
        }
        while (arr[j] >= pivot)
        {
            j--;
        }
        if (i < pivotIndext && j > pivotIndext)
        { // at this position we swap the elements
            swap(arr[i], arr[j]);
        }
    }
    return pivotIndext;
}

void quickSort(int arr[], int s, int e)
{

    if (s >= e)
    {
        return;
    }
    int p = partition(arr, s, e);
    quickSort(arr, s, p - 1);
    quickSort(arr, p + 1, e);
}


int main()
{

    int arr[6] = {1, 6, 3, 9, 5, 2};

    printArray( arr, 6);
    quickSort(arr, 0, 5); // 5 = size - 1
    printArray( arr, 6);

    return 0;
}