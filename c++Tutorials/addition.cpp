#include <iostream>
using namespace std;

int main()
{

    int num1;
    int num2;
    cout << "Enter the value of num1 :\n";
    cin >> num1;

    cout << "Enter the value of the num2 :\n";
    cin >> num2;

    int sum = num1 + num2;

    cout << "\nThe addition of " << num1 << "and" << num2 << "is " << sum;
    return 0;
}