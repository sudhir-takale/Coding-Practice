#include <iostream>
#include <vector>
#include <queue>

using namespace std;

void dfs(int node, vector<int> adj[], vector<int> &ls)
{
    int vis[5] = {0};

    vis[node] = 1;
    ls.push_back(node);
    for (auto it : adj[node])
    {
        if (!vis[it])
            dfs(it, adj,ls);
    }
}

int main()
{

    int n, m, u, v;
    cout << "Enter the values of m and n and edges of the graph:" << endl;

    cin >> n >> m;

    vector<int> adj[n + 1];
    for (int i = 0; i < m; i++)
    {
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    
    int start = 0;
    vector<int> ls;
    dfs(start, adj, ls);
    for (int i = 0; i < ls.size(); i++)
    {
        cout << ls[i] << " ";
    }

    return 0;
}
