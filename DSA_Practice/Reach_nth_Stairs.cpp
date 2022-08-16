#include <iostream>
using namespace std;

// you can take 1 step or 2 steps to reach at Nth stair

int reachToNthStairs(int n)
{

    if (n < 0)
    {
        return 0;
    }
    if (n == 0)
    {
        return 1;
    }

    int ans = reachToNthStairs(n - 1) + reachToNthStairs(n - 2);
    return ans;
}

int main()
{

    int n;
    cout << "Enter the value of input " << endl;

    cin >> n;

    cout<<"You reach at Nth stairs in "<<reachToNthStairs(n) << " steps." << endl;

    return 0;
}