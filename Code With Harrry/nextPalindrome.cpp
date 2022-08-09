#include <bits/stdc++.h>
using namespace std;

void checkPali(int n)
{

    int temp = n;
    int rev = 0;
    int rem;
    while (n > 0)
    {

        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }

    if (rev == temp)
    {
        cout << rev << " It is a required palindrome number" << endl;
    }
    else
    {
        cout << rev << " Is not a palindrome numeber checking for next numeber" << endl;
        checkPali(temp + 1);
    }
}
int main()
{

    checkPali(42);

    return 0;
}