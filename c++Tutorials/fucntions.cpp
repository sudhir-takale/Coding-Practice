#include <bits/stdc++.h>
using namespace std;

// this is called the fucntion by call by value method
int sum(int a, int b)
{
    int c = a + b;
    return c;
}
// functiopn by call by reference
// here we are dereference the given variable address so that we can change the values at that position
// void swap(int *a, int *b) //derefencing is used here
// {
//     int temp =* a;
//     *a = *b;
// *b = temp;
// }

// in this function we have use the reference variable method

// void swap(int &a, int &b)
// {
//     int temp = a;
//     a = b;
//     b = temp;
// }

// this function not change the values of the varibles
// void swap(int a, int b){
// int temp = a;
// a =  b;
// b = temp;
// }

// return value by reference
int &swap(int &a, int &b)
{ // we are return the value of b by referece so the value of actual variable b will change
    int temp = a;
    a = b;
    b = temp;
    return b;
}

int main()
{

    int n, m;
    cout << "Enter the values of m,n :\n";
    cin >> n;
    cin >> m;

    // cout << "The sum of two number is " << sum(n, m) << endl;
    cout << "the values of variable before swapping " << n << "and b is " << m << endl;
    // swap(n,m); //so here the values does not the change bcoz we have to pass the address of variables

    // swap(n, m); this will also work as we pass the referece of variables
    // swap(&n, &m); //here we pass the address of the actual parameters
    swap(n, m) = 2356437; // in this the value of m change

    cout << "the values of variable before swapping " << n << "and b is " << m << endl;
    return 0;
}