#include <iostream>
#include <vector>
using namespace std;

void display(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}

int main()
{

    int size, element;
    cout << "Enter the size of vector " << endl;
    cin >> size;

    vector<int> vec;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the element in vector " << endl;
        cin >> element;
        vec.push_back(element);
    }

    display(vec);

    // INSERT method is used to insert element in vector is requires the interator and the element

    vector<int>::iterator iter = vec.end();
    vec.insert(iter, 353); // it insert data before the iter
    vec.insert(iter + 1, 46);

    display(vec);

    return 0;
}