#include <iostream>
using namespace std;

// by recursion we check the array is sorted or not.

bool isSorted(int a[], int size)
{
    if (size == 0 || size == 1)
    {
        return true;
    }

    if (a[0] > a[1])
    {
        return false;
    }
    else
    {
        bool ans = isSorted(a + 1, size - 1);
        return ans;
    }
}

int main()
{

    int a[] = {2, 5, 6, 8, 8, 76};

    int size = 6;

    bool ans = isSorted(a, size);

    if (ans)
    {
        cout << "Array is sorted." << endl;
    }
    else
    {
        cout << "Array is not sorted." << endl;
    }
    return 0;
}