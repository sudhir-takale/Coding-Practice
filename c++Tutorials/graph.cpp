#include<iostream>
#include<vector>
using namespace std;

int main() {
int n, m;
cout << "Enter the values of the m and n :";
cin >> n >> m;


 vector<int> adj[n + 1];
 for (int  i = 0; i < m; i++)
 {
     int u, v;
     
     cout << "Enter the value of the u and v :";
     cin >> u >>v;
     adj[u].push_back(v);
     adj[v].push_back(u);
 }
       vector<int> bfs




    return 0;
}