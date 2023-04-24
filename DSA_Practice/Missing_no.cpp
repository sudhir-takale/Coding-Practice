#include <iostream>
#include <vector>
using namespace std;

void missing(vector<int> v)
{

    int sum = (13 * 14) / 2;

    int s2 = 0;
    for (int i = 0; i < 12; i++)
    {

        s2 += v[i];
    }

    cout << sum - s2 << endl;
}

int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 12, 13};

    cout << "missing number is ";
    missing(v);
    return 0;
}