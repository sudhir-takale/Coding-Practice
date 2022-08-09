#include<bits/stdc++.h>
using namespace std;

int main() {

    stack<int>st;
//    cout << "Enter the values in stack "<<endl;
//     for (int i = 0; i < 5; i++)
//     {    int x;
//          cin >> x;
//         st.push(x);
//     }
 st.push(34);
 st.push(45);
 st.push(45);
 st.push(78);
 st.push(99);
 cout << st.size() << endl;
  cout << st.top();

  

  while (!st.empty())
  {
      cout << st.top() << " ";
      st.pop();
  }
    

    return 0;
}