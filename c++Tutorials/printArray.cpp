#include <iostream>
using namespace std;

void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i];
    }
}

int main()
{

    int a[] = {12, 45, 67, 34, 56, 343};
    int n = sizeof(a) / sizeof(int);

    printArray(a, n);

    return 0;
}