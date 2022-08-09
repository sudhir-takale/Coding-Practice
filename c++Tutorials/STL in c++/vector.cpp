#include <iostream>
#include <vector>
using namespace std;

void display(vector<int> &v)
{ // it takes the reference of vector to perform the work

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
        // cout << v.at(i) << " "; // it tells which element at which position
    }
}

int main()
{
    int element;
    vector<int> vec1;
    for (int i = 0; i < 4; i++)
    {   
        cout << "Enter the element in vector " <<endl;
        cin >> element;
        vec1.push_back(element);  // to push the values in vector
    }
    vec1.pop_back();  // it will removes last element from vector
    display(vec1);
    return 0;
}