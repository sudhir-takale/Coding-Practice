#include <iostream>
using namespace std;

int fibonacci_Number(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }

    return fibonacci_Number(n - 1) + fibonacci_Number(n - 2);
}

int main()
{

    int n;
    cout << "Enter the value of input :\n";
    cin >> n;
    int m = fibonacci_Number(n);

    cout << "\nThe fibonaccci number is : " << m;
}