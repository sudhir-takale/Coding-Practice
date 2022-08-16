#include <iostream>
using namespace std;

// i/p = 421
// o/p = four two one

void sayDigits(int n, string arr[])
{

    if (n == 0)
    {

        return;
    }

    int digit = n % 10;
    n = n / 10;

    sayDigits(n, arr);

    cout << arr[digit] << " ";
}

int main()
{

    int n;
    cout << "Enter the value of n " << endl;
    cin >> n;
    string arr[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    sayDigits(n, arr);

    return 0;
}