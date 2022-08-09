#include<bits/stdc++.h>
using namespace std;

int main() {
    int n , m;
    cout << "Enter the values of m and n " << endl;
    cin >> n >>m;
    vector<int> adj[n+1];
    cout << "Enter the path in graph " << endl;
    for (int i = 0; i < m; i++)
    {    
        int u,v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);


    }
    
    return 0;
}