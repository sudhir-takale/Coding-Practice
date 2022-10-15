#include<iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
     int k = 11;
    int a[] = {1, 5,3,7, 4,8, 34 ,67, 342, 76, 13};

    int n = 11;
    sort(a, a + n);
    for(int k : a) {
        cout << k << " ";
    }
    cout << endl;
    cout << a[n - k] << endl;

    return 0;
}