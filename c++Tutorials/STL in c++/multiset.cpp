#include <bits/stdc++.h>
using namespace std;

int main()
{

    multiset<int> ms;
    ms.insert(34);
    ms.insert(56);
    ms.insert(45);
    ms.insert(45);
    multiset<int>::iterator it = ms.begin();
    
    cout << *it;
    return 0;
}