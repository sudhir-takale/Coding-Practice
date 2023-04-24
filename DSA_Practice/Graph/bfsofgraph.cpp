// #include <iostream>
// #include <vector>
// #include <queue>

// using namespace std;

// void addEdge(int src, int dest, vector<int> adj[])
// {

//     adj[src].push_back(dest);
//     adj[dest].push_back(src);
// }

// void dfsOfGraph(int start, vector<int> adj[], vector<bool> &vis)
// {

//     vis[start] = false;
//     cout << start << " ";

//     for (auto it : adj[start])
//     {
//         if (vis[it] != false)
//         {
//             dfsOfGraph(it, adj, vis);
//         }
//     }
// }

// void bfsOfGraph(int start, vector<int> adj[], vector<bool> &vis)
// {

//     queue<int> q;

//     vis[start] = true;
//     q.push(start);
//     while (!q.empty())
//     {
//         int node = q.front();
//         q.pop();
//         cout << node << " ";

//         for (auto it : adj[node])
//         {
//             if (vis[it] == false)
//             {
//                 vis[it] = true;
//                 q.push(it);
//             }
//         }
//     }
// }

// int main()
// {

//     vector<int> adj[6];
//     vector<bool> vis(7, false);
//     cout << "bfs traversal of the graph is :" << endl;

//     addEdge(0, 1, adj);
//     addEdge(2, 3, adj);
//     addEdge(1, 4, adj);
//     addEdge(0, 4, adj);
//     addEdge(2, 5, adj);
//     addEdge(4, 5, adj);

//     bfsOfGraph(0, adj, vis);
// cout << endl;
//     cout << "dfs of the graph is :" << endl;
//     dfsOfGraph(3, adj, vis);

//     return 0;
// }

#include <iostream>
#include <vector>
using namespace std;

vector<int> adj[5];
void dfs(int start)
{

    cout << start << " ";
  int vis[5] = {0};
    vis[start] = 1;

    for (auto it : adj[start])
    {
        if (adj[it] == 0)
        {
            dfs(it);
        }
        else
        {
            return;
        }
    }
}

int main()
{

    int m;
    cout << "Enter the number of vertices and edges of the graph :" << endl;
    cin >> m;

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    return 0;
}