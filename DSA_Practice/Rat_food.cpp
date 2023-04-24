#include <iostream>
using namespace std;

int main()
{

    int a[] = {2, 5, 7, 3, 9, 5, 8};
    int r;
    int unit;
    cout << "Enter the values of r and unit " << endl;
    cin >> r >> unit;

    int area = r * unit;
    int sum = 0;

    for (int i = 0; i < 7; i++)
    {

        sum = sum + a[i];
        cout << a[i] << " ";
        if (sum >= area)
        {
            break;
        }
    }

    return 0;
}
