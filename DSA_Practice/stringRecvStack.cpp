#include <bits/stdc++.h>
using namespace std;

int main()
{
    string ans = "";

    string str = "Sudhir";
    stack<char> s;

    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];

        s.push(ch);
    }


    while (!s.empty())
    {

        char ch = s.top();

        ans.push_back(ch);

        s.pop();
    }

    cout << ans << endl;

    return 0;
}