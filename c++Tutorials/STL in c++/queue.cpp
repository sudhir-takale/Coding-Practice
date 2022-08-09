#include<bits/stdc++.h>
using namespace std;

int main() {

    queue<int> q;
  q.push(45);
  q.push(78);
  q.push(23);
  q.push(34);

  cout << q.size() << endl;

  
  cout << q.front() << endl;   // gives which element will delete after the pop operation
  q.pop();
  cout << q.front() << endl;   // gives which element will delete after the pop operation
  q.emplace(34);
  q.emplace(546);

 while (!q.empty())         
 {
     cout << q.front() << " " ;
     q.pop();
 }
 

    return 0;
}