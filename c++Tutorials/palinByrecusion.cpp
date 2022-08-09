#include <bits/stdc++.h>
using namespace std;

int paliString(string str, int start, int end)
{

    if (start >= end)
    {
        return 1;
    }

    if (str[start] != str[end])
    {
        return 0;
    }

    return paliString(str, start + 1, end - 1);
}

int main()
{

    string s = "abcab";

    int z = s.size() - 1;
  int k = paliString(s, 0, z);
    cout << k << endl;

    return 0;
}