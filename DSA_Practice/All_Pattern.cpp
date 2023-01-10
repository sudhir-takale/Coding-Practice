#include <iostream>
using namespace std;

void print(int n)
{

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void print1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}

void print2(int n) {
    for (int i = n; i >= 1; i--)
    {
       for (int  j = 1; j<= i; j++)
       {
       cout << j;
       }
       cout <<endl;
    }
    
}

int main()
{

    // For the different Test cases in coding it is looks like
    // int t, n;
    // cout << "Enter the number of test cases :" << endl;
    // cin >> t;
    // for (int i = 0; i < t; i++)
    // {
    //     cout << "Enter the value of n" << endl;
    //     cin >> n;
    //     print(n);
    // }
// print1(4);

print2(4);

    return 0;
}