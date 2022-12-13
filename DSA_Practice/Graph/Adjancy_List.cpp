#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main()
{

    int n, m;
    cout << "Enter the values of m and n and edges of the graph:" << endl;

    cin >> n >> m;

    vector<int> adj[n + 1];
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<int> ans(n + 1);
    int vis[] = {0};
    queue<int> q;
    int s = 0;
    ans.push_back(s);
    q.push(s);
    vis[s] = 1;

    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        ans.push_back(node);
        for (int it : adj[node])
        {
            if (vis[it] == 0)
            {
                q.push(it);
                vis[it] = 1;
            }
        }
    }

    for (int i : ans)
    {
        cout << i << " ";
    }

    // for (int i = 0; i < m; i++)
    // {
    //     cout << i << "->";
    //     for (int x : adj[i])
    //     {
    //         cout << x << " ";
    //     }
    //     cout << endl;
    // }

    return 0;
}