#include <bits/stdc++.h>
using namespace std;
int sum;
int temp;
int summ(int x)
{
    int s = 0;
    while (x != 0)
    {
        int temp = x;
        int n = x % 10;
        s += n;
        x = x / 10;
    }
    return s;
}

int inc(int y)
{
    y += 1;
    return y;
}
int main()
{
    int t;
    int a;
    cin >> t;
    while (t--)
    {
        cin >> a;
        for (int i = 0; i <= 10; i++)
        {
            if (summ(a) % 4 == 0)
            {
                cout << a << endl;
                break;
            }
            else
            {
                a = inc(a);
            }
        }
    }
}