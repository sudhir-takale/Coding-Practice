#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int ans = 0, i = 0;
    while (n != 0)
    {
        int bit = n & 1; // this wil gives the last bit of the number and it will compare & operation with that bit
        ans = (bit * pow(10, i) + ans);
        n = n >> 1;  //  right shift 
        i++;
    }
    cout << ans << endl;

    return 0;
}