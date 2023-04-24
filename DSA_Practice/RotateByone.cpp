#include <iostream>
using namespace std;

int main()
{

    int a[] = {1, 2, 3, 4, 5};
    int temp = a[0];
    for (int i = 1; i < 5; i++)
    {

        a[i - 1] = a[i];
    }

    a[4] = temp;

    for (int b : a)
    {
        cout << b << " ";
    }
    return 0;
}