#include <iostream>
#include <vector>
#include <queue>

using namespace std;

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

    for (int i = 0; i < m; i++)
    {
        cout << i << "->";
        for (int &x : adj[i])
        {
            cout << x << " ";
        }
        cout << endl;
    }
cout << "bfs traversal start here " << endl;
    vector<int> bfs;

    int vis[n] = {0};
    queue<int> q;
    q.push(0);

    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        cout << node << " ";
        for (auto i : adj[node])
        {
            if (!vis[i])
            {
                vis[i] = 1;
                q.push(i);
            }
        }
    }

    
    return 0;
}