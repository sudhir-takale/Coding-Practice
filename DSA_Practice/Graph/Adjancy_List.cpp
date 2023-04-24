#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <stack>
using namespace std;

vector<int> adj[6];

// void dfsOfGraph(int start)
// {

//     int vis[6] = {0};
//     vis[start] = 1;

//     cout << start << " ";
//     for (auto it : adj[start])
//     {
//         if (adj[it])
//             return;
//         else
//             dfsOfGraph(it);
//     }
// }

vector<int> bfsOfGraph(int start)
{

    vector<int> ans;
    bool vis[6] = {false};

    queue<int> q;

    vis[start] = true;
    q.push(start);

    while (!q.empty())
    {
        int node = q.front();

        q.pop();
        ans.push_back(node);
        for (auto it : adj[node])
        {
            if (vis[it] == false)
            {
                vis[it] = true;
                q.push(it);
            }
        }
    }
    return ans;
}

void addEdge(int src, int dest)
{

    adj[src].push_back(dest);
    adj[dest].push_back(src);
}

int main()
{

    addEdge(0, 1);
    addEdge(4, 3);
    addEdge(0, 2);
    addEdge(1, 3);
    addEdge(4, 1);
    addEdge(5, 2);
    addEdge(3, 5);

    // Number of nodes in graph are 0 1 2 3 4 5

    // dfsOfGraph(2);
    // int m, n;
    // cout << "Enter the number of vertices and edges  in graph " << endl;
    // cin >> m >> n;

    // for (int i = 0; i < n; i++)
    // {
    //     int u, v;
    //     cin >> u >> v;

    //     adj[u].push_back(v);
    //     adj[v].push_back(u);
    // }

    vector<int> answer = bfsOfGraph(2);

    cout << "bfs traversal of graph " << endl;
    for (int i = 0; i < answer.size(); i++)
    {
        cout << answer[i] << " ";
    }
    cout << endl;

    cout << "this is adjancy list is printing " << endl;
    for (int i = 0; i < 6; i++)
    {
        cout << i << "-->";
        for (auto k : adj[i])
        {
            cout << k << " ";
        }
        cout << endl;
    }

    return 0;
}