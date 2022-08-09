#include <bits/stdc++.h>
using namespace std;

void checkValid(string str)
{

    stack<char> s;

    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];

        if (ch == '(' || ch == '[' || ch == '{')
        {

            s.push(ch);
        }

        else
        {

            if (!s.empty())
            {
                char top = s.top();

                if ((ch == '}' && top == '{') || (ch == ')' && top == '(') || (ch == ']' && top == '['))
                {

                    s.pop();
                }
                else
                {
                    cout << "Not a valid Parenthesis " << endl;
                }
            }
            else
            {
                cout << "Not a valid parenthesis" << endl;
            }
        }
    }
    if (s.empty())
    {
        cout << "This is a valid parenthesis " << str << endl;
    }
    else
    {
        cout << "Not a valid parenthesis " << endl;
    }
}

int main()
{

    string str = "[({({})})]";

    checkValid(str);

    return 0;
}