// vectors in stl are dynamic array in which we can make the array of any size and we can iterate it through iterator

#include <bits/stdc++.h>
using namespace std;

int main()
{
    +

        4e3w21`

        vector<int>
            v;

    v.push_back(23);
    v.push_back(345);
    v.push_back(12);
    v.push_back(45);

    // cout << v.size();

    // cout << v.capacity() << endl;  // if  you give the size then it will tell how many element can hold the vector
    // v.clear();
    // cout << v.size() << endl;

    // we can insert element only by iterator there is no other way to insert element in specific position
    vector<int>::iterator iter = v.begin();

    // v.insert(iter + 2, 436); // to insert element at specific position

    // v.insert(iter + 3, 565);  // it will insert the element ar 4 postion
    v.insert(iter + 2, 6, 35);         // this will insert the 35 5 times
    for (int i = 0; i < v.size(); i++) // function for displaying element of the array
    {
        cout << v[i] << " ";

        // cout << v.at(i) << " ";  // it tells which element at which position
    }

    return 0;
}