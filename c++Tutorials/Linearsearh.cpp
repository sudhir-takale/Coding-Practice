#include <bits/stdc++.h>
using namespace std;

// linear search in cpp 

int linearSearch(int a[], int size, int target)
{

    for (int i = 0; i < size; i++)
    {
        if (a[i] == target)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int target;
    int a[] = {1, 34, 6, 45, 67 ,34, 23, 89, 45};
    int size = 9;
   
   cout << "Enter the element which you want to search " <<endl;
   cin >> target ;

    cout <<"The element is present at the index of " << linearSearch(a, size, target) << endl;

    return 0;
}