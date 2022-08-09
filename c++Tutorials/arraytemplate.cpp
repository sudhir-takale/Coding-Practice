#include <iostream>
using namespace std;

template <class T>

class Array
{
public:
    int size;
    T *array;

    void getArray(T *arr, int si)
    {
        array = arr;
        size = si;
        }

    void printArray()
    {
        for (int i = 0; i < size; i++)
        {
            cout << array[i] << endl;
        }
    }
};

int main()
{
    int a[] = {23, 45, 67, 456, 645};
    int size = 5;

    Array<int> arr;

    arr.getArray(a, size);

    arr.printArray();

    return 0;
}