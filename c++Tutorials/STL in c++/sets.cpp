#include <bits/stdc++.h>
using namespace std;

// the set stored values in sorted order. It store the only unique values in set and return the sorted value
// random access is not possible in set
int main()
{

    // set<int> s;

    // s.insert(45);
    // s.insert(56);
    // s.insert(56);
    // s.insert(56);
    // s.insert(56);
    // s.insert(34);

    // cout << s.size();
    // cout << s.count(3);  // return the count of the 3 if not present then returns 0

    //   cout << s.count(5); // retur the  count of element

    // cout << s.size();// if your set contains duplicate but set cant take duplicate it will just print unique

    // WE CAN T ACCESS THE ELEMENT RANDOM IN SET
    // we must make the iterator of the set
  
    // set<int>::iterator iter;
    // iter = s.begin();

    // cout <<*iter;  // iter is the pointer so we have to dereference it to display value
    // cout << *iter++;
    // cout << *iter++;
    // cout << *iter + 3; //this is not possible in sets
    // for (iter; iter != s.end(); iter++)
    // {
    //     cout << *iter << " ";
    // }


set<int> st;
    cout << "Enter the values for input " << endl;
for (int i = 0; i < 4; i++)
{ 
    int x;
    cin >> x;       // you can also inputs like this also 
    st.insert(x);
}
set<int> :: iterator  it;

it = st.begin();

for ( it; it != st.end(); it++)
{
    cout << *it << " ";
}










    return 0;
}