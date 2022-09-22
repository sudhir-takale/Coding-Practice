#include <iostream>
#include <stack>
using namespace std;

int main()
{

    stack<char> s;

    string name = "Sudhir";

    for (int i = 0; i < name.length(); i++)
    {
        char k = name[i];
        s.push(k);
    }

    string ans = "";

    while (!s.empty())
    {

        char ch = s.top();
        ans.push_back(ch);
        s.pop();
    }

    cout << "Your reversed string looks like " << ans << endl;

    return 0;
}